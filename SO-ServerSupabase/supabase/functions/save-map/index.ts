import "jsr:@supabase/functions-js/edge-runtime.d.ts";

console.log("Save-map function initialized");

Deno.serve(async (req) => {
  try {
    console.log("Request received:", req.method);

    if (req.method !== "POST") {
      return new Response(
        JSON.stringify({ error: "Only POST requests are allowed" }),
        { status: 405, headers: { "Content-Type": "application/json" } }
      );
    }

    console.log("Request headers:", Object.fromEntries(req.headers.entries()));

    console.log("Reading raw request body...");
    const rawBody = await req.text();
    console.log("Raw request body:", rawBody);

    let parsedBody;
    try {
      parsedBody = JSON.parse(rawBody);
      console.log("Parsed request body:", parsedBody);
    } catch (error) {
      console.error("Error parsing JSON body:", error);
      return new Response(
        JSON.stringify({ error: "Invalid JSON body" }),
        { status: 400, headers: { "Content-Type": "application/json" } }
      );
    }

    const { name, data, width, height } = parsedBody;

    if (!name || !data || !width || !height || width <= 0 || height <= 0) {
      console.warn("Invalid input data:", { name, data, width, height });
      return new Response(
        JSON.stringify({ error: "Invalid input" }),
        { status: 400, headers: { "Content-Type": "application/json" } }
      );
    }

    console.log("Fetching environment variables...");
    const SUPABASE_URL = Deno.env.get("SUPABASE_URL");
    const SUPABASE_KEY = Deno.env.get("SUPABASE_SERVICE_ROLE_KEY");
    console.log("Supabase URL:", SUPABASE_URL);
    console.log("Supabase Key Found:", SUPABASE_KEY ? "Yes" : "No");

    if (!SUPABASE_URL || !SUPABASE_KEY) {
      console.error("Missing Supabase URL or Service Key");
      return new Response(
        JSON.stringify({ error: "Missing Supabase URL or Service Key" }),
        { status: 500, headers: { "Content-Type": "application/json" } }
      );
    }

    console.log("Sending data to Supabase...");
    const supabaseResponse = await fetch(`${SUPABASE_URL}/rest/v1/maps`, {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
        apikey: SUPABASE_KEY,
        Authorization: `Bearer ${SUPABASE_KEY}`,
      },
      body: JSON.stringify({ name, data, width, height }),
    });

    console.log("Supabase response status:", supabaseResponse.status);

    if (!supabaseResponse.ok) {
      const error = await supabaseResponse.text();
      console.error("Supabase error:", error);
      return new Response(
        JSON.stringify({ error: `Supabase error: ${error}` }),
        { status: 500, headers: { "Content-Type": "application/json" } }
      );
    }

    console.log("Parsing Supabase response...");
    const result = await supabaseResponse.json();
    console.log("Supabase response parsed successfully:", result);

    return new Response(
      JSON.stringify({ message: "Map saved successfully", result }),
      { status: 200, headers: { "Content-Type": "application/json" } }
    );
  } catch (error) {
    console.error("Error details:", error);
    let errorMessage = "Unknown";
    if (error instanceof Error) {
      errorMessage = error.message;
      console.error("Error message:", error.message);
      console.error("Error stack trace:", error.stack);
    } else {
      errorMessage = String(error);
      console.error("Error message:", errorMessage);
    }
    return new Response(
      JSON.stringify({ error: `Unexpected error: ${errorMessage}` }),
      { status: 500, headers: { "Content-Type": "application/json" } }
    );
  }
});
