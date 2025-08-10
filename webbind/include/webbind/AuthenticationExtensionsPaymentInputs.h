#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialParameters.h"
#include "PaymentEntityLogo.h"
#include "PaymentCurrencyAmount.h"
#include "PaymentCredentialInstrument.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPaymentInputs, em_Val);

bool AuthenticationExtensionsPaymentInputs_isPayment(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_isPayment(AuthenticationExtensionsPaymentInputs* self, bool value);

jb_Array AuthenticationExtensionsPaymentInputs_browserBoundPubKeyCredParams(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_browserBoundPubKeyCredParams(AuthenticationExtensionsPaymentInputs* self, jb_Array * value);

jb_String AuthenticationExtensionsPaymentInputs_rpId(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_rpId(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

jb_String AuthenticationExtensionsPaymentInputs_topOrigin(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_topOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

jb_String AuthenticationExtensionsPaymentInputs_payeeName(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_payeeName(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

jb_String AuthenticationExtensionsPaymentInputs_payeeOrigin(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_payeeOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

jb_Array AuthenticationExtensionsPaymentInputs_paymentEntitiesLogos(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_paymentEntitiesLogos(AuthenticationExtensionsPaymentInputs* self, jb_Array * value);

PaymentCurrencyAmount AuthenticationExtensionsPaymentInputs_total(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_total(AuthenticationExtensionsPaymentInputs* self, PaymentCurrencyAmount * value);

PaymentCredentialInstrument AuthenticationExtensionsPaymentInputs_instrument(const AuthenticationExtensionsPaymentInputs *self);

void AuthenticationExtensionsPaymentInputs_set_instrument(AuthenticationExtensionsPaymentInputs* self, PaymentCredentialInstrument * value);

AuthenticationExtensionsPaymentInputs AuthenticationExtensionsPaymentInputs_new();

#ifdef __cplusplus
}
#endif
