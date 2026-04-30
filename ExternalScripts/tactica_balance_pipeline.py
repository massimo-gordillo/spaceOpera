# A script which pulls unit values and combat multipliers for the game values from Tactica. 
# This script is intended to help me balance the factions across the matchups
# It generates random armies at a given budget, then simulates combats until one army stands. 
# Both sides have an opportunity to play first

from dataclasses import dataclass, field
from combat_multipliers import get_multiplier
import csv
import random
import math
import os
from typing import List, Dict, Tuple, Optional
import pandas as pd
import matplotlib.pyplot as plt



#output_dir = "C:/Users/massi/Documents/gitRepo/spaceOpera/ExternalScripts/Results"

# Make sure it exists
#os.makedirs(output_dir, exist_ok=True)

# helper display API (provided by the notebook environment)
#try:
#    from caas_jupyter_tools import display_dataframe_to_user
#except Exception:
#   display_dataframe_to_user = None

csv_path = "C:/Users/massi/Documents/gitRepo/spaceOpera/SO-Client/Assets/Resources/GameValues/"
OUT_DIR = "C:/Users/massi/Documents/gitRepo/spaceOpera/ExternalScripts/Results"
os.makedirs(OUT_DIR, exist_ok=True)

@dataclass
class UnitTemplate:
    name: str
    race: str
    hp: float
    attack: float
    #defense: float
    cost: float
    unit_terrain_type: str
    can_attack_land:bool
    can_attack_air:bool
    can_attack_sea:bool
    # extras stored but ignored by core sim
    extras: Dict = field(default_factory=dict)

    
@dataclass
class UnitInstance:
    template: UnitTemplate
    hp: float

    @property
    def max_hp(self):
        return self.template.hp

    @property
    def cost(self):
        return self.template.cost


def normalize_columns(df: pd.DataFrame) -> pd.DataFrame:
    # lowercase column names and strip spaces for flexible CSV inputs
    df = df.rename(columns={c: c.strip().lower() for c in df.columns})
    return df

def load_units_from_csv() -> List[UnitTemplate]:
    file_name = "UnitValues - SimCopy.json"
    df = pd.read_csv(csv_path + file_name)

    df.columns = df.columns.str.strip()

    df = df[
    (df["isNotPrototype"].astype(str).str.upper() == "TRUE")
    ]

    df = df.rename(columns={
    'progeny': 'Race',
    'unitName': 'Name',
    'price': 'Cost',
    'healthMax': 'HP',
    'baseDamage': 'Attack',
    'unitTerrainType':'unit_terrain_type',
    'canAttackLand' : 'can_attack_land',
    'canAttackAir' : 'can_attack_air',
    'canAttackSea' : 'can_attack_sea',
    'isResourceUnit': 'isresourceunit',
    'canFireBack': 'canfireback',
    'damageType': 'damagetype',
    'weaponType': 'weapontype',
    'healthType': 'healthtype',
    # Optional: if you want to factor in defense later
    # 'defense': 'Defense'
    })
    df = normalize_columns(df)
    # Convert boolean columns properly
    bool_columns = ['can_attack_land', 'can_attack_air', 'can_attack_sea', 'isresourceunit', 'canfireback']
    for col in bool_columns:
        if col in df.columns:
            df[col] = df[col].astype(str).str.upper() == 'TRUE'
    required = ["name", "race", "hp", "attack", "cost", "unit_terrain_type","can_attack_land","can_attack_air","can_attack_sea" ]
    for r in required:
        if r not in df.columns:
            raise ValueError(f"CSV is missing required column: '{r}' (case-insensitive)")
    templates = []
    for _, row in df.iterrows():
        extras = {k: row[k] for k in df.columns if k not in required}
        
        # Apply cost reduction for Ertrian units (1.11 reduction factor)
        cost = float(row["cost"])
        if str(row["race"]).lower() == "ertrian":
            cost = int(cost / 1.11)
        
        templates.append(UnitTemplate(
            name=str(row["name"]),
            race=str(row["race"]),
            hp=float(row["hp"]),
            attack=float(row["attack"]),
            #defense=float(row["defense"]),
            cost=cost,
            unit_terrain_type=str(row["unit_terrain_type"]),
            can_attack_land=bool(row["can_attack_land"]),
            can_attack_air=bool(row["can_attack_air"]),
            can_attack_sea=bool(row["can_attack_sea"]),
            extras=extras
        ))
    return templates


