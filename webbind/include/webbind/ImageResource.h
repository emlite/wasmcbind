#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageResource, em_Val);

jb_String ImageResource_src(const ImageResource *self);

void ImageResource_set_src(ImageResource* self, jb_String * value);

jb_String ImageResource_sizes(const ImageResource *self);

void ImageResource_set_sizes(ImageResource* self, jb_String * value);

jb_String ImageResource_type(const ImageResource *self);

void ImageResource_set_type(ImageResource* self, jb_String * value);

jb_String ImageResource_label(const ImageResource *self);

void ImageResource_set_label(ImageResource* self, jb_String * value);

ImageResource ImageResource_new();

#ifdef __cplusplus
}
#endif
