#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCCertificateStats, RTCStats);

jb_String RTCCertificateStats_fingerprint(const RTCCertificateStats *self);

void RTCCertificateStats_set_fingerprint(RTCCertificateStats* self, jb_String * value);

jb_String RTCCertificateStats_fingerprintAlgorithm(const RTCCertificateStats *self);

void RTCCertificateStats_set_fingerprintAlgorithm(RTCCertificateStats* self, jb_String * value);

jb_String RTCCertificateStats_base64Certificate(const RTCCertificateStats *self);

void RTCCertificateStats_set_base64Certificate(RTCCertificateStats* self, jb_String * value);

jb_String RTCCertificateStats_issuerCertificateId(const RTCCertificateStats *self);

void RTCCertificateStats_set_issuerCertificateId(RTCCertificateStats* self, jb_String * value);

RTCCertificateStats RTCCertificateStats_new();

#ifdef __cplusplus
}
#endif
