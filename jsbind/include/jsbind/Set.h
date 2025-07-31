#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Set, em_Val);

jb_Set jb_Set_new();
size_t jb_Set_size(const jb_Set *set);
bool jb_Set_has(const jb_Set *set, const jb_Any *value);
void jb_Set_add(jb_Set *set, const jb_Any *value);
bool jb_Set_delete(jb_Set *set, const jb_Any *value);
void jb_Set_clear(jb_Set *set);

DECLARE_EMLITE_TYPE(jb_WeakSet, em_Val);

jb_WeakSet jb_WeakSet_new();
size_t jb_WeakSet_size(const jb_WeakSet *set);
bool jb_WeakSet_has(
    const jb_WeakSet *set, const jb_Any *value
);
void jb_WeakSet_add(jb_WeakSet *set, const jb_Any *value);
bool jb_WeakSet_delete(
    jb_WeakSet *set, const jb_Any *value
);
void jb_WeakSet_clear(jb_WeakSet *set);

#ifdef __cplusplus
}
#endif
