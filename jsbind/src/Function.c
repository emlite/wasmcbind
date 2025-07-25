#include <emlite/emlite.h>
#include <jsbind/utils.h>
#include <jsbind/Sequence.h>
#include <jsbind/Any.h>
#include <jsbind/Function.h>

DEFINE_EMLITE_TYPE(jb_Function, em_Val);

jb_Function jb_Function_from_name(const char* name) {
    em_Val v = em_Val_global(name);
    return (jb_Function){.inner = v};
}

jb_Function jb_Function_new(const char** args, size_t nargs, const char* body) {
    em_Val ctor = em_Val_global("Function");
    Handle arr = emlite_val_new_array();
    for (int i = 0; i < nargs; i++) {
        em_Val c = em_Val_from_string(args[i]);
        emlite_val_push(arr, em_Val_as_handle(c));
    }
    emlite_val_push(arr, em_Val_as_handle(em_Val_from_string(body)));
    em_Val ret = em_Val_from_handle(
        emlite_val_construct_new(em_Val_as_handle(ctor), arr)
    );
    emlite_val_dec_ref(arr);
    return (jb_Function){.inner = ret};
}

jb_Any jb_Function_apply(jb_Function fn, jb_Any this_arg, jb_Sequence args_array) {
    em_Val v = em_Val_call(fn.inner, "apply", this_arg.inner, args_array.inner);
    return (jb_Any){.inner = v};
}

jb_Function jb_Function_bind(jb_Function fn, jb_Any this_arg, jb_Sequence args_array) {
    em_Val v = em_Val_call(fn.inner, "bind", this_arg.inner, args_array.inner);
    return (jb_Function){.inner = v};
}

jb_Any jb_Function_call(jb_Function fn, jb_Any this_arg, jb_Sequence args_array) {
    em_Val v = em_Val_call(fn.inner, "call", this_arg.inner, args_array.inner);
    return (jb_Any){.inner = v};
}
