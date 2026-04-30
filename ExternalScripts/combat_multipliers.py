import csv

# Global dictionary to hold the multipliers
COMBAT_MULTIPLIERS = {}

# Path to your CSV folder (adjust as needed)
csv_path = "C:/Users/massi/Documents/gitRepo/spaceOpera/SO-Client/Assets/Resources/GameValues/"

def load_combat_multipliers_from_csv():
    """Load combat multipliers from CSV into a nested dictionary."""
    global COMBAT_MULTIPLIERS
    COMBAT_MULTIPLIERS = {}

    multipliers_file_name = "SpaceOperaUnitValues - Combat Multipliers.csv"

    with open(csv_path + multipliers_file_name, newline="", encoding="utf-8") as csvfile:
        reader = csv.reader(csvfile)
        rows = list(reader)

    # Must have header + at least one data row
    if len(rows) < 2:
        raise ValueError("Combat multiplier CSV is empty or only contains headers.")

    headers = rows[0]  # first row is header

    for row_idx, row in enumerate(rows[1:], start=1):
        if len(row) != len(headers):
            print(f"Skipping malformed row {row_idx}: {row}")
            continue

        health_type = row[0]
        inner_dict = {}

        for col_idx in range(1, len(headers)):
            damage_type = headers[col_idx]
            value = row[col_idx]

            try:
                multiplier = float(value)
                inner_dict[damage_type] = multiplier
            except ValueError:
                print(f"Invalid multiplier at row {row_idx}, column '{damage_type}': {value}")

        COMBAT_MULTIPLIERS[health_type] = inner_dict

    return COMBAT_MULTIPLIERS


def get_multiplier(damage_type: str, health_type: str) -> float:
    """
    Returns the multiplier for a given attacker's damage type against a defender's health type.
    Defaults to 1 if no entry is found.
    """
    return COMBAT_MULTIPLIERS.get(health_type, {}).get(damage_type, 1)


# Load multipliers immediately when module is imported
load_combat_multipliers_from_csv()
