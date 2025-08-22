#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIdentityProvider */
DECLARE_EMLITE_TYPE(RTCIdentityProvider, em_Val);

/** @brief Getter of the generateAssertion property */
jb_Function RTCIdentityProvider_generateAssertion(const RTCIdentityProvider *self);

/** @brief Setter of the generateAssertion property */
void RTCIdentityProvider_set_generateAssertion(RTCIdentityProvider* self, jb_Function * value);

/** @brief Getter of the validateAssertion property */
jb_Function RTCIdentityProvider_validateAssertion(const RTCIdentityProvider *self);

/** @brief Setter of the validateAssertion property */
void RTCIdentityProvider_set_validateAssertion(RTCIdentityProvider* self, jb_Function * value);

/** @brief Constructor of the RTCIdentityProvider dictionary type */
RTCIdentityProvider RTCIdentityProvider_new();

#ifdef __cplusplus
}
#endif
