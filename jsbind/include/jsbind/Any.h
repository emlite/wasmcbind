#pragma once

#include <emlite/emlite.h>
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Any, em_Val);

int jb_Any_is_undefined(const jb_Any *a);
int jb_Any_is_null(const jb_Any *a);
int jb_Any_is_number(const jb_Any *a);
int jb_Any_is_string(const jb_Any *a);
int jb_Any_is_function(const jb_Any *a);
int jb_Any_is_error(const jb_Any *a);
int jb_Any_as_bool(const jb_Any *a);
jb_Any jb_Any_clone(const jb_Any *a);

#define ANY(x) ((jb_Any){.inner = em_Val_from(x)})
#define ANY_JB(x) ((jb_Any){.inner = x.inner})

#ifdef __cplusplus
}
#endif