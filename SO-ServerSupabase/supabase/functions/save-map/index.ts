import "jsr:@supabase/functions-js/edge-runtime.d.ts";

console.log("Save-map function initialized");

Deno.serve(async (req) => {
  const logs: string[] = []; // Collect logs for the response

  const log = (message: string, data?: unknown) => {
    const logEntry = data ? `${message}: ${JSON.stringify(data)}` : message;
    console.log(logEntry);
    logs.push(logEntry);
  };

  try {
    log("Request received", { method: req.method });

    if (req.method !== "POST") {
      log("Invalid HTTP method");
      return new Response(
        JSON.stringify({ error: "Only POST requests are allowed", logs }),
        { status: 405, headers: { "Content-Type": "application/json" } }
      );
    }

    log("Request headers", Object.fromEntries(req.headers.entries()));

    log("Reading raw request body...");
    const rawBody = await req.text();
    log("Raw request body", rawBody);

    let parsedBody;
    try {
      parsedBody = JSON.parse(rawBody);
      log("Parsed request body", parsedBody);
    } catch (error) {
      log("Error parsing JSON body", { error: (error as Error).message });
      return new Response(
        JSON.stringify({ error: "Invalid JSON body", logs }),
        { status: 400, headers: { "Content-Type": "application/json" } }
      );
    }

    const { name, data, width, height } = parsedBody;

    if (!name || !data || !width || !height || width <= 0 || height <= 0) {
      log("Invalid input data", { name, data, width, height });
      return new Response(
        JSON.stringify({ error: "Invalid input", logs }),
        { status: 400, headers: { "Content-Type": "application/json" } }
      );
    }

    log("Fetching environment variables...");
    const SUPABASE_URL = Deno.env.get("SUPABASE_URL");
    const SUPABASE_KEY = Deno.env.get("SUPABASE_SERVICE_ROLE_KEY");
    log("Supabase URL", SUPABASE_URL);
    log("Supabase Key Found", SUPABASE_KEY ? "Yes" : "No");

    if (!SUPABASE_URL || !SUPABASE_KEY) {
      log("Missing Supabase URL or Service Key");
      return new Response(
        JSON.stringify({ error: "Missing Supabase URL or Service Key", logs }),
        { status: 500, headers: { "Content-Type": "application/json" } }
      );
    }

    log("Sending data to Supabase...");
    const supabaseResponse = await fetch(`${SUPABASE_URL}/rest/v1/maps`, {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
        apikey: SUPABASE_KEY,
        Authorization: `Bearer ${SUPABASE_KEY}`,
      },
      body: JSON.stringify({ name, data, width, height }),
    });

    log("Supabase response status", supabaseResponse.status);

    if (!supabaseResponse.ok) {
      const error = await supabaseResponse.text();
      log("Supabase error", error);
      return new Response(
        JSON.stringify({ error: `Supabase error: ${error}`, logs }),
        { status: 500, headers: { "Content-Type": "application/json" } }
      );
    }

    log("Parsing Supabase response...");
    const result = await supabaseResponse.json();
    log("Supabase response parsed successfully", result);

    return new Response(
      JSON.stringify({ message: "Map saved successfully", result, logs }),
      { status: 200, headers: { "Content-Type": "application/json" } }
    );
  } catch (error) {
    let errorMessage = "Unknown error";
    if (error instanceof Error) {
      errorMessage = error.message;
      log("Error message", error.message);
      log("Error stack trace", error.stack);
    } else {
      errorMessage = String(error);
      log("Error message", errorMessage);
    }

    return new Response(
      JSON.stringify({ error: `Unexpected error: ${errorMessage}`, logs }),
      { status: 500, headers: { "Content-Type": "application/json" } }
    );
  }
});