# Army building: sample units (with replacement) until budget exhausted
def build_army_random(instances: List[UnitInstance], race: str, budget: float, rng: random.Random, allow_zero_cost=False) -> List[dict]:
    all_units = [t for t in instances if t.race.lower() == race.lower()]
    # Filter out units that cost more than 50% of budget
    max_unit_cost = budget * 0.51
    all_units = [t for t in all_units if t.cost <= max_unit_cost]
    
    combat_units = [t for t in all_units if not t.extras.get("isresourceunit", False)]
    resource_units = [t for t in all_units if t.extras.get("isresourceunit", False)]
    
    if not combat_units:
        return []
    
    army = []
    total = 0.0
    resource_count = 0
    resource_cost = 0.0
    max_resource_cost = min(1000.0, budget * 0.2)  # Max of $1000 or 20% of budget
    max_resource_units = 10
    
    # Pre-compute min cost to avoid infinite loops
    min_cost = min((t.cost for t in combat_units if t.cost > 0), default=0.0)
    
    # If all zero-cost and not allowed, handle specially
    if min_cost == 0 and not allow_zero_cost:
        for t in combat_units:
            if t.cost == 0 and total + t.cost <= budget:
                army.append(UnitInstance(template=t, hp=t.hp))
                total += t.cost
        return army
    
    attempts = 0
    while True:
        # safety guard
        attempts += 1
        if attempts > 10000:
            break
        
        # Decide whether to pick a resource unit or combat unit
        pool = combat_units
        if resource_units and resource_count < max_resource_units and resource_cost < max_resource_cost:
            # 20% chance to pick a resource unit if we have budget for it
            if rng.random() < 0.2:
                pool = resource_units
        
        choice = rng.choice(pool)
        
        if total + choice.cost <= budget:
            army.append(UnitInstance(template=choice, hp=choice.hp))
            total += choice.cost
            
            if choice.extras.get("isresourceunit", False):
                resource_count += 1
                resource_cost += choice.cost
        else:
            # if no unit can fit, break
            if min_cost == 0 or total + min_cost > budget:
                break
    
    return army


def choose_target(attacker, enemy_units, policy):
    """
    Returns the chosen defender or None if no valid attack.
    """

    if policy == "random":
        valid_targets = [
            u for u in enemy_units if can_unit_attack(attacker, u)
        ]
        return random.choice(valid_targets) if valid_targets else None

    elif policy == "max_cost":
        best_target = None
        best_delta = 0.0

        for defender in enemy_units:
            if not can_unit_attack(attacker, defender):
                continue

            delta = get_damage_cost_delta(
                attacker,
                defender,
                lambda a, d, fb: get_damage_before_luck(
                    a, d, fb
                ),
                can_unit_attack
            )

            if delta > best_delta:
                best_delta = delta
                best_target = defender

        return best_target  # May be None if all deltas were 0

    else:
        raise ValueError(f"Unknown policy: {policy}")

    
def get_damage_before_luck(attacker, defender, is_fireback):
    """
    Full damage calculation without luck.
    """

    # Check legality
    if not can_unit_attack(attacker, defender):
        return 0.0

    base_damage = get_attacker_ratio_damage(attacker)
    multiplier = get_damage_multiplier(attacker, defender)

    return base_damage * multiplier

def get_damage_cost_delta(attacker, defender, get_damage_before_luck, can_unit_attack):
    """
    Returns a float representing how cost-effective it is for 'attacker' to attack 'defender'.
    Uses the same logic as the C# GetDamageCostDelta function.

    Parameters:
    - attacker: dict-like or object with .health_current, .health_max, .cost, etc.
    - defender: same structure as attacker.
    - get_damage_before_luck: function(attacker, defender, is_fireback: bool) -> float
    - can_unit_attack: function(attacker, defender) -> bool
    """

    # Avoid divide-by-zero errors
    corrected_price = defender.cost if defender.cost > 0 else 1

    # Attack cost — how much value the attacker gains by damaging the defender
    attack_damage = min(
        get_damage_before_luck(attacker, defender, False),
        defender.hp
    )
    attack_cost = attack_damage * corrected_price / defender.max_hp

    # Fireback cost — expected value lost by being counterattacked
    fireback_cost = 0
    if get_damage_before_luck(attacker, defender, False) < defender.hp:
        fireback_damage = min(
            get_damage_before_luck(defender, attacker, True),
            attacker.hp
        )
        fireback_cost = (
            fireback_damage * attacker.cost / attacker.max_hp
        )

    # If defender is a resource unit, can't fire back, or can't attack attacker → no fireback penalty

    can_fire_back = defender.template.extras.get("canfireback", True)
    if  not can_fire_back or not can_unit_attack(defender, attacker):
        fireback_cost = 0

    delta = attack_cost - fireback_cost
    return max(delta, 0.0)

