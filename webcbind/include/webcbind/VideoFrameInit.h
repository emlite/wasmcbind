#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMRectInit.h"
#include "VideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoFrameInit */
DECLARE_EMLITE_TYPE(VideoFrameInit, em_Val);

/** @brief Getter of the duration property */
long long VideoFrameInit_duration(const VideoFrameInit *self);

/** @brief Setter of the duration property */
void VideoFrameInit_set_duration(VideoFrameInit* self, long long value);

/** @brief Getter of the timestamp property */
long long VideoFrameInit_timestamp(const VideoFrameInit *self);

/** @brief Setter of the timestamp property */
void VideoFrameInit_set_timestamp(VideoFrameInit* self, long long value);

/** @brief Getter of the alpha property */
AlphaOption VideoFrameInit_alpha(const VideoFrameInit *self);

/** @brief Setter of the alpha property */
void VideoFrameInit_set_alpha(VideoFrameInit* self, AlphaOption * value);

/** @brief Getter of the visibleRect property */
DOMRectInit VideoFrameInit_visibleRect(const VideoFrameInit *self);

/** @brief Setter of the visibleRect property */
void VideoFrameInit_set_visibleRect(VideoFrameInit* self, DOMRectInit * value);

/** @brief Getter of the rotation property */
double VideoFrameInit_rotation(const VideoFrameInit *self);

/** @brief Setter of the rotation property */
void VideoFrameInit_set_rotation(VideoFrameInit* self, double value);

/** @brief Getter of the flip property */
bool VideoFrameInit_flip(const VideoFrameInit *self);

/** @brief Setter of the flip property */
void VideoFrameInit_set_flip(VideoFrameInit* self, bool value);

/** @brief Getter of the displayWidth property */
unsigned long VideoFrameInit_displayWidth(const VideoFrameInit *self);

/** @brief Setter of the displayWidth property */
void VideoFrameInit_set_displayWidth(VideoFrameInit* self, unsigned long value);

/** @brief Getter of the displayHeight property */
unsigned long VideoFrameInit_displayHeight(const VideoFrameInit *self);

/** @brief Setter of the displayHeight property */
void VideoFrameInit_set_displayHeight(VideoFrameInit* self, unsigned long value);

/** @brief Getter of the metadata property */
VideoFrameMetadata VideoFrameInit_metadata(const VideoFrameInit *self);

/** @brief Setter of the metadata property */
void VideoFrameInit_set_metadata(VideoFrameInit* self, VideoFrameMetadata * value);

/** @brief Constructor of the VideoFrameInit dictionary type */
VideoFrameInit VideoFrameInit_new();

#ifdef __cplusplus
}
#endif
