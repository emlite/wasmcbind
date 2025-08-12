#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCEncodedAudioFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCEncodedAudioFrameOptions */
DECLARE_EMLITE_TYPE(RTCEncodedAudioFrameOptions, em_Val);

/** @brief Getter of the metadata property */
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameOptions_metadata(const RTCEncodedAudioFrameOptions *self);

/** @brief Setter of the metadata property */
void RTCEncodedAudioFrameOptions_set_metadata(RTCEncodedAudioFrameOptions* self, RTCEncodedAudioFrameMetadata * value);

/** @brief Constructor of the RTCEncodedAudioFrameOptions dictionary type */
RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions_new();

#ifdef __cplusplus
}
#endif
