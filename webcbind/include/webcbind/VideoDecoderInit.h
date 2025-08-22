#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoDecoderInit */
DECLARE_EMLITE_TYPE(VideoDecoderInit, em_Val);

/** @brief Getter of the output property */
jb_Function VideoDecoderInit_output(const VideoDecoderInit *self);

/** @brief Setter of the output property */
void VideoDecoderInit_set_output(VideoDecoderInit* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function VideoDecoderInit_error(const VideoDecoderInit *self);

/** @brief Setter of the error property */
void VideoDecoderInit_set_error(VideoDecoderInit* self, jb_Function * value);

/** @brief Constructor of the VideoDecoderInit dictionary type */
VideoDecoderInit VideoDecoderInit_new();

#ifdef __cplusplus
}
#endif
