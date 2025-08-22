#include <jscbind/Map.h>

DEFINE_EMLITE_TYPE(jb_Map, em_Val);

jb_Map jb_Map_new() { return (jb_Map){.inner = em_Val_new(em_Val_global("Map"))}; }

size_t jb_Map_size(const jb_Map *map) {
    return em_Val_as_int(em_Val_get(map->inner, em_Val_from("size")));
}

bool jb_Map_has(const jb_Map *map, const jb_Any *key) {
    return em_Val_as_bool(em_Val_call(map->inner, "has", key->inner));
}

jb_Any jb_Map_get(const jb_Map *map, const jb_Any *key) {
    return (jb_Any){.inner = em_Val_call(map->inner, "get", key->inner)};
}

void jb_Map_set(jb_Map *map, const jb_Any *key, const jb_Any *value) {
    em_Val_call(map->inner, "set", key->inner, value->inner);
}

bool jb_Map_delete(jb_Map *map, const jb_Any *key) {
    return em_Val_as_bool(em_Val_call(map->inner, "delete", key->inner));
}

void jb_Map_clear(jb_Map *map) { em_Val_call(map->inner, "clear"); }

DEFINE_EMLITE_TYPE(jb_WeakMap, em_Val);

jb_WeakMap jb_WeakMap_new() { return (jb_WeakMap){.inner = em_Val_new(em_Val_global("WeakMap"))}; }

size_t jb_WeakMap_size(const jb_WeakMap *map) {
    return em_Val_as_int(em_Val_get(map->inner, em_Val_from("size")));
}

bool jb_WeakMap_has(const jb_WeakMap *map, const jb_Any *key) {
    return em_Val_as_bool(em_Val_call(map->inner, "has", key->inner));
}

jb_Any jb_WeakMap_get(const jb_WeakMap *map, const jb_Any *key) {
    return (jb_Any){.inner = em_Val_call(map->inner, "get", key->inner)};
}

void jb_WeakMap_set(jb_WeakMap *map, const jb_Any *key, const jb_Any *value) {
    em_Val_call(map->inner, "set", key->inner, value->inner);
}

bool jb_WeakMap_delete(jb_WeakMap *map, const jb_Any *key) {
    return em_Val_as_bool(em_Val_call(map->inner, "delete", key->inner));
}

void jb_WeakMap_clear(jb_WeakMap *map) { em_Val_call(map->inner, "clear"); }