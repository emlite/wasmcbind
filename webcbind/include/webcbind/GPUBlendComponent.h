#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBlendComponent */
DECLARE_EMLITE_TYPE(GPUBlendComponent, em_Val);

/** @brief Getter of the operation property */
GPUBlendOperation GPUBlendComponent_operation(const GPUBlendComponent *self);

/** @brief Setter of the operation property */
void GPUBlendComponent_set_operation(GPUBlendComponent* self, GPUBlendOperation * value);

/** @brief Getter of the srcFactor property */
GPUBlendFactor GPUBlendComponent_srcFactor(const GPUBlendComponent *self);

/** @brief Setter of the srcFactor property */
void GPUBlendComponent_set_srcFactor(GPUBlendComponent* self, GPUBlendFactor * value);

/** @brief Getter of the dstFactor property */
GPUBlendFactor GPUBlendComponent_dstFactor(const GPUBlendComponent *self);

/** @brief Setter of the dstFactor property */
void GPUBlendComponent_set_dstFactor(GPUBlendComponent* self, GPUBlendFactor * value);

/** @brief Constructor of the GPUBlendComponent dictionary type */
GPUBlendComponent GPUBlendComponent_new();

#ifdef __cplusplus
}
#endif
