#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageEncodeOptions */
DECLARE_EMLITE_TYPE(ImageEncodeOptions, em_Val);

/** @brief Getter of the type property */
jb_String ImageEncodeOptions_type(const ImageEncodeOptions *self);

/** @brief Setter of the type property */
void ImageEncodeOptions_set_type(ImageEncodeOptions* self, jb_String * value);

/** @brief Getter of the quality property */
double ImageEncodeOptions_quality(const ImageEncodeOptions *self);

/** @brief Setter of the quality property */
void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value);

/** @brief Constructor of the ImageEncodeOptions dictionary type */
ImageEncodeOptions ImageEncodeOptions_new();

#ifdef __cplusplus
}
#endif
