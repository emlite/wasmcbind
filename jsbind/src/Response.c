#include <jsbind/Promise.h>
#include <jsbind/Response.h>

DEFINE_EMLITE_TYPE(jb_Response, em_Val);

bool jb_Response_ok(const jb_Response *response) {
    return em_Val_as_bool(
        em_Val_get(response->inner, em_Val_from("ok"))
    );
}

uint16_t jb_Response_status(const jb_Response *response) {
    return (uint16_t)em_Val_as_int(
        em_Val_get(response->inner, em_Val_from("status"))
    );
}

jb_Any jb_Response_headers_raw(const jb_Response *response
) {
    return (jb_Any
    ){.inner = em_Val_get(
          response->inner, em_Val_from("headers")
      )};
}

jb_Promise jb_Response_text(const jb_Response *response) {
    return (jb_Promise
    ){.inner = em_Val_call(response->inner, "text")};
}

jb_Promise jb_Response_json(const jb_Response *response) {
    return (jb_Promise
    ){.inner = em_Val_call(response->inner, "json")};
}

jb_Promise jb_Response_array_buffer(
    const jb_Response *response
) {
    return (jb_Promise
    ){.inner = em_Val_call(response->inner, "arrayBuffer")};
}

jb_Promise jb_fetch(const char *input) {
    return (jb_Promise
    ){.inner = em_Val_invoke(
          em_Val_global("fetch"), em_Val_from_string(input)
      )};
}

jb_Promise jb_fetch_with_init(
    const char *input, const jb_Any *init
) {
    return (jb_Promise
    ){.inner = em_Val_invoke(
          em_Val_global("fetch"),
          em_Val_from_string(input),
          init->inner
      )};
}

jb_Promise jb_fetch_val(const jb_Any *input) {
    return (jb_Promise
    ){.inner = em_Val_invoke(
          em_Val_global("fetch"), input->inner
      )};
}

jb_Promise jb_fetch_val_with_init(
    const char *input, const jb_Any *init
) {
    return (jb_Promise
    ){.inner = em_Val_invoke(
          em_Val_global("fetch"),
          em_Val_from_string(input),
          init->inner
      )};
}
