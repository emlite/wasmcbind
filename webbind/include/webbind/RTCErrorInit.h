#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCErrorInit, em_Val);

RTCErrorDetailType RTCErrorInit_errorDetail(const RTCErrorInit *self);

void RTCErrorInit_set_errorDetail(RTCErrorInit* self, RTCErrorDetailType * value);

long RTCErrorInit_sdpLineNumber(const RTCErrorInit *self);

void RTCErrorInit_set_sdpLineNumber(RTCErrorInit* self, long value);

long RTCErrorInit_sctpCauseCode(const RTCErrorInit *self);

void RTCErrorInit_set_sctpCauseCode(RTCErrorInit* self, long value);

unsigned long RTCErrorInit_receivedAlert(const RTCErrorInit *self);

void RTCErrorInit_set_receivedAlert(RTCErrorInit* self, unsigned long value);

unsigned long RTCErrorInit_sentAlert(const RTCErrorInit *self);

void RTCErrorInit_set_sentAlert(RTCErrorInit* self, unsigned long value);

RTCErrorInit RTCErrorInit_new();

#ifdef __cplusplus
}
#endif
