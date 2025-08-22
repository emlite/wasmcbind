#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURenderPassDepthStencilAttachment */
DECLARE_EMLITE_TYPE(GPURenderPassDepthStencilAttachment, em_Val);

/** @brief Getter of the view property */
jb_Any GPURenderPassDepthStencilAttachment_view(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the view property */
void GPURenderPassDepthStencilAttachment_set_view(GPURenderPassDepthStencilAttachment* self, jb_Any * value);

/** @brief Getter of the depthClearValue property */
float GPURenderPassDepthStencilAttachment_depthClearValue(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the depthClearValue property */
void GPURenderPassDepthStencilAttachment_set_depthClearValue(GPURenderPassDepthStencilAttachment* self, float value);

/** @brief Getter of the depthLoadOp property */
GPULoadOp GPURenderPassDepthStencilAttachment_depthLoadOp(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the depthLoadOp property */
void GPURenderPassDepthStencilAttachment_set_depthLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value);

/** @brief Getter of the depthStoreOp property */
GPUStoreOp GPURenderPassDepthStencilAttachment_depthStoreOp(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the depthStoreOp property */
void GPURenderPassDepthStencilAttachment_set_depthStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value);

/** @brief Getter of the depthReadOnly property */
bool GPURenderPassDepthStencilAttachment_depthReadOnly(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the depthReadOnly property */
void GPURenderPassDepthStencilAttachment_set_depthReadOnly(GPURenderPassDepthStencilAttachment* self, bool value);

/** @brief Getter of the stencilClearValue property */
jb_Any GPURenderPassDepthStencilAttachment_stencilClearValue(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the stencilClearValue property */
void GPURenderPassDepthStencilAttachment_set_stencilClearValue(GPURenderPassDepthStencilAttachment* self, jb_Any * value);

/** @brief Getter of the stencilLoadOp property */
GPULoadOp GPURenderPassDepthStencilAttachment_stencilLoadOp(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the stencilLoadOp property */
void GPURenderPassDepthStencilAttachment_set_stencilLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value);

/** @brief Getter of the stencilStoreOp property */
GPUStoreOp GPURenderPassDepthStencilAttachment_stencilStoreOp(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the stencilStoreOp property */
void GPURenderPassDepthStencilAttachment_set_stencilStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value);

/** @brief Getter of the stencilReadOnly property */
bool GPURenderPassDepthStencilAttachment_stencilReadOnly(const GPURenderPassDepthStencilAttachment *self);

/** @brief Setter of the stencilReadOnly property */
void GPURenderPassDepthStencilAttachment_set_stencilReadOnly(GPURenderPassDepthStencilAttachment* self, bool value);

/** @brief Constructor of the GPURenderPassDepthStencilAttachment dictionary type */
GPURenderPassDepthStencilAttachment GPURenderPassDepthStencilAttachment_new();

#ifdef __cplusplus
}
#endif
