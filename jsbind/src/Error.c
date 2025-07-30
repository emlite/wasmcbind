#include <jsbind/Error.h>

DEFINE_EMLITE_TYPE(jb_Error, em_Val);

jb_Error jb_Error_new(const char* msg) {
    em_Val ctor = em_Val_global("Error");
    em_Val v = em_Val_new(ctor, em_Val_from_string(msg));
    return (jb_Error){.inner = v};
}

jb_String jb_Error_message(const jb_Error *err) {
    em_Val prop = em_Val_from_string("message");
    em_Val v = em_Val_get(err->inner, prop);
    return (jb_String){.inner = v};
}

jb_String jb_Error_name(const jb_Error *err) {
    em_Val prop = em_Val_from_string("name");
    em_Val v = em_Val_get(err->inner, prop);
    return (jb_String){.inner = v};
}

jb_String jb_Error_stack(const jb_Error *err) {
    em_Val prop = em_Val_from_string("stack");
    em_Val v = em_Val_get(err->inner, prop);
    return (jb_String){.inner = v};
}

#define DEFINE_ERROR_TYPE(NAME) \
    DEFINE_EMLITE_TYPE(jb_##NAME, em_Val); \
    jb_##NAME jb_##NAME##_new(const char* msg) { \
        em_Val ctor = em_Val_global(#NAME); \
        em_Val v = em_Val_new(ctor, em_Val_from_string(msg)); \
        return (jb_##NAME){.inner = v}; \
    }

DEFINE_ERROR_TYPE(EvalError)
DEFINE_ERROR_TYPE(RangeError)
DEFINE_ERROR_TYPE(ReferenceError)
DEFINE_ERROR_TYPE(SyntaxError)
DEFINE_ERROR_TYPE(TypeError)
DEFINE_ERROR_TYPE(URIError)
DEFINE_ERROR_TYPE(AggregateError)