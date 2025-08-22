#include <jscbind/url.h>

DEFINE_EMLITE_TYPE(jb_URL, em_Val);
DEFINE_EMLITE_TYPE(jb_URLSearchParams, em_Val);

bool jb_URLSearchParams_get(const jb_URLSearchParams *params, const char *key, jb_String *out) {
    em_Val v = em_Val_call(params->inner, "get", em_Val_from_string(key));
    if (em_Val_is_null(v)) {
        return false;
    }
    *out = (jb_String){.inner = v};
    return true;
}

void jb_URLSearchParams_append(jb_URLSearchParams *params, const char *key, const char *value) {
    em_Val_call(params->inner, "append", em_Val_from_string(key), em_Val_from_string(value));
}

jb_URL jb_URL_new(const char *input) {
    return (jb_URL){.inner = em_Val_new(em_Val_global("URL"), em_Val_from_string(input))};
}

jb_URL jb_URL_new_with_base(const char *input, const char *base) {
    return (jb_URL
    ){.inner = em_Val_new(em_Val_global("URL"), em_Val_from_string(input), em_Val_from_string(base))
    };
}

#define URL_GETTER(name, type)                                                                     \
    jb_##type jb_URL_##name(const jb_URL *url) {                                                   \
        return (jb_##type){.inner = em_Val_get(url->inner, em_Val_from(#name))};                   \
    }

#define URL_SETTER(name)                                                                           \
    void jb_URL_set_##name(jb_URL *url, const char *v) {                                           \
        em_Val_set(url->inner, em_Val_from(#name), em_Val_from_string(v));                         \
    }

URL_GETTER(href, String)
URL_SETTER(href)

URL_GETTER(protocol, String)
URL_SETTER(protocol)

URL_GETTER(pathname, String)
URL_SETTER(pathname)

URL_GETTER(search_params, URLSearchParams)

URL_GETTER(search, String)
void jb_URL_set_search(jb_URL *url, const jb_String *value) {
    em_Val_set(url->inner, em_Val_from("search"), value->inner);
}

URL_GETTER(hash, String)
URL_SETTER(hash)

URL_GETTER(host, String)
URL_SETTER(host)

URL_GETTER(hostname, String)
URL_SETTER(hostname)

URL_GETTER(password, String)
URL_SETTER(password)

URL_GETTER(port, String)
URL_SETTER(port)

URL_GETTER(username, String)
URL_SETTER(username)

jb_String jb_URL_to_json(const jb_URL *url) {
    return (jb_String){.inner = em_Val_call(url->inner, "toJSON")};
}
