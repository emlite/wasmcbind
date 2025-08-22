#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageDecoderInit */
DECLARE_EMLITE_TYPE(ImageDecoderInit, em_Val);

/** @brief Getter of the type property */
jb_String ImageDecoderInit_type(const ImageDecoderInit *self);

/** @brief Setter of the type property */
void ImageDecoderInit_set_type(ImageDecoderInit* self, jb_String * value);

/** @brief Getter of the data property */
jb_Any ImageDecoderInit_data(const ImageDecoderInit *self);

/** @brief Setter of the data property */
void ImageDecoderInit_set_data(ImageDecoderInit* self, jb_Any * value);

/** @brief Getter of the colorSpaceConversion property */
ColorSpaceConversion ImageDecoderInit_colorSpaceConversion(const ImageDecoderInit *self);

/** @brief Setter of the colorSpaceConversion property */
void ImageDecoderInit_set_colorSpaceConversion(ImageDecoderInit* self, ColorSpaceConversion * value);

/** @brief Getter of the desiredWidth property */
unsigned long ImageDecoderInit_desiredWidth(const ImageDecoderInit *self);

/** @brief Setter of the desiredWidth property */
void ImageDecoderInit_set_desiredWidth(ImageDecoderInit* self, unsigned long value);

/** @brief Getter of the desiredHeight property */
unsigned long ImageDecoderInit_desiredHeight(const ImageDecoderInit *self);

/** @brief Setter of the desiredHeight property */
void ImageDecoderInit_set_desiredHeight(ImageDecoderInit* self, unsigned long value);

/** @brief Getter of the preferAnimation property */
bool ImageDecoderInit_preferAnimation(const ImageDecoderInit *self);

/** @brief Setter of the preferAnimation property */
void ImageDecoderInit_set_preferAnimation(ImageDecoderInit* self, bool value);

/** @brief Getter of the transfer property */
jb_Array ImageDecoderInit_transfer(const ImageDecoderInit *self);

/** @brief Setter of the transfer property */
void ImageDecoderInit_set_transfer(ImageDecoderInit* self, jb_Array * value);

/** @brief Constructor of the ImageDecoderInit dictionary type */
ImageDecoderInit ImageDecoderInit_new();

#ifdef __cplusplus
}
#endif
