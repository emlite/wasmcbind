#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);

jb_String RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, jb_String * value);

jb_String RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, jb_String * value);

RTCDtlsFingerprint RTCDtlsFingerprint_new();

#ifdef __cplusplus
}
#endif