def get_attacker_ratio_damage(attacker):
    """
    Scales damage based on current health ratio.
    """
    return attacker.template.attack* (
        attacker.hp / attacker.template.hp
    )

def can_unit_attack(attacker, defender):
    if attacker is None or defender is None:
        return False

    #print(defender.keys())
    #terrain = defender.unit_terrain_type
    terrain = defender.template.unit_terrain_type

    if terrain == "land":
        return attacker.template.can_attack_land
    elif terrain == "sea":
        return attacker.template.can_attack_sea
    elif terrain == "air":
        return attacker.template.can_attack_air

    # Fail open like your Debug.LogError path
    return True

def combine_combat_enums(damage_type, weapon_type):
    return f"{damage_type} {weapon_type}"


def get_damage_multiplier(attacker, defender) -> float:
    """
    Returns the combat multiplier for an attacker vs defender.
    """
    # Combine damage type and weapon type to match your CSV keys
    combined_key = combine_combat_enums(
        attacker.template.extras.get("damageType"),
        attacker.template.extras.get("weaponType")
    )

    health_type = defender.template.extras.get("healthType")

    # Use the module function
    return get_multiplier(combined_key, health_type)


def get_alive_units(army: List[UnitInstance]) -> List[UnitInstance]:
    """Quick filter of alive units."""
    return [u for u in army if u.hp > 0]


def compute_damage(attacker: UnitInstance, defender: UnitInstance) -> float:
    a = attacker.template.attack
    #d = defender.template.defense
    #raw = a - d
    raw = a  # ignore defense for simplicity
    # ensure at least 1 damage if attacker has any attack (avoids infinite matches)
    if raw <= 0:
        return 1.0 if a > 0 else 0.0
    return raw

def perform_attacks(attackers: List[UnitInstance], defenders: List[UnitInstance], policy: str, rng: random.Random):
    # Get only alive attackers to reduce iterations
    alive_attackers = get_alive_units(attackers)
    for attacker in alive_attackers:
        target = choose_target(attacker, defenders, policy)
        if target is None:
            return
        dmg = compute_damage(attacker, target)
        target.hp -= dmg
        
# def simulate_battle(armyA: List[dict], armyB: List[dict], policy_A: str, policy_B: str, first: str, rng: random.Random, max_turns=500) -> Tuple[str,int,dict]:
#     # Deep copy armies (we assume input armies are fresh copies or templates)
#     A = [{"template": u.template, "hp": u["hp"]} for u in armyA]
#     B = [{"template": u.template, "hp": u["hp"]} for u in armyB]
#     turn = 0
#     # Determine who starts: "A" or "B"
#     current = first.upper()
#     while turn < max_turns and any(u["hp"]>0 for u in A) and any(u["hp"]>0 for u in B):
#         if current == "A":
#             perform_attacks(A, B, policy_A, rng)
#             current = "B"
#         else:
#             perform_attacks(B, A, policy_B, rng)
#             current = "A"
#         turn += 1
#     aliveA = sum(1 for u in A if u["hp"]>0)
#     aliveB = sum(1 for u in B if u["hp"]>0)
#     remHpA = sum(u["hp"] for u in A if u["hp"]>0)
#     remHpB = sum(u["hp"] for u in B if u["hp"]>0)
#     if aliveA > 0 and aliveB == 0:
#         winner = "A"
#     elif aliveB > 0 and aliveA == 0:
#         winner = "B"
#     elif aliveA == 0 and aliveB == 0:
#         # simultaneous wipe -> tie, treat as win for neither; we'll count it as 0.5 for A in aggregation
#         winner = "tie"
#     else:
#         # max turns reached -> decide by remaining HP
#         if remHpA > remHpB:
#             winner = "A"
#         elif remHpB > remHpA:
#             winner = "B"
#         else:
#             winner = "tie"
#     stats = {"aliveA": aliveA, "aliveB": aliveB, "remHpA": remHpA, "remHpB": remHpB, "turns": turn}
#     return winner, turn, stats

