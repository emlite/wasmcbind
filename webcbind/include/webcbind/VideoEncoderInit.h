#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderInit */
DECLARE_EMLITE_TYPE(VideoEncoderInit, em_Val);

/** @brief Getter of the output property */
jb_Function VideoEncoderInit_output(const VideoEncoderInit *self);

/** @brief Setter of the output property */
void VideoEncoderInit_set_output(VideoEncoderInit* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function VideoEncoderInit_error(const VideoEncoderInit *self);

/** @brief Setter of the error property */
void VideoEncoderInit_set_error(VideoEncoderInit* self, jb_Function * value);

/** @brief Constructor of the VideoEncoderInit dictionary type */
VideoEncoderInit VideoEncoderInit_new();

#ifdef __cplusplus
}
#endif
