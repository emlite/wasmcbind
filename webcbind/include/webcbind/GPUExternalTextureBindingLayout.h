#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUExternalTextureBindingLayout */
DECLARE_EMLITE_TYPE(GPUExternalTextureBindingLayout, em_Val);

/** @brief Constructor of the GPUExternalTextureBindingLayout dictionary type */
GPUExternalTextureBindingLayout GPUExternalTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
