#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCEncodedVideoFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCEncodedVideoFrameOptions */
DECLARE_EMLITE_TYPE(RTCEncodedVideoFrameOptions, em_Val);

/** @brief Getter of the metadata property */
RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameOptions_metadata(const RTCEncodedVideoFrameOptions *self);

/** @brief Setter of the metadata property */
void RTCEncodedVideoFrameOptions_set_metadata(RTCEncodedVideoFrameOptions* self, RTCEncodedVideoFrameMetadata * value);

/** @brief Constructor of the RTCEncodedVideoFrameOptions dictionary type */
RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions_new();

#ifdef __cplusplus
}
#endif
