#pragma once

#include "Any.h"
#include "Array.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Function, em_Val);

// Create a function from a global name
jb_Function jb_Function_from_name(const char *name);

// Create a dynamic function from argument names and body
jb_Function jb_Function_new(
    const char **args, size_t nargs, const char *body
);

// Apply: call with this_arg and arguments array
jb_Any jb_Function_apply(
    const jb_Function *fn,
    const jb_Any *this_arg,
    const jb_Array *args_array
);

// Bind: returns a new function with this_arg and optional
// arguments
jb_Function jb_Function_bind(
    const jb_Function *fn,
    const jb_Any *this_arg,
    const jb_Array *args_array
);

// Call: call with this_arg and arguments array, returns
// result
jb_Any jb_Function_call(
    const jb_Function *fn,
    const jb_Any *this_arg,
    const jb_Array *args_array
);

typedef jb_Any (*jb_Callback)(const jb_Array *, const jb_Any *);

jb_Function jb_Function_from(
    jb_Callback cb, const jb_Any *data
);

#define FUNC(x, data)                                      \
    ((jb_Function){.inner = em_Val_make_fn(x, data)})

#ifdef __cplusplus
}
#endif
