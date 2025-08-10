#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageDecoderInit, em_Val);

jb_String ImageDecoderInit_type(const ImageDecoderInit *self);

void ImageDecoderInit_set_type(ImageDecoderInit* self, jb_String * value);

jb_Any ImageDecoderInit_data(const ImageDecoderInit *self);

void ImageDecoderInit_set_data(ImageDecoderInit* self, jb_Any * value);

ColorSpaceConversion ImageDecoderInit_colorSpaceConversion(const ImageDecoderInit *self);

void ImageDecoderInit_set_colorSpaceConversion(ImageDecoderInit* self, ColorSpaceConversion * value);

unsigned long ImageDecoderInit_desiredWidth(const ImageDecoderInit *self);

void ImageDecoderInit_set_desiredWidth(ImageDecoderInit* self, unsigned long value);

unsigned long ImageDecoderInit_desiredHeight(const ImageDecoderInit *self);

void ImageDecoderInit_set_desiredHeight(ImageDecoderInit* self, unsigned long value);

bool ImageDecoderInit_preferAnimation(const ImageDecoderInit *self);

void ImageDecoderInit_set_preferAnimation(ImageDecoderInit* self, bool value);

jb_Array ImageDecoderInit_transfer(const ImageDecoderInit *self);

void ImageDecoderInit_set_transfer(ImageDecoderInit* self, jb_Array * value);

ImageDecoderInit ImageDecoderInit_new();

#ifdef __cplusplus
}
#endif
