#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUMultisampleState, em_Val);

jb_Any GPUMultisampleState_count(const GPUMultisampleState *self);

void GPUMultisampleState_set_count(GPUMultisampleState* self, jb_Any * value);

jb_Any GPUMultisampleState_mask(const GPUMultisampleState *self);

void GPUMultisampleState_set_mask(GPUMultisampleState* self, jb_Any * value);

bool GPUMultisampleState_alphaToCoverageEnabled(const GPUMultisampleState *self);

void GPUMultisampleState_set_alphaToCoverageEnabled(GPUMultisampleState* self, bool value);

GPUMultisampleState GPUMultisampleState_new();

#ifdef __cplusplus
}
#endif
