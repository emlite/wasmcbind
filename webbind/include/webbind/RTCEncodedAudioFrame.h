#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions;
typedef struct RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata;

DECLARE_EMLITE_TYPE(RTCEncodedAudioFrame, em_Val);

RTCEncodedAudioFrame RTCEncodedAudioFrame_new0(RTCEncodedAudioFrame * originalFrame);

RTCEncodedAudioFrame RTCEncodedAudioFrame_new1(RTCEncodedAudioFrame * originalFrame, RTCEncodedAudioFrameOptions * options);

jb_ArrayBuffer RTCEncodedAudioFrame_data(const RTCEncodedAudioFrame *self);

void RTCEncodedAudioFrame_set_data(RTCEncodedAudioFrame* self, jb_ArrayBuffer * value);

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame_getMetadata(RTCEncodedAudioFrame* self );

#ifdef __cplusplus
}
#endif
