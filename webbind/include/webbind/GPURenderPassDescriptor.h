#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPURenderPassColorAttachment.h"
#include "GPURenderPassDepthStencilAttachment.h"
#include "GPURenderPassTimestampWrites.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

/** @brief Dictionary type GPURenderPassDescriptor */
DECLARE_EMLITE_TYPE(GPURenderPassDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the colorAttachments property */
jb_Array GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self);

/** @brief Setter of the colorAttachments property */
void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, jb_Array * value);

/** @brief Getter of the depthStencilAttachment property */
GPURenderPassDepthStencilAttachment GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self);

/** @brief Setter of the depthStencilAttachment property */
void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, GPURenderPassDepthStencilAttachment * value);

/** @brief Getter of the occlusionQuerySet property */
GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self);

/** @brief Setter of the occlusionQuerySet property */
void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, GPUQuerySet * value);

/** @brief Getter of the timestampWrites property */
GPURenderPassTimestampWrites GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self);

/** @brief Setter of the timestampWrites property */
void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, GPURenderPassTimestampWrites * value);

/** @brief Getter of the maxDrawCount property */
jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self);

/** @brief Setter of the maxDrawCount property */
void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, jb_Any * value);

/** @brief Constructor of the GPURenderPassDescriptor dictionary type */
GPURenderPassDescriptor GPURenderPassDescriptor_new();

#ifdef __cplusplus
}
#endif