def calculate_army_value(army: List[UnitInstance]) -> float:
    """Calculate total remaining value of units (cost * hp_ratio)."""
    total_value = 0.0
    for unit in army:
        if unit.hp > 0:
            hp_ratio = unit.hp / unit.max_hp
            total_value += unit.template.cost * hp_ratio
    return total_value

def simulate_battle(
    armyA: List[UnitInstance],
    armyB: List[UnitInstance],
    policy_A: str,
    policy_B: str,
    first: str,
    rng: random.Random,
    max_turns: int = 40
) -> Tuple[str, int, dict]:

    # Deep copy armies (new instances, shared templates)
    A = [UnitInstance(u.template, u.hp) for u in armyA]
    B = [UnitInstance(u.template, u.hp) for u in armyB]

    turn = 0
    current = first.upper()

    while turn < max_turns:
        # Check if either side is completely dead
        aliveA = get_alive_units(A)
        aliveB = get_alive_units(B)
        
        if not aliveA or not aliveB:
            break
        
        if current == "A":
            perform_attacks(A, B, policy_A, rng)
            current = "B"
        else:
            perform_attacks(B, A, policy_B, rng)
            current = "A"

        turn += 1

    # Decide winner by remaining unit value
    valueA = calculate_army_value(A)
    valueB = calculate_army_value(B)
    
    if valueA > valueB:
        winner = "A"
    elif valueB > valueA:
        winner = "B"
    else:
        winner = "Draw"

    return winner, turn, {
        "aliveA": sum(1 for u in A if u.hp > 0),
        "aliveB": sum(1 for u in B if u.hp > 0),
        "remHpA": sum(u.hp for u in A if u.hp > 0),
        "remHpB": sum(u.hp for u in B if u.hp > 0),
        "turns": turn,
    }


# Run batch simulations for all pairs of races, budgets, and first-player options.
def run_batch(instances: List[UnitInstance],
              races: List[str],
              budgets: List[float],
              sims_per_pair: int = 500,
              rng_seed: Optional[int]=None,
              policy_A: str="max_cost",
              policy_B: str="max_cost") -> pd.DataFrame:
    rng = random.Random(rng_seed)
    records = []
    for budget in budgets:
        for raceA in races:
            for raceB in races:
                if raceA == raceB:
                    continue
                for first in ["A","B","alternate"]:
                    wins = 0.0
                    ties = 0.0
                    sum_aliveA = 0
                    sum_aliveB = 0
                    sum_remHpA = 0.0
                    sum_remHpB = 0.0
                    sum_turns = 0
                    for i in range(sims_per_pair):
                        # alternate who goes first if requested
                        if first == "alternate":
                            first_side = "A" if (i % 2 == 0) else "B"
                        else:
                            first_side = first
                        armyA = build_army_random(instances, raceA, budget, rng)
                        armyB = build_army_random(instances, raceB, budget, rng)
                        # if either army is empty (missing race), skip
                        if not armyA or not armyB:
                            continue
                        winner, turns, stats = simulate_battle(armyA, armyB, policy_A, policy_B, first_side, rng)
                        if winner == "A":
                            wins += 1.0
                        elif winner == "B":
                            wins += 0.0
                        else:
                            ties += 1.0
                        sum_aliveA += stats["aliveA"]
                        sum_aliveB += stats["aliveB"]
                        sum_remHpA += stats["remHpA"]
                        sum_remHpB += stats["remHpB"]
                        sum_turns += stats["turns"]
                    total = sims_per_pair if sims_per_pair>0 else 1
                    effective = total - 0 # we didn't track skips explicitly here
                    # compute winrate treating tie as 0.5
                    winrateA = (wins + 0.5*ties) / total if total>0 else 0.0
                    rec = {
                        "raceA": raceA,
                        "raceB": raceB,
                        "budget": budget,
                        "first_mode": first,
                        "winrateA": winrateA,
                        "avg_aliveA": (sum_aliveA/total) if total>0 else 0,
                        "avg_aliveB": (sum_aliveB/total) if total>0 else 0,
                        "avg_remHpA": (sum_remHpA/total) if total>0 else 0.0,
                        "avg_remHpB": (sum_remHpB/total) if total>0 else 0.0,
                        "avg_turns": (sum_turns/total) if total>0 else 0.0,
                        "sims_run": total
                    }
                    records.append(rec)
    df = pd.DataFrame.from_records(records)
    return df

