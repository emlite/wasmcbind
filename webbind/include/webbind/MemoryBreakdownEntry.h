#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MemoryAttribution.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MemoryBreakdownEntry, em_Val);

long long MemoryBreakdownEntry_bytes(const MemoryBreakdownEntry *self);

void MemoryBreakdownEntry_set_bytes(MemoryBreakdownEntry* self, long long value);

jb_Array MemoryBreakdownEntry_attribution(const MemoryBreakdownEntry *self);

void MemoryBreakdownEntry_set_attribution(MemoryBreakdownEntry* self, jb_Array * value);

jb_Array MemoryBreakdownEntry_types(const MemoryBreakdownEntry *self);

void MemoryBreakdownEntry_set_types(MemoryBreakdownEntry* self, jb_Array * value);

MemoryBreakdownEntry MemoryBreakdownEntry_new();

#ifdef __cplusplus
}
#endif
