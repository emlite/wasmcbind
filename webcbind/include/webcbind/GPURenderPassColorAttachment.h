#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURenderPassColorAttachment */
DECLARE_EMLITE_TYPE(GPURenderPassColorAttachment, em_Val);

/** @brief Getter of the view property */
jb_Any GPURenderPassColorAttachment_view(const GPURenderPassColorAttachment *self);

/** @brief Setter of the view property */
void GPURenderPassColorAttachment_set_view(GPURenderPassColorAttachment* self, jb_Any * value);

/** @brief Getter of the depthSlice property */
jb_Any GPURenderPassColorAttachment_depthSlice(const GPURenderPassColorAttachment *self);

/** @brief Setter of the depthSlice property */
void GPURenderPassColorAttachment_set_depthSlice(GPURenderPassColorAttachment* self, jb_Any * value);

/** @brief Getter of the resolveTarget property */
jb_Any GPURenderPassColorAttachment_resolveTarget(const GPURenderPassColorAttachment *self);

/** @brief Setter of the resolveTarget property */
void GPURenderPassColorAttachment_set_resolveTarget(GPURenderPassColorAttachment* self, jb_Any * value);

/** @brief Getter of the clearValue property */
jb_Any GPURenderPassColorAttachment_clearValue(const GPURenderPassColorAttachment *self);

/** @brief Setter of the clearValue property */
void GPURenderPassColorAttachment_set_clearValue(GPURenderPassColorAttachment* self, jb_Any * value);

/** @brief Getter of the loadOp property */
GPULoadOp GPURenderPassColorAttachment_loadOp(const GPURenderPassColorAttachment *self);

/** @brief Setter of the loadOp property */
void GPURenderPassColorAttachment_set_loadOp(GPURenderPassColorAttachment* self, GPULoadOp * value);

/** @brief Getter of the storeOp property */
GPUStoreOp GPURenderPassColorAttachment_storeOp(const GPURenderPassColorAttachment *self);

/** @brief Setter of the storeOp property */
void GPURenderPassColorAttachment_set_storeOp(GPURenderPassColorAttachment* self, GPUStoreOp * value);

/** @brief Constructor of the GPURenderPassColorAttachment dictionary type */
GPURenderPassColorAttachment GPURenderPassColorAttachment_new();

#ifdef __cplusplus
}
#endif
