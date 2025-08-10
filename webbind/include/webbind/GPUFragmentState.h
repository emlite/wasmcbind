#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUProgrammableStage.h"
#include "GPUColorTargetState.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUFragmentState, GPUProgrammableStage);

jb_Array GPUFragmentState_targets(const GPUFragmentState *self);

void GPUFragmentState_set_targets(GPUFragmentState* self, jb_Array * value);

GPUFragmentState GPUFragmentState_new();

#ifdef __cplusplus
}
#endif
