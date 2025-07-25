#pragma once

#include <emlite/emlite.h>
#include "utils.h"

DECLARE_EMLITE_TYPE(jb_Any, em_Val);

int jb_Any_is_undefined(jb_Any a);
int jb_Any_is_null(jb_Any a);
int jb_Any_is_number(jb_Any a);
int jb_Any_is_string(jb_Any a);
int jb_Any_is_function(jb_Any a);
int jb_Any_is_error(jb_Any a);
int jb_Any_as_bool(jb_Any a);
jb_Any jb_Any_clone(jb_Any a);

#define ANY(x) ((jb_Any){.inner = em_Val_from(x)})