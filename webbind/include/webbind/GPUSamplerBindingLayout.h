#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUSamplerBindingLayout */
DECLARE_EMLITE_TYPE(GPUSamplerBindingLayout, em_Val);

/** @brief Getter of the type property */
GPUSamplerBindingType GPUSamplerBindingLayout_type(const GPUSamplerBindingLayout *self);

/** @brief Setter of the type property */
void GPUSamplerBindingLayout_set_type(GPUSamplerBindingLayout* self, GPUSamplerBindingType * value);

/** @brief Constructor of the GPUSamplerBindingLayout dictionary type */
GPUSamplerBindingLayout GPUSamplerBindingLayout_new();

#ifdef __cplusplus
}
#endif
