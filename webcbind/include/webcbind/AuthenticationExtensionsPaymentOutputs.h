#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BrowserBoundSignature.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPaymentOutputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPaymentOutputs, em_Val);

/** @brief Getter of the browserBoundSignature property */
BrowserBoundSignature AuthenticationExtensionsPaymentOutputs_browserBoundSignature(const AuthenticationExtensionsPaymentOutputs *self);

/** @brief Setter of the browserBoundSignature property */
void AuthenticationExtensionsPaymentOutputs_set_browserBoundSignature(AuthenticationExtensionsPaymentOutputs* self, BrowserBoundSignature * value);

/** @brief Constructor of the AuthenticationExtensionsPaymentOutputs dictionary type */
AuthenticationExtensionsPaymentOutputs AuthenticationExtensionsPaymentOutputs_new();

#ifdef __cplusplus
}
#endif
