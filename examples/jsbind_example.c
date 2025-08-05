#include <jsbind/jsbind.h>

// Callback for the inner promise (after fetching JSON)
jb_Any on_json_fulfilled(
    const jb_Array *args, const jb_Any *data
) {
    jb_Any json    = jb_Array_get(args, 0);
    jb_Console con = jb_Console_get();
    jb_Console_log(&con, 1, json);
    return ANY_JB(jb_Undefined_value());
}

// Callback for the outer promise (after fetching the
// resource)
jb_Any on_fetch_fulfilled(
    const jb_Array *args, const jb_Any *data
) {
    jb_Any res              = jb_Array_get(args, 0);
    jb_Promise json_promise = jb_Response_json(&res);
    jb_Function on_json_fulfilled_fn =
        jb_Function_from(on_json_fulfilled, NULL);
    jb_Promise_then(
        &json_promise, &on_json_fulfilled_fn, NULL
    );
    return ANY_JB(jb_Undefined_value());
}

int main() {
    emlite_init_handle_table();
    jb_Console con = jb_Console_get();

    // String
    jb_String str = JSSTR("Hello from jsbind!");
    jb_Console_log(&con, 1, str);

    // Array
    jb_Array arr = jb_Array_new();
    jb_Array_push(&arr, &JSSTR("This"));
    jb_Array_push(&arr, &JSSTR("is"));
    jb_Array_push(&arr, &JSSTR("an"));
    jb_Array_push(&arr, &JSSTR("array"));
    jb_Console_log(&con, 1, arr);

    // Object
    jb_Object obj = jb_Object_new();
    jb_Object_set(&obj, "foo", &JSSTR("bar"));
    jb_Object_set(&obj, "baz", &ANY(123));
    jb_Console_log(&con, 1, obj);

    // Date
    jb_Date date = jb_Date_new();
    jb_Console_log(
        &con, 1, ANY_JB(jb_Date_to_iso_string(&date))
    );

    // JSON
    jb_String json = jb_JSON_stringify(&obj, NULL, &ANY(2));
    jb_Console_log(&con, 1, json);

    // Math
    double r = jb_Math_random();
    jb_Console_log(&con, 1, ANY(r));

    // Response and Promise
    jb_Promise p =
        jb_fetch("https://api.github.com/users/octocat");
    jb_Function on_fetch_fulfilled_fn =
        jb_Function_from(on_fetch_fulfilled, NULL);
    jb_Promise_then(&p, &on_fetch_fulfilled_fn, NULL);

    // TextEncoder and TextDecoder
    jb_TextEncoder encoder = jb_TextEncoder_new();
    jb_Uint8Array encoded  = jb_TextEncoder_encode(
        &encoder, "Hello from TextEncoder!"
    );
    jb_TextDecoder decoder = jb_TextDecoder_new();
    jb_String decoded =
        jb_TextDecoder_decode(&decoder, &encoded);
    jb_Console_log(&con, 1, decoded);

    // URL
    jb_URL url =
        jb_URL_new("https://www.google.com/search?q=wasm");
    jb_Console_log(&con, 1, ANY_JB(jb_URL_href(&url)));

    return 0;
}