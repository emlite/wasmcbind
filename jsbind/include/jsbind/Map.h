#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Map, em_Val);

jb_Map jb_Map_new();
size_t jb_Map_size(const jb_Map *map);
bool jb_Map_has(const jb_Map *map, const jb_Any *key);
jb_Any jb_Map_get(const jb_Map *map, const jb_Any *key);
void jb_Map_set(jb_Map *map, const jb_Any *key, const jb_Any *value);
bool jb_Map_delete(jb_Map *map, const jb_Any *key);
void jb_Map_clear(jb_Map *map);

DECLARE_EMLITE_TYPE(jb_WeakMap, em_Val);

jb_WeakMap jb_WeakMap_new();
size_t jb_WeakMap_size(const jb_WeakMap *map);
bool jb_WeakMap_has(const jb_WeakMap *map, const jb_Any *key);
jb_Any jb_WeakMap_get(const jb_WeakMap *map, const jb_Any *key);
void jb_WeakMap_set(jb_WeakMap *map, const jb_Any *key, const jb_Any *value);
bool jb_WeakMap_delete(jb_WeakMap *map, const jb_Any *key);
void jb_WeakMap_clear(jb_WeakMap *map);

#ifdef __cplusplus
}
#endif
