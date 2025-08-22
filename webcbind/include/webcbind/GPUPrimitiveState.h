#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUPrimitiveState */
DECLARE_EMLITE_TYPE(GPUPrimitiveState, em_Val);

/** @brief Getter of the topology property */
GPUPrimitiveTopology GPUPrimitiveState_topology(const GPUPrimitiveState *self);

/** @brief Setter of the topology property */
void GPUPrimitiveState_set_topology(GPUPrimitiveState* self, GPUPrimitiveTopology * value);

/** @brief Getter of the stripIndexFormat property */
GPUIndexFormat GPUPrimitiveState_stripIndexFormat(const GPUPrimitiveState *self);

/** @brief Setter of the stripIndexFormat property */
void GPUPrimitiveState_set_stripIndexFormat(GPUPrimitiveState* self, GPUIndexFormat * value);

/** @brief Getter of the frontFace property */
GPUFrontFace GPUPrimitiveState_frontFace(const GPUPrimitiveState *self);

/** @brief Setter of the frontFace property */
void GPUPrimitiveState_set_frontFace(GPUPrimitiveState* self, GPUFrontFace * value);

/** @brief Getter of the cullMode property */
GPUCullMode GPUPrimitiveState_cullMode(const GPUPrimitiveState *self);

/** @brief Setter of the cullMode property */
void GPUPrimitiveState_set_cullMode(GPUPrimitiveState* self, GPUCullMode * value);

/** @brief Getter of the unclippedDepth property */
bool GPUPrimitiveState_unclippedDepth(const GPUPrimitiveState *self);

/** @brief Setter of the unclippedDepth property */
void GPUPrimitiveState_set_unclippedDepth(GPUPrimitiveState* self, bool value);

/** @brief Constructor of the GPUPrimitiveState dictionary type */
GPUPrimitiveState GPUPrimitiveState_new();

#ifdef __cplusplus
}
#endif
