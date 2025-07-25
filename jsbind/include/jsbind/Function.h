#pragma once

#include "Any.h"
#include "Array.h"
#include "utils.h"
#include <emlite/emlite.h>

DECLARE_EMLITE_TYPE(jb_Function, em_Val);

// Create a function from a global name
jb_Function jb_Function_from_name(const char *name);

// Create a dynamic function from argument names and body
jb_Function jb_Function_new(
    const char **args, size_t nargs, const char *body
);

// Apply: call with this_arg and arguments array
jb_Any jb_Function_apply(
    jb_Function fn, jb_Any this_arg, jb_Array args_array
);

// Bind: returns a new function with this_arg and optional
// arguments
jb_Function jb_Function_bind(
    jb_Function fn, jb_Any this_arg, jb_Array args_array
);

// Call: call with this_arg and arguments array, returns
// result
jb_Any jb_Function_call(
    jb_Function fn, jb_Any this_arg, jb_Array args_array
);

typedef jb_Any (*jb_Callback)(jb_Array, jb_Any *);

jb_Function jb_Function_from(jb_Callback cb, jb_Any *data);

#define FUNC(x, data)                                      \
    ((jb_Function){.inner = em_Val_make_fn(x, data)})

