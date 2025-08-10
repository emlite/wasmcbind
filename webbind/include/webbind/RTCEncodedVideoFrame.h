#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions;
typedef struct RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata;

DECLARE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);

RTCEncodedVideoFrame RTCEncodedVideoFrame_new0(RTCEncodedVideoFrame * originalFrame);

RTCEncodedVideoFrame RTCEncodedVideoFrame_new1(RTCEncodedVideoFrame * originalFrame, RTCEncodedVideoFrameOptions * options);

RTCEncodedVideoFrameType RTCEncodedVideoFrame_type(const RTCEncodedVideoFrame *self);

jb_ArrayBuffer RTCEncodedVideoFrame_data(const RTCEncodedVideoFrame *self);

void RTCEncodedVideoFrame_set_data(RTCEncodedVideoFrame* self, jb_ArrayBuffer * value);

RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame_getMetadata(RTCEncodedVideoFrame* self );

#ifdef __cplusplus
}
#endif