# Visualization helpers (matplotlib only; each chart in its own figure)
def plot_heatmap(df: pd.DataFrame, out_path: str, title: str="Winrate Heatmap (A vs B)", first_mode_filter: Optional[str]=None):
    # prepare pivot of winrateA with rows=raceA cols=raceB
    sub = df[df["first_mode"]==first_mode_filter] if first_mode_filter else df
    pivot = sub.pivot_table(index="raceA", columns="raceB", values="winrateA", aggfunc="mean")
    # simple heatmap via imshow; annotate
    fig, ax = plt.subplots(figsize=(6,6))
    mat = ax.imshow(pivot.values, vmin=0.0, vmax=1.0)
    ax.set_xticks(range(len(pivot.columns)))
    ax.set_yticks(range(len(pivot.index)))
    ax.set_xticklabels(pivot.columns, rotation=45, ha="right")
    ax.set_yticklabels(pivot.index)
    ax.set_title(title)
    # annotate values
    for i in range(pivot.shape[0]):
        for j in range(pivot.shape[1]):
            ax.text(j, i, f"{pivot.values[i,j]:.2f}", ha="center", va="center", fontsize=8)
    fig.colorbar(mat, ax=ax)
    fig.tight_layout()
    fig.savefig(out_path)
    plt.close(fig)
    return out_path

def plot_winrate_by_budget(df: pd.DataFrame, out_path: str, raceA: Optional[str]=None, raceB: Optional[str]=None):
    sub = df.copy()
    if raceA:
        sub = sub[sub["raceA"]==raceA]
    if raceB:
        sub = sub[sub["raceB"]==raceB]
    # aggregate by budget and raceA
    agg = sub.groupby(["budget","raceA"])["winrateA"].mean().reset_index()
    fig, ax = plt.subplots(figsize=(8,5))
    for r in agg["raceA"].unique():
        row = agg[agg["raceA"]==r]
        ax.plot(row["budget"], row["winrateA"], marker='o', label=r)
    ax.set_xlabel("Budget")
    ax.set_ylabel("Winrate (A)")
    ax.set_title("Winrate vs Budget (per RaceA)")
    ax.legend()
    fig.tight_layout()
    fig.savefig(out_path)
    plt.close(fig)
    return out_path

