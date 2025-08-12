#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageDecodeOptions */
DECLARE_EMLITE_TYPE(ImageDecodeOptions, em_Val);

/** @brief Getter of the frameIndex property */
unsigned long ImageDecodeOptions_frameIndex(const ImageDecodeOptions *self);

/** @brief Setter of the frameIndex property */
void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value);

/** @brief Getter of the completeFramesOnly property */
bool ImageDecodeOptions_completeFramesOnly(const ImageDecodeOptions *self);

/** @brief Setter of the completeFramesOnly property */
void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value);

/** @brief Constructor of the ImageDecodeOptions dictionary type */
ImageDecodeOptions ImageDecodeOptions_new();

#ifdef __cplusplus
}
#endif
