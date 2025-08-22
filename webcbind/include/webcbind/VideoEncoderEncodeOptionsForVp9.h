#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderEncodeOptionsForVp9 */
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForVp9, em_Val);

/** @brief Getter of the quantizer property */
unsigned short VideoEncoderEncodeOptionsForVp9_quantizer(const VideoEncoderEncodeOptionsForVp9 *self);

/** @brief Setter of the quantizer property */
void VideoEncoderEncodeOptionsForVp9_set_quantizer(VideoEncoderEncodeOptionsForVp9* self, unsigned short value);

/** @brief Constructor of the VideoEncoderEncodeOptionsForVp9 dictionary type */
VideoEncoderEncodeOptionsForVp9 VideoEncoderEncodeOptionsForVp9_new();

#ifdef __cplusplus
}
#endif
