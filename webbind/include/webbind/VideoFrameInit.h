#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMRectInit.h"
#include "VideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoFrameInit, em_Val);

long long VideoFrameInit_duration(const VideoFrameInit *self);

void VideoFrameInit_set_duration(VideoFrameInit* self, long long value);

long long VideoFrameInit_timestamp(const VideoFrameInit *self);

void VideoFrameInit_set_timestamp(VideoFrameInit* self, long long value);

AlphaOption VideoFrameInit_alpha(const VideoFrameInit *self);

void VideoFrameInit_set_alpha(VideoFrameInit* self, AlphaOption * value);

DOMRectInit VideoFrameInit_visibleRect(const VideoFrameInit *self);

void VideoFrameInit_set_visibleRect(VideoFrameInit* self, DOMRectInit * value);

double VideoFrameInit_rotation(const VideoFrameInit *self);

void VideoFrameInit_set_rotation(VideoFrameInit* self, double value);

bool VideoFrameInit_flip(const VideoFrameInit *self);

void VideoFrameInit_set_flip(VideoFrameInit* self, bool value);

unsigned long VideoFrameInit_displayWidth(const VideoFrameInit *self);

void VideoFrameInit_set_displayWidth(VideoFrameInit* self, unsigned long value);

unsigned long VideoFrameInit_displayHeight(const VideoFrameInit *self);

void VideoFrameInit_set_displayHeight(VideoFrameInit* self, unsigned long value);

VideoFrameMetadata VideoFrameInit_metadata(const VideoFrameInit *self);

void VideoFrameInit_set_metadata(VideoFrameInit* self, VideoFrameMetadata * value);

VideoFrameInit VideoFrameInit_new();

#ifdef __cplusplus
}
#endif
