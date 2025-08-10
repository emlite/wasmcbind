#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDtlsFingerprint RTCDtlsFingerprint;

DECLARE_EMLITE_TYPE(RTCCertificate, em_Val);

jb_Any RTCCertificate_expires(const RTCCertificate *self);

jb_Array RTCCertificate_getFingerprints(RTCCertificate* self );

#ifdef __cplusplus
}
#endif
