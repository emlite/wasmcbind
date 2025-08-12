#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUProgrammableStage.h"
#include "GPUColorTargetState.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUFragmentState */
DECLARE_EMLITE_TYPE(GPUFragmentState, GPUProgrammableStage);

/** @brief Getter of the targets property */
jb_Array GPUFragmentState_targets(const GPUFragmentState *self);

/** @brief Setter of the targets property */
void GPUFragmentState_set_targets(GPUFragmentState* self, jb_Array * value);

/** @brief Constructor of the GPUFragmentState dictionary type */
GPUFragmentState GPUFragmentState_new();

#ifdef __cplusplus
}
#endif
