#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

/** @brief Dictionary type GPUComputePassTimestampWrites */
DECLARE_EMLITE_TYPE(GPUComputePassTimestampWrites, em_Val);

/** @brief Getter of the querySet property */
GPUQuerySet GPUComputePassTimestampWrites_querySet(const GPUComputePassTimestampWrites *self);

/** @brief Setter of the querySet property */
void GPUComputePassTimestampWrites_set_querySet(GPUComputePassTimestampWrites* self, GPUQuerySet * value);

/** @brief Getter of the beginningOfPassWriteIndex property */
jb_Any GPUComputePassTimestampWrites_beginningOfPassWriteIndex(const GPUComputePassTimestampWrites *self);

/** @brief Setter of the beginningOfPassWriteIndex property */
void GPUComputePassTimestampWrites_set_beginningOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value);

/** @brief Getter of the endOfPassWriteIndex property */
jb_Any GPUComputePassTimestampWrites_endOfPassWriteIndex(const GPUComputePassTimestampWrites *self);

/** @brief Setter of the endOfPassWriteIndex property */
void GPUComputePassTimestampWrites_set_endOfPassWriteIndex(GPUComputePassTimestampWrites* self, jb_Any * value);

/** @brief Constructor of the GPUComputePassTimestampWrites dictionary type */
GPUComputePassTimestampWrites GPUComputePassTimestampWrites_new();

#ifdef __cplusplus
}
#endif
