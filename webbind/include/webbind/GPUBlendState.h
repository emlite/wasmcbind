#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUBlendComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBlendState */
DECLARE_EMLITE_TYPE(GPUBlendState, em_Val);

/** @brief Getter of the color property */
GPUBlendComponent GPUBlendState_color(const GPUBlendState *self);

/** @brief Setter of the color property */
void GPUBlendState_set_color(GPUBlendState* self, GPUBlendComponent * value);

/** @brief Getter of the alpha property */
GPUBlendComponent GPUBlendState_alpha(const GPUBlendState *self);

/** @brief Setter of the alpha property */
void GPUBlendState_set_alpha(GPUBlendState* self, GPUBlendComponent * value);

/** @brief Constructor of the GPUBlendState dictionary type */
GPUBlendState GPUBlendState_new();

#ifdef __cplusplus
}
#endif
