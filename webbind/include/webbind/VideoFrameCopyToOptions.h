#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMRectInit.h"
#include "PlaneLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoFrameCopyToOptions, em_Val);

DOMRectInit VideoFrameCopyToOptions_rect(const VideoFrameCopyToOptions *self);

void VideoFrameCopyToOptions_set_rect(VideoFrameCopyToOptions* self, DOMRectInit * value);

jb_Array VideoFrameCopyToOptions_layout(const VideoFrameCopyToOptions *self);

void VideoFrameCopyToOptions_set_layout(VideoFrameCopyToOptions* self, jb_Array * value);

VideoPixelFormat VideoFrameCopyToOptions_format(const VideoFrameCopyToOptions *self);

void VideoFrameCopyToOptions_set_format(VideoFrameCopyToOptions* self, VideoPixelFormat * value);

PredefinedColorSpace VideoFrameCopyToOptions_colorSpace(const VideoFrameCopyToOptions *self);

void VideoFrameCopyToOptions_set_colorSpace(VideoFrameCopyToOptions* self, PredefinedColorSpace * value);

VideoFrameCopyToOptions VideoFrameCopyToOptions_new();

#ifdef __cplusplus
}
#endif
