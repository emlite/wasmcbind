#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoDecoderInit, em_Val);

jb_Function VideoDecoderInit_output(const VideoDecoderInit *self);

void VideoDecoderInit_set_output(VideoDecoderInit* self, jb_Function * value);

jb_Function VideoDecoderInit_error(const VideoDecoderInit *self);

void VideoDecoderInit_set_error(VideoDecoderInit* self, jb_Function * value);

VideoDecoderInit VideoDecoderInit_new();

#ifdef __cplusplus
}
#endif
