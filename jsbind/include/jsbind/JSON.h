#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

jb_String jb_JSON_stringify(const jb_Any *value, const jb_Any *replacer, const jb_Any *space);
jb_Any jb_JSON_parse(const jb_String *json);

#ifdef __cplusplus
}
#endif
