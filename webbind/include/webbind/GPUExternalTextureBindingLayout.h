#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUExternalTextureBindingLayout, em_Val);

GPUExternalTextureBindingLayout GPUExternalTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
