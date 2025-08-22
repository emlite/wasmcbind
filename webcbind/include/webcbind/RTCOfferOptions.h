#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCOfferOptions */
DECLARE_EMLITE_TYPE(RTCOfferOptions, em_Val);

/** @brief Getter of the offerToReceiveAudio property */
bool RTCOfferOptions_offerToReceiveAudio(const RTCOfferOptions *self);

/** @brief Setter of the offerToReceiveAudio property */
void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value);

/** @brief Getter of the offerToReceiveVideo property */
bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self);

/** @brief Setter of the offerToReceiveVideo property */
void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value);

/** @brief Constructor of the RTCOfferOptions dictionary type */
RTCOfferOptions RTCOfferOptions_new();

#ifdef __cplusplus
}
#endif
