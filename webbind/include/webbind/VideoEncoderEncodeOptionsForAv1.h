#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderEncodeOptionsForAv1 */
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAv1, em_Val);

/** @brief Getter of the quantizer property */
unsigned short VideoEncoderEncodeOptionsForAv1_quantizer(const VideoEncoderEncodeOptionsForAv1 *self);

/** @brief Setter of the quantizer property */
void VideoEncoderEncodeOptionsForAv1_set_quantizer(VideoEncoderEncodeOptionsForAv1* self, unsigned short value);

/** @brief Constructor of the VideoEncoderEncodeOptionsForAv1 dictionary type */
VideoEncoderEncodeOptionsForAv1 VideoEncoderEncodeOptionsForAv1_new();

#ifdef __cplusplus
}
#endif