def plot_matchups_by_budget(df: pd.DataFrame, out_path: str):
    """
    Plot individual matchups with trend lines for each side.
    Creates 6 trend lines total: 2 per matchup (one for each side).
    The second line (mirror) is drawn as a light dashed line.
    """
    sub = df.copy()
    # Aggregate by budget, raceA, raceB
    agg = sub.groupby(["budget", "raceA", "raceB"])["winrateA"].mean().reset_index()
    
    # Get all unique matchups (unordered pairs)
    matchups = set()
    for _, row in agg.iterrows():
        pair = tuple(sorted([row["raceA"], row["raceB"]]))
        matchups.add(pair)
    
    matchups = sorted(list(matchups))
    
    print("\n=== MATCHUP DATA ANALYSIS ===")
    print(f"Found {len(matchups)} matchups\n")
    
    # Debug: Check if opposite matchups exist and compare symmetry
    for race1, race2 in matchups:
        data_1v2 = agg[(agg["raceA"] == race1) & (agg["raceB"] == race2)].sort_values("budget")
        data_2v1 = agg[(agg["raceA"] == race2) & (agg["raceB"] == race1)].sort_values("budget")
        
        print(f"\n{race1} vs {race2}:")
        print(f"  {race1} attacking {race2}: {len(data_1v2)} rows")
        if not data_1v2.empty:
            print(f"    Winrates: {data_1v2['winrateA'].values}")
        
        print(f"  {race2} attacking {race1}: {len(data_2v1)} rows")
        if not data_2v1.empty:
            print(f"    Winrates: {data_2v1['winrateA'].values}")
            inverted = 1.0 - data_2v1['winrateA'].values
            print(f"    Inverted (1 - winrate): {inverted}")
        
        if not data_1v2.empty and not data_2v1.empty:
            # Check if they're symmetric
            diff = (data_1v2['winrateA'].values + data_2v1['winrateA'].values)
            print(f"    Sum of opposite winrates (should be ~1.0): {diff}")
    
    print("\n=== END ANALYSIS ===\n")
    
    fig, ax = plt.subplots(figsize=(8, 8))
    
    # Color palette for matchups
    colors = plt.cm.Set2(range(len(matchups)))
    
    for idx, (race1, race2) in enumerate(matchups):
        color = colors[idx]
        
        # Get data for race1 vs race2
        data_1v2 = agg[(agg["raceA"] == race1) & (agg["raceB"] == race2)].sort_values("budget")
        if not data_1v2.empty:
            ax.plot(data_1v2["budget"], data_1v2["winrateA"], 
                   marker='o', color=color, linewidth=3.5, 
                   label=f"{race1} vs {race2}")
        
        # Get actual data for race2 vs race1 (not inverted)
        data_2v1 = agg[(agg["raceA"] == race2) & (agg["raceB"] == race1)].sort_values("budget")
        if not data_2v1.empty:
            ax.plot(data_2v1["budget"], data_2v1["winrateA"], 
                   marker='s', color=color, linewidth=3.5, linestyle='--', alpha=0.6,
                   label=f"{race2} vs {race1}")
    
    ax.set_xlabel("Budget", fontsize=12)
    ax.set_ylabel("Winrate", fontsize=12)
    ax.set_title("Individual Matchups: Winrate vs Budget", fontsize=14)
    ax.axhline(y=0.5, color='gray', linestyle=':', alpha=0.5)
    ax.set_ylim(0, 1)
    ax.legend(loc='best', fontsize=9)
    ax.grid(True, alpha=0.3)
    fig.tight_layout()
    fig.savefig(out_path)
    plt.close(fig)
    return out_path

def save_results_and_plots(df: pd.DataFrame, out_dir: str):
    csv_out = os.path.join(out_dir, "balance_results.csv")
    df.to_csv(csv_out, index=False)
    heatmap_path = os.path.join(out_dir, "heatmap_winrateA_vs_B.png")
    plot_heatmap(df, heatmap_path, title="Winrate Heatmap (A vs B) - All First Modes")
    heatmap_path_Afirst = os.path.join(out_dir, "heatmap_winrateA_vs_B_Afirst.png")
    plot_heatmap(df, heatmap_path_Afirst, title="Winrate Heatmap (A vs B) - A first", first_mode_filter="A")
    lineplot_path = os.path.join(out_dir, "winrate_by_budget.png")
    plot_winrate_by_budget(df, lineplot_path)
    matchups_path = os.path.join(out_dir, "matchups_by_budget.png")
    plot_matchups_by_budget(df, matchups_path)
    return {"csv": csv_out, "heatmap": heatmap_path, "heatmap_Afirst": heatmap_path_Afirst, "lineplot": lineplot_path, "matchups": matchups_path}

# ---------------- Demo run (small) ----------------
#sample_csv = "C:/Users/massi/Documents/gitRepo/spaceOpera/SO-Client/Assets/Resources/GameValues/UnitValues.json"

#create_sample_csv(sample_csv)
templates = load_units_from_csv()


races = sorted(list({t.race for t in templates}))
budgets = [2000, 3000, 5000, 7000, 10000, 14000]
print(f"Races found: {races}  -- sample budgets: {budgets}")

# Run a relatively small number of sims for the demo so it completes quickly
results_df = run_batch(templates, races, budgets, sims_per_pair=60, rng_seed=42, policy_A="max_cost", policy_B="max_cost")

# show a small sample of results
#if display_dataframe_to_user:
#    display_dataframe_to_user("Balance Results (sample)", results_df.head(50))
#else:
print(results_df.head(20))

# Save results and plots
artifacts = save_results_and_plots(results_df, OUT_DIR)
print("Artifacts written to:", artifacts)

# Provide basic summary
summary = results_df.groupby("raceA")["winrateA"].mean().reset_index().sort_values("winrateA", ascending=False)
#if display_dataframe_to_user:
#    display_dataframe_to_user("Average Winrate by RaceA (summary)", summary)
#else:

print(summary)

# Print file paths for download
for k,v in artifacts.items():
    print(f"{k}: {v}")
