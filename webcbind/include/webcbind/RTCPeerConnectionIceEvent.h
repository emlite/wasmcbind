#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit;
typedef struct RTCIceCandidate RTCIceCandidate;


/**
 * @brief Interface RTCPeerConnectionIceEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceEvent)
 */
DECLARE_EMLITE_TYPE(RTCPeerConnectionIceEvent, Event);

/**
 * @brief Creates a new `RTCPeerConnectionIceEvent` object. 
*/
RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new0(jb_String * type);

/**
 * @brief Creates a new `RTCPeerConnectionIceEvent` object. 
*/
RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new1(jb_String * type, RTCPeerConnectionIceEventInit * eventInitDict);

/**
 * @brief Gets the `candidate` property. 
*/
RTCIceCandidate RTCPeerConnectionIceEvent_candidate(const RTCPeerConnectionIceEvent *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String RTCPeerConnectionIceEvent_url(const RTCPeerConnectionIceEvent *self);

#ifdef __cplusplus
}
#endif
