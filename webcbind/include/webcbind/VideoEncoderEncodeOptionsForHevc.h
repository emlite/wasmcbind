#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderEncodeOptionsForHevc */
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForHevc, em_Val);

/** @brief Getter of the quantizer property */
unsigned short VideoEncoderEncodeOptionsForHevc_quantizer(const VideoEncoderEncodeOptionsForHevc *self);

/** @brief Setter of the quantizer property */
void VideoEncoderEncodeOptionsForHevc_set_quantizer(VideoEncoderEncodeOptionsForHevc* self, unsigned short value);

/** @brief Constructor of the VideoEncoderEncodeOptionsForHevc dictionary type */
VideoEncoderEncodeOptionsForHevc VideoEncoderEncodeOptionsForHevc_new();

#ifdef __cplusplus
}
#endif
