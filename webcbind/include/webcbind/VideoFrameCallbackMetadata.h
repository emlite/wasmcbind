#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoFrameCallbackMetadata */
DECLARE_EMLITE_TYPE(VideoFrameCallbackMetadata, em_Val);

/** @brief Getter of the presentationTime property */
jb_Any VideoFrameCallbackMetadata_presentationTime(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the presentationTime property */
void VideoFrameCallbackMetadata_set_presentationTime(VideoFrameCallbackMetadata* self, jb_Any * value);

/** @brief Getter of the expectedDisplayTime property */
jb_Any VideoFrameCallbackMetadata_expectedDisplayTime(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the expectedDisplayTime property */
void VideoFrameCallbackMetadata_set_expectedDisplayTime(VideoFrameCallbackMetadata* self, jb_Any * value);

/** @brief Getter of the width property */
unsigned long VideoFrameCallbackMetadata_width(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the width property */
void VideoFrameCallbackMetadata_set_width(VideoFrameCallbackMetadata* self, unsigned long value);

/** @brief Getter of the height property */
unsigned long VideoFrameCallbackMetadata_height(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the height property */
void VideoFrameCallbackMetadata_set_height(VideoFrameCallbackMetadata* self, unsigned long value);

/** @brief Getter of the mediaTime property */
double VideoFrameCallbackMetadata_mediaTime(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the mediaTime property */
void VideoFrameCallbackMetadata_set_mediaTime(VideoFrameCallbackMetadata* self, double value);

/** @brief Getter of the presentedFrames property */
unsigned long VideoFrameCallbackMetadata_presentedFrames(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the presentedFrames property */
void VideoFrameCallbackMetadata_set_presentedFrames(VideoFrameCallbackMetadata* self, unsigned long value);

/** @brief Getter of the processingDuration property */
double VideoFrameCallbackMetadata_processingDuration(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the processingDuration property */
void VideoFrameCallbackMetadata_set_processingDuration(VideoFrameCallbackMetadata* self, double value);

/** @brief Getter of the captureTime property */
jb_Any VideoFrameCallbackMetadata_captureTime(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the captureTime property */
void VideoFrameCallbackMetadata_set_captureTime(VideoFrameCallbackMetadata* self, jb_Any * value);

/** @brief Getter of the receiveTime property */
jb_Any VideoFrameCallbackMetadata_receiveTime(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the receiveTime property */
void VideoFrameCallbackMetadata_set_receiveTime(VideoFrameCallbackMetadata* self, jb_Any * value);

/** @brief Getter of the rtpTimestamp property */
unsigned long VideoFrameCallbackMetadata_rtpTimestamp(const VideoFrameCallbackMetadata *self);

/** @brief Setter of the rtpTimestamp property */
void VideoFrameCallbackMetadata_set_rtpTimestamp(VideoFrameCallbackMetadata* self, unsigned long value);

/** @brief Constructor of the VideoFrameCallbackMetadata dictionary type */
VideoFrameCallbackMetadata VideoFrameCallbackMetadata_new();

#ifdef __cplusplus
}
#endif
