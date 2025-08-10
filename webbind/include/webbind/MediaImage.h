#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaImage, em_Val);

jb_String MediaImage_src(const MediaImage *self);

void MediaImage_set_src(MediaImage* self, jb_String * value);

jb_String MediaImage_sizes(const MediaImage *self);

void MediaImage_set_sizes(MediaImage* self, jb_String * value);

jb_String MediaImage_type(const MediaImage *self);

void MediaImage_set_type(MediaImage* self, jb_String * value);

MediaImage MediaImage_new();

#ifdef __cplusplus
}
#endif
