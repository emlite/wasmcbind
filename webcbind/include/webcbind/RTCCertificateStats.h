#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCCertificateStats */
DECLARE_EMLITE_TYPE(RTCCertificateStats, RTCStats);

/** @brief Getter of the fingerprint property */
jb_String RTCCertificateStats_fingerprint(const RTCCertificateStats *self);

/** @brief Setter of the fingerprint property */
void RTCCertificateStats_set_fingerprint(RTCCertificateStats* self, jb_String * value);

/** @brief Getter of the fingerprintAlgorithm property */
jb_String RTCCertificateStats_fingerprintAlgorithm(const RTCCertificateStats *self);

/** @brief Setter of the fingerprintAlgorithm property */
void RTCCertificateStats_set_fingerprintAlgorithm(RTCCertificateStats* self, jb_String * value);

/** @brief Getter of the base64Certificate property */
jb_String RTCCertificateStats_base64Certificate(const RTCCertificateStats *self);

/** @brief Setter of the base64Certificate property */
void RTCCertificateStats_set_base64Certificate(RTCCertificateStats* self, jb_String * value);

/** @brief Getter of the issuerCertificateId property */
jb_String RTCCertificateStats_issuerCertificateId(const RTCCertificateStats *self);

/** @brief Setter of the issuerCertificateId property */
void RTCCertificateStats_set_issuerCertificateId(RTCCertificateStats* self, jb_String * value);

/** @brief Constructor of the RTCCertificateStats dictionary type */
RTCCertificateStats RTCCertificateStats_new();

#ifdef __cplusplus
}
#endif
