#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUMultisampleState */
DECLARE_EMLITE_TYPE(GPUMultisampleState, em_Val);

/** @brief Getter of the count property */
jb_Any GPUMultisampleState_count(const GPUMultisampleState *self);

/** @brief Setter of the count property */
void GPUMultisampleState_set_count(GPUMultisampleState* self, jb_Any * value);

/** @brief Getter of the mask property */
jb_Any GPUMultisampleState_mask(const GPUMultisampleState *self);

/** @brief Setter of the mask property */
void GPUMultisampleState_set_mask(GPUMultisampleState* self, jb_Any * value);

/** @brief Getter of the alphaToCoverageEnabled property */
bool GPUMultisampleState_alphaToCoverageEnabled(const GPUMultisampleState *self);

/** @brief Setter of the alphaToCoverageEnabled property */
void GPUMultisampleState_set_alphaToCoverageEnabled(GPUMultisampleState* self, bool value);

/** @brief Constructor of the GPUMultisampleState dictionary type */
GPUMultisampleState GPUMultisampleState_new();

#ifdef __cplusplus
}
#endif
