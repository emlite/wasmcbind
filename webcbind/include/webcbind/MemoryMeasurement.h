#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MemoryBreakdownEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MemoryMeasurement */
DECLARE_EMLITE_TYPE(MemoryMeasurement, em_Val);

/** @brief Getter of the bytes property */
long long MemoryMeasurement_bytes(const MemoryMeasurement *self);

/** @brief Setter of the bytes property */
void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value);

/** @brief Getter of the breakdown property */
jb_Array MemoryMeasurement_breakdown(const MemoryMeasurement *self);

/** @brief Setter of the breakdown property */
void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, jb_Array * value);

/** @brief Constructor of the MemoryMeasurement dictionary type */
MemoryMeasurement MemoryMeasurement_new();

#ifdef __cplusplus
}
#endif
