#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMRectInit.h"
#include "PlaneLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoFrameCopyToOptions */
DECLARE_EMLITE_TYPE(VideoFrameCopyToOptions, em_Val);

/** @brief Getter of the rect property */
DOMRectInit VideoFrameCopyToOptions_rect(const VideoFrameCopyToOptions *self);

/** @brief Setter of the rect property */
void VideoFrameCopyToOptions_set_rect(VideoFrameCopyToOptions* self, DOMRectInit * value);

/** @brief Getter of the layout property */
jb_Array VideoFrameCopyToOptions_layout(const VideoFrameCopyToOptions *self);

/** @brief Setter of the layout property */
void VideoFrameCopyToOptions_set_layout(VideoFrameCopyToOptions* self, jb_Array * value);

/** @brief Getter of the format property */
VideoPixelFormat VideoFrameCopyToOptions_format(const VideoFrameCopyToOptions *self);

/** @brief Setter of the format property */
void VideoFrameCopyToOptions_set_format(VideoFrameCopyToOptions* self, VideoPixelFormat * value);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace VideoFrameCopyToOptions_colorSpace(const VideoFrameCopyToOptions *self);

/** @brief Setter of the colorSpace property */
void VideoFrameCopyToOptions_set_colorSpace(VideoFrameCopyToOptions* self, PredefinedColorSpace * value);

/** @brief Constructor of the VideoFrameCopyToOptions dictionary type */
VideoFrameCopyToOptions VideoFrameCopyToOptions_new();

#ifdef __cplusplus
}
#endif
