#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PlaneLayout.h"
#include "DOMRectInit.h"
#include "VideoColorSpaceInit.h"
#include "VideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoFrameBufferInit, em_Val);

VideoPixelFormat VideoFrameBufferInit_format(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_format(VideoFrameBufferInit* self, VideoPixelFormat * value);

unsigned long VideoFrameBufferInit_codedWidth(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_codedWidth(VideoFrameBufferInit* self, unsigned long value);

unsigned long VideoFrameBufferInit_codedHeight(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_codedHeight(VideoFrameBufferInit* self, unsigned long value);

long long VideoFrameBufferInit_timestamp(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_timestamp(VideoFrameBufferInit* self, long long value);

long long VideoFrameBufferInit_duration(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_duration(VideoFrameBufferInit* self, long long value);

jb_Array VideoFrameBufferInit_layout(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_layout(VideoFrameBufferInit* self, jb_Array * value);

DOMRectInit VideoFrameBufferInit_visibleRect(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_visibleRect(VideoFrameBufferInit* self, DOMRectInit * value);

double VideoFrameBufferInit_rotation(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_rotation(VideoFrameBufferInit* self, double value);

bool VideoFrameBufferInit_flip(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_flip(VideoFrameBufferInit* self, bool value);

unsigned long VideoFrameBufferInit_displayWidth(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_displayWidth(VideoFrameBufferInit* self, unsigned long value);

unsigned long VideoFrameBufferInit_displayHeight(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_displayHeight(VideoFrameBufferInit* self, unsigned long value);

VideoColorSpaceInit VideoFrameBufferInit_colorSpace(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_colorSpace(VideoFrameBufferInit* self, VideoColorSpaceInit * value);

jb_Array VideoFrameBufferInit_transfer(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_transfer(VideoFrameBufferInit* self, jb_Array * value);

VideoFrameMetadata VideoFrameBufferInit_metadata(const VideoFrameBufferInit *self);

void VideoFrameBufferInit_set_metadata(VideoFrameBufferInit* self, VideoFrameMetadata * value);

VideoFrameBufferInit VideoFrameBufferInit_new();

#ifdef __cplusplus
}
#endif
