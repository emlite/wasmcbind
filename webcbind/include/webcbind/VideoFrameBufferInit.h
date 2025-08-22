#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PlaneLayout.h"
#include "DOMRectInit.h"
#include "VideoColorSpaceInit.h"
#include "VideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoFrameBufferInit */
DECLARE_EMLITE_TYPE(VideoFrameBufferInit, em_Val);

/** @brief Getter of the format property */
VideoPixelFormat VideoFrameBufferInit_format(const VideoFrameBufferInit *self);

/** @brief Setter of the format property */
void VideoFrameBufferInit_set_format(VideoFrameBufferInit* self, VideoPixelFormat * value);

/** @brief Getter of the codedWidth property */
unsigned long VideoFrameBufferInit_codedWidth(const VideoFrameBufferInit *self);

/** @brief Setter of the codedWidth property */
void VideoFrameBufferInit_set_codedWidth(VideoFrameBufferInit* self, unsigned long value);

/** @brief Getter of the codedHeight property */
unsigned long VideoFrameBufferInit_codedHeight(const VideoFrameBufferInit *self);

/** @brief Setter of the codedHeight property */
void VideoFrameBufferInit_set_codedHeight(VideoFrameBufferInit* self, unsigned long value);

/** @brief Getter of the timestamp property */
long long VideoFrameBufferInit_timestamp(const VideoFrameBufferInit *self);

/** @brief Setter of the timestamp property */
void VideoFrameBufferInit_set_timestamp(VideoFrameBufferInit* self, long long value);

/** @brief Getter of the duration property */
long long VideoFrameBufferInit_duration(const VideoFrameBufferInit *self);

/** @brief Setter of the duration property */
void VideoFrameBufferInit_set_duration(VideoFrameBufferInit* self, long long value);

/** @brief Getter of the layout property */
jb_Array VideoFrameBufferInit_layout(const VideoFrameBufferInit *self);

/** @brief Setter of the layout property */
void VideoFrameBufferInit_set_layout(VideoFrameBufferInit* self, jb_Array * value);

/** @brief Getter of the visibleRect property */
DOMRectInit VideoFrameBufferInit_visibleRect(const VideoFrameBufferInit *self);

/** @brief Setter of the visibleRect property */
void VideoFrameBufferInit_set_visibleRect(VideoFrameBufferInit* self, DOMRectInit * value);

/** @brief Getter of the rotation property */
double VideoFrameBufferInit_rotation(const VideoFrameBufferInit *self);

/** @brief Setter of the rotation property */
void VideoFrameBufferInit_set_rotation(VideoFrameBufferInit* self, double value);

/** @brief Getter of the flip property */
bool VideoFrameBufferInit_flip(const VideoFrameBufferInit *self);

/** @brief Setter of the flip property */
void VideoFrameBufferInit_set_flip(VideoFrameBufferInit* self, bool value);

/** @brief Getter of the displayWidth property */
unsigned long VideoFrameBufferInit_displayWidth(const VideoFrameBufferInit *self);

/** @brief Setter of the displayWidth property */
void VideoFrameBufferInit_set_displayWidth(VideoFrameBufferInit* self, unsigned long value);

/** @brief Getter of the displayHeight property */
unsigned long VideoFrameBufferInit_displayHeight(const VideoFrameBufferInit *self);

/** @brief Setter of the displayHeight property */
void VideoFrameBufferInit_set_displayHeight(VideoFrameBufferInit* self, unsigned long value);

/** @brief Getter of the colorSpace property */
VideoColorSpaceInit VideoFrameBufferInit_colorSpace(const VideoFrameBufferInit *self);

/** @brief Setter of the colorSpace property */
void VideoFrameBufferInit_set_colorSpace(VideoFrameBufferInit* self, VideoColorSpaceInit * value);

/** @brief Getter of the transfer property */
jb_Array VideoFrameBufferInit_transfer(const VideoFrameBufferInit *self);

/** @brief Setter of the transfer property */
void VideoFrameBufferInit_set_transfer(VideoFrameBufferInit* self, jb_Array * value);

/** @brief Getter of the metadata property */
VideoFrameMetadata VideoFrameBufferInit_metadata(const VideoFrameBufferInit *self);

/** @brief Setter of the metadata property */
void VideoFrameBufferInit_set_metadata(VideoFrameBufferInit* self, VideoFrameMetadata * value);

/** @brief Constructor of the VideoFrameBufferInit dictionary type */
VideoFrameBufferInit VideoFrameBufferInit_new();

#ifdef __cplusplus
}
#endif
