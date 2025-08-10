#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUProgrammableStage.h"
#include "GPUVertexBufferLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUVertexState, GPUProgrammableStage);

jb_Array GPUVertexState_buffers(const GPUVertexState *self);

void GPUVertexState_set_buffers(GPUVertexState* self, jb_Array * value);

GPUVertexState GPUVertexState_new();

#ifdef __cplusplus
}
#endif
