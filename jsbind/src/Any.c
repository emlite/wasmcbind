#include <jsbind/Any.h>

DEFINE_EMLITE_TYPE(jb_Any, em_Val);

int jb_Any_is_undefined(const jb_Any *a) { return em_Val_is_undefined(a->inner); }
int jb_Any_is_null(const jb_Any *a) { return em_Val_is_null(a->inner); }

int jb_Any_is_number(const jb_Any *a) { return em_Val_is_number(a->inner); }
int jb_Any_is_string(const jb_Any *a) { return em_Val_is_string(a->inner); }
int jb_Any_is_function(const jb_Any *a) { return em_Val_is_function(a->inner); }
int jb_Any_is_error(const jb_Any *a) { return em_Val_is_error(a->inner); }
int jb_Any_as_bool(const jb_Any *a) { return em_Val_as_bool(a->inner); }
jb_Any jb_Any_clone(const jb_Any *a) {
    return (jb_Any){.inner = em_Val_from_handle(em_Val_as_handle(a->inner))};
}
