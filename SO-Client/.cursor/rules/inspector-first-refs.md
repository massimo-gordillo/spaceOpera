# Inspector-first Unity references

- Prefer **serialized (`[SerializeField]` / public) references** wired in the Unity **Inspector** instead of `Find`, `Transform.Find`, or `GetComponent` discovery at runtime — unless the scenario truly requires dynamic lookup or the user asks otherwise.
- When you add or rely on a component that **must** be assigned manually, **tell the user explicitly** which GameObject / prefab and **which field** they need to hook up in the Inspector after your code change.
