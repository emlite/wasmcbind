#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCCertificateExpiration, em_Val);

long long RTCCertificateExpiration_expires(const RTCCertificateExpiration *self);

void RTCCertificateExpiration_set_expires(RTCCertificateExpiration* self, long long value);

RTCCertificateExpiration RTCCertificateExpiration_new();

#ifdef __cplusplus
}
#endif
