#include <jsbind/Set.h>

DEFINE_EMLITE_TYPE(jb_Set, em_Val);

jb_Set jb_Set_new() { return (jb_Set){.inner = em_Val_new(em_Val_global("Set"))}; }

size_t jb_Set_size(const jb_Set *set) {
    return em_Val_as_int(em_Val_get(set->inner, em_Val_from("size")));
}

bool jb_Set_has(const jb_Set *set, const jb_Any *value) {
    return em_Val_as_bool(em_Val_call(set->inner, "has", value->inner));
}

void jb_Set_add(jb_Set *set, const jb_Any *value) { em_Val_call(set->inner, "add", value->inner); }

bool jb_Set_delete(jb_Set *set, const jb_Any *value) {
    return em_Val_as_bool(em_Val_call(set->inner, "delete", value->inner));
}

void jb_Set_clear(jb_Set *set) { em_Val_call(set->inner, "clear"); }

DEFINE_EMLITE_TYPE(jb_WeakSet, em_Val);

jb_WeakSet jb_WeakSet_new() { return (jb_WeakSet){.inner = em_Val_new(em_Val_global("WeakSet"))}; }

size_t jb_WeakSet_size(const jb_WeakSet *set) {
    return em_Val_as_int(em_Val_get(set->inner, em_Val_from("size")));
}

bool jb_WeakSet_has(const jb_WeakSet *set, const jb_Any *value) {
    return em_Val_as_bool(em_Val_call(set->inner, "has", value->inner));
}

void jb_WeakSet_add(jb_WeakSet *set, const jb_Any *value) {
    em_Val_call(set->inner, "add", value->inner);
}

bool jb_WeakSet_delete(jb_WeakSet *set, const jb_Any *value) {
    return em_Val_as_bool(em_Val_call(set->inner, "delete", value->inner));
}

void jb_WeakSet_clear(jb_WeakSet *set) { em_Val_call(set->inner, "clear"); }