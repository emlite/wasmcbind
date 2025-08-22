#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDtlsTransport RTCDtlsTransport;


/**
 * @brief Interface RTCSctpTransport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport)
 */
DECLARE_EMLITE_TYPE(RTCSctpTransport, EventTarget);

/**
 * @brief Gets the `transport` property. 
*/
RTCDtlsTransport RTCSctpTransport_transport(const RTCSctpTransport *self);

/**
 * @brief Gets the `state` property. 
*/
RTCSctpTransportState RTCSctpTransport_state(const RTCSctpTransport *self);

/**
 * @brief Gets the `maxMessageSize` property. 
*/
double RTCSctpTransport_maxMessageSize(const RTCSctpTransport *self);

/**
 * @brief Gets the `maxChannels` property. 
*/
unsigned short RTCSctpTransport_maxChannels(const RTCSctpTransport *self);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any RTCSctpTransport_onstatechange(const RTCSctpTransport *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void RTCSctpTransport_set_onstatechange(RTCSctpTransport* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
