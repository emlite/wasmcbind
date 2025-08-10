#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCOfferOptions, em_Val);

bool RTCOfferOptions_offerToReceiveAudio(const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value);

bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value);

RTCOfferOptions RTCOfferOptions_new();

#ifdef __cplusplus
}
#endif
