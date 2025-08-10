#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MemoryBreakdownEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MemoryMeasurement, em_Val);

long long MemoryMeasurement_bytes(const MemoryMeasurement *self);

void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value);

jb_Array MemoryMeasurement_breakdown(const MemoryMeasurement *self);

void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, jb_Array * value);

MemoryMeasurement MemoryMeasurement_new();

#ifdef __cplusplus
}
#endif
