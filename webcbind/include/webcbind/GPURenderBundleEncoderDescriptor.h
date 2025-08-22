#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPURenderPassLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURenderBundleEncoderDescriptor */
DECLARE_EMLITE_TYPE(GPURenderBundleEncoderDescriptor, GPURenderPassLayout);

/** @brief Getter of the depthReadOnly property */
bool GPURenderBundleEncoderDescriptor_depthReadOnly(const GPURenderBundleEncoderDescriptor *self);

/** @brief Setter of the depthReadOnly property */
void GPURenderBundleEncoderDescriptor_set_depthReadOnly(GPURenderBundleEncoderDescriptor* self, bool value);

/** @brief Getter of the stencilReadOnly property */
bool GPURenderBundleEncoderDescriptor_stencilReadOnly(const GPURenderBundleEncoderDescriptor *self);

/** @brief Setter of the stencilReadOnly property */
void GPURenderBundleEncoderDescriptor_set_stencilReadOnly(GPURenderBundleEncoderDescriptor* self, bool value);

/** @brief Constructor of the GPURenderBundleEncoderDescriptor dictionary type */
GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor_new();

#ifdef __cplusplus
}
#endif
