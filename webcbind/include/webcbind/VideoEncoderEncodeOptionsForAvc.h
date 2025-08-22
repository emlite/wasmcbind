#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderEncodeOptionsForAvc */
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAvc, em_Val);

/** @brief Getter of the quantizer property */
unsigned short VideoEncoderEncodeOptionsForAvc_quantizer(const VideoEncoderEncodeOptionsForAvc *self);

/** @brief Setter of the quantizer property */
void VideoEncoderEncodeOptionsForAvc_set_quantizer(VideoEncoderEncodeOptionsForAvc* self, unsigned short value);

/** @brief Constructor of the VideoEncoderEncodeOptionsForAvc dictionary type */
VideoEncoderEncodeOptionsForAvc VideoEncoderEncodeOptionsForAvc_new();

#ifdef __cplusplus
}
#endif
