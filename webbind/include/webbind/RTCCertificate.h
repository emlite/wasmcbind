#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDtlsFingerprint RTCDtlsFingerprint;


/**
 * @brief Interface RTCCertificate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate)
 */
DECLARE_EMLITE_TYPE(RTCCertificate, em_Val);

/**
 * @brief Gets the `expires` property. 
*/
jb_Any RTCCertificate_expires(const RTCCertificate *self);

/**
 * @brief Calls the `getFingerprints` method. 
*/
jb_Array RTCCertificate_getFingerprints(RTCCertificate* self );

#ifdef __cplusplus
}
#endif
