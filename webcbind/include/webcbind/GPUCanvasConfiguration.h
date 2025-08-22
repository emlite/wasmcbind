#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUCanvasToneMapping.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUDevice GPUDevice;

/** @brief Dictionary type GPUCanvasConfiguration */
DECLARE_EMLITE_TYPE(GPUCanvasConfiguration, em_Val);

/** @brief Getter of the device property */
GPUDevice GPUCanvasConfiguration_device(const GPUCanvasConfiguration *self);

/** @brief Setter of the device property */
void GPUCanvasConfiguration_set_device(GPUCanvasConfiguration* self, GPUDevice * value);

/** @brief Getter of the format property */
GPUTextureFormat GPUCanvasConfiguration_format(const GPUCanvasConfiguration *self);

/** @brief Setter of the format property */
void GPUCanvasConfiguration_set_format(GPUCanvasConfiguration* self, GPUTextureFormat * value);

/** @brief Getter of the usage property */
jb_Any GPUCanvasConfiguration_usage(const GPUCanvasConfiguration *self);

/** @brief Setter of the usage property */
void GPUCanvasConfiguration_set_usage(GPUCanvasConfiguration* self, jb_Any * value);

/** @brief Getter of the viewFormats property */
jb_Array GPUCanvasConfiguration_viewFormats(const GPUCanvasConfiguration *self);

/** @brief Setter of the viewFormats property */
void GPUCanvasConfiguration_set_viewFormats(GPUCanvasConfiguration* self, jb_Array * value);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace GPUCanvasConfiguration_colorSpace(const GPUCanvasConfiguration *self);

/** @brief Setter of the colorSpace property */
void GPUCanvasConfiguration_set_colorSpace(GPUCanvasConfiguration* self, PredefinedColorSpace * value);

/** @brief Getter of the toneMapping property */
GPUCanvasToneMapping GPUCanvasConfiguration_toneMapping(const GPUCanvasConfiguration *self);

/** @brief Setter of the toneMapping property */
void GPUCanvasConfiguration_set_toneMapping(GPUCanvasConfiguration* self, GPUCanvasToneMapping * value);

/** @brief Getter of the alphaMode property */
GPUCanvasAlphaMode GPUCanvasConfiguration_alphaMode(const GPUCanvasConfiguration *self);

/** @brief Setter of the alphaMode property */
void GPUCanvasConfiguration_set_alphaMode(GPUCanvasConfiguration* self, GPUCanvasAlphaMode * value);

/** @brief Constructor of the GPUCanvasConfiguration dictionary type */
GPUCanvasConfiguration GPUCanvasConfiguration_new();

#ifdef __cplusplus
}
#endif
