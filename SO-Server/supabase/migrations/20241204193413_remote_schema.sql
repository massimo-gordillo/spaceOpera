create table "public"."games" (
    "id" uuid not null default gen_random_uuid(),
    "map_id" uuid not null,
    "player1_id" uuid not null,
    "player2_id" uuid not null,
    "current_turn" integer default 0,
    "current_player" uuid not null,
    "game_state" jsonb default '{}'::jsonb,
    "random_seed" text not null,
    "status" text default 'active'::text,
    "created_at" timestamp with time zone default timezone('utc'::text, now()),
    "updated_at" timestamp with time zone default timezone('utc'::text, now())
);


alter table "public"."games" enable row level security;

create table "public"."maps" (
    "id" uuid not null default gen_random_uuid(),
    "name" text not null,
    "data" bytea not null,
    "width" integer not null,
    "height" integer not null,
    "created_at" timestamp with time zone default timezone('utc'::text, now())
);


alter table "public"."maps" enable row level security;

create table "public"."turn_moves" (
    "id" uuid not null default gen_random_uuid(),
    "game_id" uuid not null,
    "turn_number" integer not null,
    "player_id" uuid not null,
    "moves" jsonb not null,
    "state_hash" text not null,
    "created_at" timestamp with time zone default timezone('utc'::text, now())
);


alter table "public"."turn_moves" enable row level security;

create table "public"."waiting_players" (
    "id" uuid not null default gen_random_uuid(),
    "player_id" uuid not null,
    "map_id" uuid not null,
    "created_at" timestamp with time zone default timezone('utc'::text, now())
);


alter table "public"."waiting_players" enable row level security;

CREATE UNIQUE INDEX games_pkey ON public.games USING btree (id);

CREATE INDEX idx_games_player1 ON public.games USING btree (player1_id);

CREATE INDEX idx_games_player2 ON public.games USING btree (player2_id);

CREATE INDEX idx_games_status ON public.games USING btree (status);

CREATE INDEX idx_turn_moves_game ON public.turn_moves USING btree (game_id, turn_number);

CREATE INDEX idx_waiting_players_map ON public.waiting_players USING btree (map_id);

CREATE UNIQUE INDEX maps_pkey ON public.maps USING btree (id);

CREATE UNIQUE INDEX turn_moves_game_id_turn_number_key ON public.turn_moves USING btree (game_id, turn_number);

CREATE UNIQUE INDEX turn_moves_pkey ON public.turn_moves USING btree (id);

CREATE UNIQUE INDEX waiting_players_pkey ON public.waiting_players USING btree (id);

CREATE UNIQUE INDEX waiting_players_player_id_key ON public.waiting_players USING btree (player_id);

alter table "public"."games" add constraint "games_pkey" PRIMARY KEY using index "games_pkey";

alter table "public"."maps" add constraint "maps_pkey" PRIMARY KEY using index "maps_pkey";

alter table "public"."turn_moves" add constraint "turn_moves_pkey" PRIMARY KEY using index "turn_moves_pkey";

alter table "public"."waiting_players" add constraint "waiting_players_pkey" PRIMARY KEY using index "waiting_players_pkey";

alter table "public"."games" add constraint "different_players" CHECK ((player1_id <> player2_id)) not valid;

alter table "public"."games" validate constraint "different_players";

alter table "public"."games" add constraint "games_map_id_fkey" FOREIGN KEY (map_id) REFERENCES maps(id) not valid;

alter table "public"."games" validate constraint "games_map_id_fkey";

alter table "public"."games" add constraint "games_player1_id_fkey" FOREIGN KEY (player1_id) REFERENCES auth.users(id) not valid;

alter table "public"."games" validate constraint "games_player1_id_fkey";

alter table "public"."games" add constraint "games_player2_id_fkey" FOREIGN KEY (player2_id) REFERENCES auth.users(id) not valid;

alter table "public"."games" validate constraint "games_player2_id_fkey";

alter table "public"."games" add constraint "games_status_check" CHECK ((status = ANY (ARRAY['active'::text, 'completed'::text, 'abandoned'::text]))) not valid;

alter table "public"."games" validate constraint "games_status_check";

alter table "public"."games" add constraint "valid_current_player" CHECK (((current_player = player1_id) OR (current_player = player2_id))) not valid;

alter table "public"."games" validate constraint "valid_current_player";

alter table "public"."maps" add constraint "valid_dimensions" CHECK (((width > 0) AND (height > 0))) not valid;

alter table "public"."maps" validate constraint "valid_dimensions";

alter table "public"."turn_moves" add constraint "positive_turn" CHECK ((turn_number >= 0)) not valid;

alter table "public"."turn_moves" validate constraint "positive_turn";

alter table "public"."turn_moves" add constraint "turn_moves_game_id_fkey" FOREIGN KEY (game_id) REFERENCES games(id) not valid;

alter table "public"."turn_moves" validate constraint "turn_moves_game_id_fkey";

