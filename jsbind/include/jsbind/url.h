#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_URLSearchParams, em_Val);
DECLARE_EMLITE_TYPE(jb_URL, em_Val);

bool jb_URLSearchParams_get(const jb_URLSearchParams *params, const char *key, jb_String *out);
void jb_URLSearchParams_append(jb_URLSearchParams *params, const char *key, const char *value);

jb_URL jb_URL_new(const char *input);
jb_URL jb_URL_new_with_base(const char *input, const char *base);

jb_String jb_URL_href(const jb_URL *url);
void jb_URL_set_href(jb_URL *url, const char *v);

jb_String jb_URL_protocol(const jb_URL *url);
void jb_URL_set_protocol(jb_URL *url, const char *v);

jb_String jb_URL_pathname(const jb_URL *url);
void jb_URL_set_pathname(jb_URL *url, const char *v);

jb_URLSearchParams jb_URL_search_params(const jb_URL *url);

jb_String jb_URL_search(const jb_URL *url);
void jb_URL_set_search(jb_URL *url, const jb_String *value);

jb_String jb_URL_hash(const jb_URL *url);
void jb_URL_set_hash(jb_URL *url, const char *v);

jb_String jb_URL_host(const jb_URL *url);
void jb_URL_set_host(jb_URL *url, const char *v);

jb_String jb_URL_hostname(const jb_URL *url);
void jb_URL_set_hostname(jb_URL *url, const char *v);

jb_String jb_URL_password(const jb_URL *url);
void jb_URL_set_password(jb_URL *url, const char *v);

jb_String jb_URL_port(const jb_URL *url);
void jb_URL_set_port(jb_URL *url, const char *v);

jb_String jb_URL_username(const jb_URL *url);
void jb_URL_set_username(jb_URL *url, const char *v);

jb_String jb_URL_to_json(const jb_URL *url);

#ifdef __cplusplus
}
#endif
