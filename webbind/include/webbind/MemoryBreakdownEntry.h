#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MemoryAttribution.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MemoryBreakdownEntry */
DECLARE_EMLITE_TYPE(MemoryBreakdownEntry, em_Val);

/** @brief Getter of the bytes property */
long long MemoryBreakdownEntry_bytes(const MemoryBreakdownEntry *self);

/** @brief Setter of the bytes property */
void MemoryBreakdownEntry_set_bytes(MemoryBreakdownEntry* self, long long value);

/** @brief Getter of the attribution property */
jb_Array MemoryBreakdownEntry_attribution(const MemoryBreakdownEntry *self);

/** @brief Setter of the attribution property */
void MemoryBreakdownEntry_set_attribution(MemoryBreakdownEntry* self, jb_Array * value);

/** @brief Getter of the types property */
jb_Array MemoryBreakdownEntry_types(const MemoryBreakdownEntry *self);

/** @brief Setter of the types property */
void MemoryBreakdownEntry_set_types(MemoryBreakdownEntry* self, jb_Array * value);

/** @brief Constructor of the MemoryBreakdownEntry dictionary type */
MemoryBreakdownEntry MemoryBreakdownEntry_new();

#ifdef __cplusplus
}
#endif
