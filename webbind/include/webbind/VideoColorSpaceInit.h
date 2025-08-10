#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoColorSpaceInit, em_Val);

VideoColorPrimaries VideoColorSpaceInit_primaries(const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_primaries(VideoColorSpaceInit* self, VideoColorPrimaries * value);

VideoTransferCharacteristics VideoColorSpaceInit_transfer(const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_transfer(VideoColorSpaceInit* self, VideoTransferCharacteristics * value);

VideoMatrixCoefficients VideoColorSpaceInit_matrix(const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_matrix(VideoColorSpaceInit* self, VideoMatrixCoefficients * value);

bool VideoColorSpaceInit_fullRange(const VideoColorSpaceInit *self);

void VideoColorSpaceInit_set_fullRange(VideoColorSpaceInit* self, bool value);

VideoColorSpaceInit VideoColorSpaceInit_new();

#ifdef __cplusplus
}
#endif
