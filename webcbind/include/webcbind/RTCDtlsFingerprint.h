#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCDtlsFingerprint */
DECLARE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);

/** @brief Getter of the algorithm property */
jb_String RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self);

/** @brief Setter of the algorithm property */
void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, jb_String * value);

/** @brief Getter of the value property */
jb_String RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self);

/** @brief Setter of the value property */
void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, jb_String * value);

/** @brief Constructor of the RTCDtlsFingerprint dictionary type */
RTCDtlsFingerprint RTCDtlsFingerprint_new();

#ifdef __cplusplus
}
#endif
