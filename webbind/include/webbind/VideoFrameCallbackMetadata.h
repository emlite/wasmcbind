#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoFrameCallbackMetadata, em_Val);

jb_Any VideoFrameCallbackMetadata_presentationTime(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_presentationTime(VideoFrameCallbackMetadata* self, jb_Any * value);

jb_Any VideoFrameCallbackMetadata_expectedDisplayTime(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_expectedDisplayTime(VideoFrameCallbackMetadata* self, jb_Any * value);

unsigned long VideoFrameCallbackMetadata_width(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_width(VideoFrameCallbackMetadata* self, unsigned long value);

unsigned long VideoFrameCallbackMetadata_height(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_height(VideoFrameCallbackMetadata* self, unsigned long value);

double VideoFrameCallbackMetadata_mediaTime(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_mediaTime(VideoFrameCallbackMetadata* self, double value);

unsigned long VideoFrameCallbackMetadata_presentedFrames(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_presentedFrames(VideoFrameCallbackMetadata* self, unsigned long value);

double VideoFrameCallbackMetadata_processingDuration(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_processingDuration(VideoFrameCallbackMetadata* self, double value);

jb_Any VideoFrameCallbackMetadata_captureTime(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_captureTime(VideoFrameCallbackMetadata* self, jb_Any * value);

jb_Any VideoFrameCallbackMetadata_receiveTime(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_receiveTime(VideoFrameCallbackMetadata* self, jb_Any * value);

unsigned long VideoFrameCallbackMetadata_rtpTimestamp(const VideoFrameCallbackMetadata *self);

void VideoFrameCallbackMetadata_set_rtpTimestamp(VideoFrameCallbackMetadata* self, unsigned long value);

VideoFrameCallbackMetadata VideoFrameCallbackMetadata_new();

#ifdef __cplusplus
}
#endif
