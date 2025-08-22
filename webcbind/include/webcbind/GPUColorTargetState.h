#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUBlendState.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUColorTargetState */
DECLARE_EMLITE_TYPE(GPUColorTargetState, em_Val);

/** @brief Getter of the format property */
GPUTextureFormat GPUColorTargetState_format(const GPUColorTargetState *self);

/** @brief Setter of the format property */
void GPUColorTargetState_set_format(GPUColorTargetState* self, GPUTextureFormat * value);

/** @brief Getter of the blend property */
GPUBlendState GPUColorTargetState_blend(const GPUColorTargetState *self);

/** @brief Setter of the blend property */
void GPUColorTargetState_set_blend(GPUColorTargetState* self, GPUBlendState * value);

/** @brief Getter of the writeMask property */
jb_Any GPUColorTargetState_writeMask(const GPUColorTargetState *self);

/** @brief Setter of the writeMask property */
void GPUColorTargetState_set_writeMask(GPUColorTargetState* self, jb_Any * value);

/** @brief Constructor of the GPUColorTargetState dictionary type */
GPUColorTargetState GPUColorTargetState_new();

#ifdef __cplusplus
}
#endif
