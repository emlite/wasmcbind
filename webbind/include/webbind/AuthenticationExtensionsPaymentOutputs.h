#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BrowserBoundSignature.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPaymentOutputs, em_Val);

BrowserBoundSignature AuthenticationExtensionsPaymentOutputs_browserBoundSignature(const AuthenticationExtensionsPaymentOutputs *self);

void AuthenticationExtensionsPaymentOutputs_set_browserBoundSignature(AuthenticationExtensionsPaymentOutputs* self, BrowserBoundSignature * value);

AuthenticationExtensionsPaymentOutputs AuthenticationExtensionsPaymentOutputs_new();

#ifdef __cplusplus
}
#endif
