#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct RTCDtlsFingerprint RTCDtlsFingerprint;


DECLARE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);

jb_DOMString RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, jb_DOMString * value);

jb_DOMString RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(RTCCertificate, em_Val);

jb_Any RTCCertificate_expires(const RTCCertificate *self);

jb_Sequence RTCCertificate_getFingerprints(RTCCertificate* self );
