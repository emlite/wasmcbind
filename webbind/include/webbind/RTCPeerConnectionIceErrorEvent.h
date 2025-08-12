#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit;


/**
 * @brief Interface RTCPeerConnectionIceErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent)
 */
DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);

/**
 * @brief Creates a new `RTCPeerConnectionIceErrorEvent` object. 
*/
RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(jb_String * type, RTCPeerConnectionIceErrorEventInit * eventInitDict);

/**
 * @brief Gets the `address` property. 
*/
jb_String RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self);

/**
 * @brief Gets the `port` property. 
*/
unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self);

/**
 * @brief Gets the `errorCode` property. 
*/
unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self);

/**
 * @brief Gets the `errorText` property. 
*/
jb_String RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self);

#ifdef __cplusplus
}
#endif
