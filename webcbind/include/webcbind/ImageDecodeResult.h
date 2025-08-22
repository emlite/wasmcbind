#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoFrame VideoFrame;

/** @brief Dictionary type ImageDecodeResult */
DECLARE_EMLITE_TYPE(ImageDecodeResult, em_Val);

/** @brief Getter of the image property */
VideoFrame ImageDecodeResult_image(const ImageDecodeResult *self);

/** @brief Setter of the image property */
void ImageDecodeResult_set_image(ImageDecodeResult* self, VideoFrame * value);

/** @brief Getter of the complete property */
bool ImageDecodeResult_complete(const ImageDecodeResult *self);

/** @brief Setter of the complete property */
void ImageDecodeResult_set_complete(ImageDecodeResult* self, bool value);

/** @brief Constructor of the ImageDecodeResult dictionary type */
ImageDecodeResult ImageDecodeResult_new();

#ifdef __cplusplus
}
#endif
