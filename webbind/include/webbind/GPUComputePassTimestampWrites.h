#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

DECLARE_EMLITE_TYPE(GPUComputePassTimestampWrites, em_Val);

GPUQuerySet GPUComputePassTimestampWrites_querySet(const GPUComputePassTimestampWrites *self);

void GPUComputePassTimestampWrites_set_querySet(GPUComputePassTimestampWrites* self, GPUQuerySet * value);

jb_Any GPUComputePassTimestampWrites_beginningOfPassWriteIndex(const GPUComputePassTimestampWrites *self);

void GPUComputePassTimestampWrites_set_beginningOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value);

jb_Any GPUComputePassTimestampWrites_endOfPassWriteIndex(const GPUComputePassTimestampWrites *self);

void GPUComputePassTimestampWrites_set_endOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value);

GPUComputePassTimestampWrites GPUComputePassTimestampWrites_new();

#ifdef __cplusplus
}
#endif
