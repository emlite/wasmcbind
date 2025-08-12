#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIceCandidate RTCIceCandidate;


/**
 * @brief Interface RTCIceCandidatePair
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidatePair)
 */
DECLARE_EMLITE_TYPE(RTCIceCandidatePair, em_Val);

/**
 * @brief Gets the `local` property. 
*/
RTCIceCandidate RTCIceCandidatePair_local(const RTCIceCandidatePair *self);

/**
 * @brief Gets the `remote` property. 
*/
RTCIceCandidate RTCIceCandidatePair_remote(const RTCIceCandidatePair *self);

#ifdef __cplusplus
}
#endif
