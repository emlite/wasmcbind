#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUCanvasToneMapping */
DECLARE_EMLITE_TYPE(GPUCanvasToneMapping, em_Val);

/** @brief Getter of the mode property */
GPUCanvasToneMappingMode GPUCanvasToneMapping_mode(const GPUCanvasToneMapping *self);

/** @brief Setter of the mode property */
void GPUCanvasToneMapping_set_mode(GPUCanvasToneMapping* self, GPUCanvasToneMappingMode * value);

/** @brief Constructor of the GPUCanvasToneMapping dictionary type */
GPUCanvasToneMapping GPUCanvasToneMapping_new();

#ifdef __cplusplus
}
#endif
