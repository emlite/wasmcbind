#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCEncodedFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCEncodedAudioFrameMetadata */
DECLARE_EMLITE_TYPE(RTCEncodedAudioFrameMetadata, RTCEncodedFrameMetadata);

/** @brief Getter of the sequenceNumber property */
short RTCEncodedAudioFrameMetadata_sequenceNumber(const RTCEncodedAudioFrameMetadata *self);

/** @brief Setter of the sequenceNumber property */
void RTCEncodedAudioFrameMetadata_set_sequenceNumber(RTCEncodedAudioFrameMetadata* self, short value);

/** @brief Getter of the audioLevel property */
double RTCEncodedAudioFrameMetadata_audioLevel(const RTCEncodedAudioFrameMetadata *self);

/** @brief Setter of the audioLevel property */
void RTCEncodedAudioFrameMetadata_set_audioLevel(RTCEncodedAudioFrameMetadata* self, double value);

/** @brief Constructor of the RTCEncodedAudioFrameMetadata dictionary type */
RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata_new();

#ifdef __cplusplus
}
#endif
