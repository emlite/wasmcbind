#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCIdentityProviderDetails.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIdentityAssertionResult */
DECLARE_EMLITE_TYPE(RTCIdentityAssertionResult, em_Val);

/** @brief Getter of the idp property */
RTCIdentityProviderDetails RTCIdentityAssertionResult_idp(const RTCIdentityAssertionResult *self);

/** @brief Setter of the idp property */
void RTCIdentityAssertionResult_set_idp(RTCIdentityAssertionResult* self, RTCIdentityProviderDetails * value);

/** @brief Getter of the assertion property */
jb_String RTCIdentityAssertionResult_assertion(const RTCIdentityAssertionResult *self);

/** @brief Setter of the assertion property */
void RTCIdentityAssertionResult_set_assertion(RTCIdentityAssertionResult* self, jb_String * value);

/** @brief Constructor of the RTCIdentityAssertionResult dictionary type */
RTCIdentityAssertionResult RTCIdentityAssertionResult_new();

#ifdef __cplusplus
}
#endif
