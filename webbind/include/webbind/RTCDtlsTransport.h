#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIceTransport RTCIceTransport;


/**
 * @brief Interface RTCDtlsTransport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport)
 */
DECLARE_EMLITE_TYPE(RTCDtlsTransport, EventTarget);

/**
 * @brief Gets the `iceTransport` property. 
*/
RTCIceTransport RTCDtlsTransport_iceTransport(const RTCDtlsTransport *self);

/**
 * @brief Gets the `state` property. 
*/
RTCDtlsTransportState RTCDtlsTransport_state(const RTCDtlsTransport *self);

/**
 * @brief Calls the `getRemoteCertificates` method. 
*/
jb_Array RTCDtlsTransport_getRemoteCertificates(RTCDtlsTransport* self );

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any RTCDtlsTransport_onstatechange(const RTCDtlsTransport *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void RTCDtlsTransport_set_onstatechange(RTCDtlsTransport* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any RTCDtlsTransport_onerror(const RTCDtlsTransport *self);

/**
 * @brief Sets the `onerror` property. 
*/
void RTCDtlsTransport_set_onerror(RTCDtlsTransport* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
