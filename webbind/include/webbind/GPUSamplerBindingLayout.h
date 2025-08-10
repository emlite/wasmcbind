#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUSamplerBindingLayout, em_Val);

GPUSamplerBindingType GPUSamplerBindingLayout_type(const GPUSamplerBindingLayout *self);

void GPUSamplerBindingLayout_set_type(GPUSamplerBindingLayout* self, GPUSamplerBindingType * value);

GPUSamplerBindingLayout GPUSamplerBindingLayout_new();

#ifdef __cplusplus
}
#endif
