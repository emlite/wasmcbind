#pragma once

#include <emlite/emlite.h>
#include "utils.h"
#include "Any.h"

DECLARE_EMLITE_TYPE(jb_Object, em_Val);

jb_Object jb_Object_new();

int jb_Object_has(jb_Object o, const char* prop);
jb_Any jb_Object_get(jb_Object o, const char* prop);
void jb_Object_set(jb_Object o, const char* prop, jb_Any v);
int jb_Object_has_own_property(jb_Object o, const char* prop);

