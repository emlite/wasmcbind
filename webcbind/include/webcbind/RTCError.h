#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCErrorInit RTCErrorInit;


/**
 * @brief Interface RTCError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCError)
 */
DECLARE_EMLITE_TYPE(RTCError, DOMException);

/**
 * @brief Creates a new `RTCError` object. 
*/
RTCError RTCError_new0(RTCErrorInit * init);

/**
 * @brief Creates a new `RTCError` object. 
*/
RTCError RTCError_new1(RTCErrorInit * init, jb_String * message);

/**
 * @brief Gets the `errorDetail` property. 
*/
RTCErrorDetailType RTCError_errorDetail(const RTCError *self);

/**
 * @brief Gets the `sdpLineNumber` property. 
*/
long RTCError_sdpLineNumber(const RTCError *self);

/**
 * @brief Gets the `sctpCauseCode` property. 
*/
long RTCError_sctpCauseCode(const RTCError *self);

/**
 * @brief Gets the `receivedAlert` property. 
*/
unsigned long RTCError_receivedAlert(const RTCError *self);

/**
 * @brief Gets the `sentAlert` property. 
*/
unsigned long RTCError_sentAlert(const RTCError *self);

/**
 * @brief Gets the `httpRequestStatusCode` property. 
*/
long RTCError_httpRequestStatusCode(const RTCError *self);

#ifdef __cplusplus
}
#endif
