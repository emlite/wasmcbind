#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCEncodedVideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCEncodedVideoFrameOptions, em_Val);

RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameOptions_metadata(const RTCEncodedVideoFrameOptions *self);

void RTCEncodedVideoFrameOptions_set_metadata(RTCEncodedVideoFrameOptions* self, RTCEncodedVideoFrameMetadata * value);

RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions_new();

#ifdef __cplusplus
}
#endif