alter table "public"."turn_moves" add constraint "turn_moves_game_id_turn_number_key" UNIQUE using index "turn_moves_game_id_turn_number_key";

alter table "public"."turn_moves" add constraint "turn_moves_player_id_fkey" FOREIGN KEY (player_id) REFERENCES auth.users(id) not valid;

alter table "public"."turn_moves" validate constraint "turn_moves_player_id_fkey";

alter table "public"."waiting_players" add constraint "waiting_players_player_id_fkey" FOREIGN KEY (player_id) REFERENCES auth.users(id) not valid;

alter table "public"."waiting_players" validate constraint "waiting_players_player_id_fkey";

alter table "public"."waiting_players" add constraint "waiting_players_player_id_key" UNIQUE using index "waiting_players_player_id_key";

set check_function_bodies = off;

CREATE OR REPLACE PROCEDURE public.find_or_create_game(IN p_player_id uuid, IN p_map_id uuid)
 LANGUAGE plpgsql
AS $procedure$
DECLARE
  v_opponent_id UUID;
  v_game_id UUID;
BEGIN
  -- First, check if player is already waiting
  DELETE FROM waiting_players WHERE player_id = p_player_id;
  
  -- Try to find an opponent
  SELECT player_id INTO v_opponent_id
  FROM waiting_players
  WHERE map_id = p_map_id
  ORDER BY created_at ASC
  LIMIT 1
  FOR UPDATE SKIP LOCKED;
  
  IF v_opponent_id IS NOT NULL THEN
    -- Found an opponent, create a game
    DELETE FROM waiting_players WHERE player_id = v_opponent_id;
    
    INSERT INTO games (
      map_id,
      player1_id,
      player2_id,
      current_player,
      random_seed
    ) VALUES (
      p_map_id,
      v_opponent_id, -- First player who was waiting
      p_player_id,   -- Second player who just joined
      v_opponent_id, -- First player gets first turn
      encode(gen_random_bytes(16), 'hex')
    )
    RETURNING id INTO v_game_id;
    
  ELSE
    -- No opponent found, add player to waiting list
    INSERT INTO waiting_players (player_id, map_id)
    VALUES (p_player_id, p_map_id);
  END IF;
  
  COMMIT;
END;
$procedure$
;

CREATE OR REPLACE PROCEDURE public.submit_turn(IN p_game_id uuid, IN p_player_id uuid, IN p_moves jsonb, IN p_state_hash text, IN p_next_player uuid)
 LANGUAGE plpgsql
AS $procedure$
DECLARE
  v_current_turn INTEGER;
BEGIN
  SELECT current_turn INTO v_current_turn
  FROM games
  WHERE id = p_game_id AND current_player = p_player_id
  FOR UPDATE;
  
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Invalid game state or not player''s turn';
  END IF;

  INSERT INTO turn_moves (
    game_id,
    turn_number,
    player_id,
    moves,
    state_hash
  ) VALUES (
    p_game_id,
    v_current_turn,
    p_player_id,
    p_moves,
    p_state_hash
  );

  UPDATE games
  SET 
    current_turn = v_current_turn + 1,
    current_player = p_next_player,
    updated_at = TIMEZONE('utc', NOW())
  WHERE id = p_game_id;

  COMMIT;
END;
$procedure$
;

CREATE OR REPLACE FUNCTION public.update_updated_at_column()
 RETURNS trigger
 LANGUAGE plpgsql
AS $function$
BEGIN
    NEW.updated_at = TIMEZONE('utc', NOW());
    RETURN NEW;
END;
$function$
;

grant delete on table "public"."games" to "anon";

grant insert on table "public"."games" to "anon";

grant references on table "public"."games" to "anon";

grant select on table "public"."games" to "anon";

grant trigger on table "public"."games" to "anon";

grant truncate on table "public"."games" to "anon";

grant update on table "public"."games" to "anon";

grant delete on table "public"."games" to "authenticated";

grant insert on table "public"."games" to "authenticated";

grant references on table "public"."games" to "authenticated";

grant select on table "public"."games" to "authenticated";

grant trigger on table "public"."games" to "authenticated";

grant truncate on table "public"."games" to "authenticated";

grant update on table "public"."games" to "authenticated";

grant delete on table "public"."games" to "service_role";

grant insert on table "public"."games" to "service_role";

grant references on table "public"."games" to "service_role";

grant select on table "public"."games" to "service_role";

grant trigger on table "public"."games" to "service_role";

grant truncate on table "public"."games" to "service_role";

grant update on table "public"."games" to "service_role";

grant delete on table "public"."maps" to "anon";

grant insert on table "public"."maps" to "anon";

grant references on table "public"."maps" to "anon";

grant select on table "public"."maps" to "anon";

grant trigger on table "public"."maps" to "anon";

grant truncate on table "public"."maps" to "anon";

grant update on table "public"."maps" to "anon";

