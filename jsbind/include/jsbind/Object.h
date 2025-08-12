#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Object, em_Val);

jb_Object jb_Object_new();

int jb_Object_has(const jb_Object *o, const char *prop);
jb_Any jb_Object_get(const jb_Object *o, const char *prop);
void jb_Object_set(jb_Object *o, const char *prop, const jb_Any *v);
int jb_Object_has_own_property(const jb_Object *o, const char *prop);

#ifdef __cplusplus
}
#endif
