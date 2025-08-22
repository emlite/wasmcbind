#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUProgrammableStage.h"
#include "GPUVertexBufferLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUVertexState */
DECLARE_EMLITE_TYPE(GPUVertexState, GPUProgrammableStage);

/** @brief Getter of the buffers property */
jb_Array GPUVertexState_buffers(const GPUVertexState *self);

/** @brief Setter of the buffers property */
void GPUVertexState_set_buffers(GPUVertexState* self, jb_Array * value);

/** @brief Constructor of the GPUVertexState dictionary type */
GPUVertexState GPUVertexState_new();

#ifdef __cplusplus
}
#endif
