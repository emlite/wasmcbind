#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCEncodedAudioFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCEncodedAudioFrameOptions, em_Val);

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameOptions_metadata(const RTCEncodedAudioFrameOptions *self);

void RTCEncodedAudioFrameOptions_set_metadata(RTCEncodedAudioFrameOptions* self, RTCEncodedAudioFrameMetadata * value);

RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions_new();

#ifdef __cplusplus
}
#endif
