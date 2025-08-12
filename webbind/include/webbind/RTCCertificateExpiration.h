#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCCertificateExpiration */
DECLARE_EMLITE_TYPE(RTCCertificateExpiration, em_Val);

/** @brief Getter of the expires property */
long long RTCCertificateExpiration_expires(const RTCCertificateExpiration *self);

/** @brief Setter of the expires property */
void RTCCertificateExpiration_set_expires(RTCCertificateExpiration* self, long long value);

/** @brief Constructor of the RTCCertificateExpiration dictionary type */
RTCCertificateExpiration RTCCertificateExpiration_new();

#ifdef __cplusplus
}
#endif
