#include <jsbind/Any.h>
#include <jsbind/Object.h>

DEFINE_EMLITE_TYPE(jb_Object, em_Val);

jb_Object jb_Object_new() {
    return (jb_Object){.inner = em_Val_object()};
}

int jb_Object_has(const jb_Object *o, const char *prop) {
    em_Val propv = em_Val_from_string(prop);
    return em_Val_has(o->inner, propv);
}
jb_Any jb_Object_get(const jb_Object *o, const char *prop) {
    em_Val propv = em_Val_from_string(prop);
    em_Val v     = em_Val_get(o->inner, propv);
    return (jb_Any){.inner = v};
}
void jb_Object_set(
    jb_Object *o, const char *prop, const jb_Any *v
) {
    em_Val propv = em_Val_from_string(prop);
    em_Val_set(o->inner, propv, v->inner);
}
int jb_Object_has_own_property(
    const jb_Object *o, const char *prop
) {
    return em_Val_has_own_property(o->inner, prop);
}