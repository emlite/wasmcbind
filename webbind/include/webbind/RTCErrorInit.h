#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCErrorInit */
DECLARE_EMLITE_TYPE(RTCErrorInit, em_Val);

/** @brief Getter of the errorDetail property */
RTCErrorDetailType RTCErrorInit_errorDetail(const RTCErrorInit *self);

/** @brief Setter of the errorDetail property */
void RTCErrorInit_set_errorDetail(RTCErrorInit* self, RTCErrorDetailType * value);

/** @brief Getter of the sdpLineNumber property */
long RTCErrorInit_sdpLineNumber(const RTCErrorInit *self);

/** @brief Setter of the sdpLineNumber property */
void RTCErrorInit_set_sdpLineNumber(RTCErrorInit* self, long value);

/** @brief Getter of the sctpCauseCode property */
long RTCErrorInit_sctpCauseCode(const RTCErrorInit *self);

/** @brief Setter of the sctpCauseCode property */
void RTCErrorInit_set_sctpCauseCode(RTCErrorInit* self, long value);

/** @brief Getter of the receivedAlert property */
unsigned long RTCErrorInit_receivedAlert(const RTCErrorInit *self);

/** @brief Setter of the receivedAlert property */
void RTCErrorInit_set_receivedAlert(RTCErrorInit* self, unsigned long value);

/** @brief Getter of the sentAlert property */
unsigned long RTCErrorInit_sentAlert(const RTCErrorInit *self);

/** @brief Setter of the sentAlert property */
void RTCErrorInit_set_sentAlert(RTCErrorInit* self, unsigned long value);

/** @brief Constructor of the RTCErrorInit dictionary type */
RTCErrorInit RTCErrorInit_new();

#ifdef __cplusplus
}
#endif
