#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

/** @brief Dictionary type GPURenderPassTimestampWrites */
DECLARE_EMLITE_TYPE(GPURenderPassTimestampWrites, em_Val);

/** @brief Getter of the querySet property */
GPUQuerySet GPURenderPassTimestampWrites_querySet(const GPURenderPassTimestampWrites *self);

/** @brief Setter of the querySet property */
void GPURenderPassTimestampWrites_set_querySet(GPURenderPassTimestampWrites* self, GPUQuerySet * value);

/** @brief Getter of the beginningOfPassWriteIndex property */
jb_Any GPURenderPassTimestampWrites_beginningOfPassWriteIndex(const GPURenderPassTimestampWrites *self);

/** @brief Setter of the beginningOfPassWriteIndex property */
void GPURenderPassTimestampWrites_set_beginningOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value);

/** @brief Getter of the endOfPassWriteIndex property */
jb_Any GPURenderPassTimestampWrites_endOfPassWriteIndex(const GPURenderPassTimestampWrites *self);

/** @brief Setter of the endOfPassWriteIndex property */
void GPURenderPassTimestampWrites_set_endOfPassWriteIndex(GPURenderPassTimestampWrites* self, jb_Any * value);

/** @brief Constructor of the GPURenderPassTimestampWrites dictionary type */
GPURenderPassTimestampWrites GPURenderPassTimestampWrites_new();

#ifdef __cplusplus
}
#endif