grant delete on table "public"."maps" to "authenticated";

grant insert on table "public"."maps" to "authenticated";

grant references on table "public"."maps" to "authenticated";

grant select on table "public"."maps" to "authenticated";

grant trigger on table "public"."maps" to "authenticated";

grant truncate on table "public"."maps" to "authenticated";

grant update on table "public"."maps" to "authenticated";

grant delete on table "public"."maps" to "service_role";

grant insert on table "public"."maps" to "service_role";

grant references on table "public"."maps" to "service_role";

grant select on table "public"."maps" to "service_role";

grant trigger on table "public"."maps" to "service_role";

grant truncate on table "public"."maps" to "service_role";

grant update on table "public"."maps" to "service_role";

grant delete on table "public"."turn_moves" to "anon";

grant insert on table "public"."turn_moves" to "anon";

grant references on table "public"."turn_moves" to "anon";

grant select on table "public"."turn_moves" to "anon";

grant trigger on table "public"."turn_moves" to "anon";

grant truncate on table "public"."turn_moves" to "anon";

grant update on table "public"."turn_moves" to "anon";

grant delete on table "public"."turn_moves" to "authenticated";

grant insert on table "public"."turn_moves" to "authenticated";

grant references on table "public"."turn_moves" to "authenticated";

grant select on table "public"."turn_moves" to "authenticated";

grant trigger on table "public"."turn_moves" to "authenticated";

grant truncate on table "public"."turn_moves" to "authenticated";

grant update on table "public"."turn_moves" to "authenticated";

grant delete on table "public"."turn_moves" to "service_role";

grant insert on table "public"."turn_moves" to "service_role";

grant references on table "public"."turn_moves" to "service_role";

grant select on table "public"."turn_moves" to "service_role";

grant trigger on table "public"."turn_moves" to "service_role";

grant truncate on table "public"."turn_moves" to "service_role";

grant update on table "public"."turn_moves" to "service_role";

grant delete on table "public"."waiting_players" to "anon";

grant insert on table "public"."waiting_players" to "anon";

grant references on table "public"."waiting_players" to "anon";

grant select on table "public"."waiting_players" to "anon";

grant trigger on table "public"."waiting_players" to "anon";

grant truncate on table "public"."waiting_players" to "anon";

grant update on table "public"."waiting_players" to "anon";

grant delete on table "public"."waiting_players" to "authenticated";

grant insert on table "public"."waiting_players" to "authenticated";

grant references on table "public"."waiting_players" to "authenticated";

grant select on table "public"."waiting_players" to "authenticated";

grant trigger on table "public"."waiting_players" to "authenticated";

grant truncate on table "public"."waiting_players" to "authenticated";

grant update on table "public"."waiting_players" to "authenticated";

grant delete on table "public"."waiting_players" to "service_role";

grant insert on table "public"."waiting_players" to "service_role";

grant references on table "public"."waiting_players" to "service_role";

grant select on table "public"."waiting_players" to "service_role";

grant trigger on table "public"."waiting_players" to "service_role";

grant truncate on table "public"."waiting_players" to "service_role";

grant update on table "public"."waiting_players" to "service_role";

create policy "Users can update their own games when it's their turn"
on "public"."games"
as permissive
for update
to public
using ((auth.uid() = current_player));


create policy "Users can view their own games"
on "public"."games"
as permissive
for select
to public
using (((auth.uid() = player1_id) OR (auth.uid() = player2_id)));


create policy "Anyone can view maps"
on "public"."maps"
as permissive
for select
to public
using (true);


create policy "Only admins can insert maps"
on "public"."maps"
as permissive
for insert
to public
with check ((auth.uid() IN ( SELECT users.id
   FROM auth.users
  WHERE ((users.raw_user_meta_data ->> 'role'::text) = 'admin'::text))));


create policy "Users can insert turn moves on their turn"
on "public"."turn_moves"
as permissive
for insert
to public
with check ((EXISTS ( SELECT 1
   FROM games
  WHERE ((games.id = turn_moves.game_id) AND (games.current_player = auth.uid())))));


create policy "Users can view turn moves for their games"
on "public"."turn_moves"
as permissive
for select
to public
using ((EXISTS ( SELECT 1
   FROM games
  WHERE ((games.id = turn_moves.game_id) AND ((games.player1_id = auth.uid()) OR (games.player2_id = auth.uid()))))));


create policy "Users can enter waiting list"
on "public"."waiting_players"
as permissive
for insert
to public
with check ((auth.uid() = player_id));


create policy "Users can remove themselves from waiting list"
on "public"."waiting_players"
as permissive
for delete
to public
using ((auth.uid() = player_id));


create policy "Users can view their own waiting status"
on "public"."waiting_players"
as permissive
for select
to public
using ((auth.uid() = player_id));


CREATE TRIGGER update_games_updated_at BEFORE UPDATE ON public.games FOR EACH ROW EXECUTE FUNCTION update_updated_at_column();


