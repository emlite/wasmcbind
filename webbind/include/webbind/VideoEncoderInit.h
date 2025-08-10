#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderInit, em_Val);

jb_Function VideoEncoderInit_output(const VideoEncoderInit *self);

void VideoEncoderInit_set_output(VideoEncoderInit* self, jb_Function * value);

jb_Function VideoEncoderInit_error(const VideoEncoderInit *self);

void VideoEncoderInit_set_error(VideoEncoderInit* self, jb_Function * value);

VideoEncoderInit VideoEncoderInit_new();

#ifdef __cplusplus
}
#endif
