#include <emlite/emlite.h>
#include <jscbind/Any.h>
#include <jscbind/Function.h>
#include <jscbind/utils.h>

DEFINE_EMLITE_TYPE(jb_Function, em_Val);

jb_Function jb_Function_from_name(const char *name) {
    em_Val v = em_Val_global(name);
    return (jb_Function){.inner = v};
}

jb_Function jb_Function_new(const char **args, size_t nargs, const char *body) {
    em_Val ctor = em_Val_global("Function");
    Handle arr  = emlite_val_new_array();
    for (int i = 0; i < nargs; i++) {
        em_Val c = em_Val_from_string(args[i]);
        emlite_val_push(arr, em_Val_as_handle(c));
    }
    emlite_val_push(arr, em_Val_as_handle(em_Val_from_string(body)));
    em_Val ret = em_Val_from_handle(emlite_val_construct_new(em_Val_as_handle(ctor), arr));
    emlite_val_dec_ref(arr);
    return (jb_Function){.inner = ret};
}

jb_Any jb_Function_apply(
    const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array
) {
    em_Val v = em_Val_call(fn->inner, "apply", this_arg->inner, args_array->inner);
    return (jb_Any){.inner = v};
}

jb_Function jb_Function_bind(
    const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array
) {
    em_Val v = em_Val_call(fn->inner, "bind", this_arg->inner, args_array->inner);
    return (jb_Function){.inner = v};
}

jb_Any jb_Function_call(const jb_Function *fn, const jb_Any *this_arg, const jb_Array *args_array) {
    em_Val v = em_Val_call(fn->inner, "call", this_arg->inner, args_array->inner);
    return (jb_Any){.inner = v};
}

Handle trampoline(Handle args, Handle data) {
    em_Val obj       = em_Val_from_handle(data);
    uintptr_t fn     = em_Val_as(uintptr_t, em_Val_get(obj, em_Val_from("fn")));
    jb_Any d         = (jb_Any){.inner = em_Val_get(obj, em_Val_from("data"))};
    jb_Callback func = (jb_Callback)fn;
    jb_Array arr     = jb_Array_from_handle(args);
    jb_Any ret       = (*func)(&arr, &d);
    return em_Val_as_handle(ret.inner);
}

jb_Function jb_Function_from(jb_Callback cb, const jb_Any *data) {
    em_Val obj = em_Val_object();
    em_Val_set(obj, em_Val_from("fn"), em_Val_from((uintptr_t)cb));
    em_Val_set(obj, em_Val_from("data"), data->inner);
    em_Val val = em_Val_make_fn(trampoline, em_Val_as_handle(obj));
    return (jb_Function){.inner = val};
}