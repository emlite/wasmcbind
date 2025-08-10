#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentCredentialInstrument.h"
#include "PaymentEntityLogo.h"
#include "AuthenticationExtensionsClientInputs.h"
#include "PublicKeyCredentialParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SecurePaymentConfirmationRequest, em_Val);

jb_Any SecurePaymentConfirmationRequest_challenge(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_challenge(SecurePaymentConfirmationRequest* self, jb_Any * value);

jb_String SecurePaymentConfirmationRequest_rpId(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_rpId(SecurePaymentConfirmationRequest* self, jb_String * value);

jb_Array SecurePaymentConfirmationRequest_credentialIds(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_credentialIds(SecurePaymentConfirmationRequest* self, jb_Array * value);

PaymentCredentialInstrument SecurePaymentConfirmationRequest_instrument(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_instrument(SecurePaymentConfirmationRequest* self, PaymentCredentialInstrument * value);

unsigned long SecurePaymentConfirmationRequest_timeout(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_timeout(SecurePaymentConfirmationRequest* self, unsigned long value);

jb_String SecurePaymentConfirmationRequest_payeeName(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_payeeName(SecurePaymentConfirmationRequest* self, jb_String * value);

jb_String SecurePaymentConfirmationRequest_payeeOrigin(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_payeeOrigin(SecurePaymentConfirmationRequest* self, jb_String * value);

jb_Array SecurePaymentConfirmationRequest_paymentEntitiesLogos(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_paymentEntitiesLogos(SecurePaymentConfirmationRequest* self, jb_Array * value);

AuthenticationExtensionsClientInputs SecurePaymentConfirmationRequest_extensions(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_extensions(SecurePaymentConfirmationRequest* self, AuthenticationExtensionsClientInputs * value);

jb_Array SecurePaymentConfirmationRequest_browserBoundPubKeyCredParams(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_browserBoundPubKeyCredParams(SecurePaymentConfirmationRequest* self, jb_Array * value);

jb_Array SecurePaymentConfirmationRequest_locale(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_locale(SecurePaymentConfirmationRequest* self, jb_Array * value);

bool SecurePaymentConfirmationRequest_showOptOut(const SecurePaymentConfirmationRequest *self);

void SecurePaymentConfirmationRequest_set_showOptOut(SecurePaymentConfirmationRequest* self, bool value);

SecurePaymentConfirmationRequest SecurePaymentConfirmationRequest_new();

#ifdef __cplusplus
}
#endif
