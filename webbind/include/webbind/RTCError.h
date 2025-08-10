#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCErrorInit RTCErrorInit;

DECLARE_EMLITE_TYPE(RTCError, DOMException);

RTCError RTCError_new0(RTCErrorInit * init);

RTCError RTCError_new1(RTCErrorInit * init, jb_String * message);

RTCErrorDetailType RTCError_errorDetail(const RTCError *self);

long RTCError_sdpLineNumber(const RTCError *self);

long RTCError_sctpCauseCode(const RTCError *self);

unsigned long RTCError_receivedAlert(const RTCError *self);

unsigned long RTCError_sentAlert(const RTCError *self);

long RTCError_httpRequestStatusCode(const RTCError *self);

#ifdef __cplusplus
}
#endif
