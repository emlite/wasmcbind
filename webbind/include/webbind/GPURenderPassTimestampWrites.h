#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

DECLARE_EMLITE_TYPE(GPURenderPassTimestampWrites, em_Val);

GPUQuerySet GPURenderPassTimestampWrites_querySet(const GPURenderPassTimestampWrites *self);

void GPURenderPassTimestampWrites_set_querySet(GPURenderPassTimestampWrites* self, GPUQuerySet * value);

jb_Any GPURenderPassTimestampWrites_beginningOfPassWriteIndex(const GPURenderPassTimestampWrites *self);

void GPURenderPassTimestampWrites_set_beginningOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value);

jb_Any GPURenderPassTimestampWrites_endOfPassWriteIndex(const GPURenderPassTimestampWrites *self);

void GPURenderPassTimestampWrites_set_endOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value);

GPURenderPassTimestampWrites GPURenderPassTimestampWrites_new();

#ifdef __cplusplus
}
#endif
