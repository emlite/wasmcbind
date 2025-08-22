#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentCredentialInstrument.h"
#include "PaymentEntityLogo.h"
#include "AuthenticationExtensionsClientInputs.h"
#include "PublicKeyCredentialParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SecurePaymentConfirmationRequest */
DECLARE_EMLITE_TYPE(SecurePaymentConfirmationRequest, em_Val);

/** @brief Getter of the challenge property */
jb_Any SecurePaymentConfirmationRequest_challenge(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the challenge property */
void SecurePaymentConfirmationRequest_set_challenge(SecurePaymentConfirmationRequest* self, jb_Any * value);

/** @brief Getter of the rpId property */
jb_String SecurePaymentConfirmationRequest_rpId(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the rpId property */
void SecurePaymentConfirmationRequest_set_rpId(SecurePaymentConfirmationRequest* self, jb_String * value);

/** @brief Getter of the credentialIds property */
jb_Array SecurePaymentConfirmationRequest_credentialIds(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the credentialIds property */
void SecurePaymentConfirmationRequest_set_credentialIds(SecurePaymentConfirmationRequest* self, jb_Array * value);

/** @brief Getter of the instrument property */
PaymentCredentialInstrument SecurePaymentConfirmationRequest_instrument(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the instrument property */
void SecurePaymentConfirmationRequest_set_instrument(SecurePaymentConfirmationRequest* self, PaymentCredentialInstrument * value);

/** @brief Getter of the timeout property */
unsigned long SecurePaymentConfirmationRequest_timeout(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the timeout property */
void SecurePaymentConfirmationRequest_set_timeout(SecurePaymentConfirmationRequest* self, unsigned long value);

/** @brief Getter of the payeeName property */
jb_String SecurePaymentConfirmationRequest_payeeName(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the payeeName property */
void SecurePaymentConfirmationRequest_set_payeeName(SecurePaymentConfirmationRequest* self, jb_String * value);

/** @brief Getter of the payeeOrigin property */
jb_String SecurePaymentConfirmationRequest_payeeOrigin(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the payeeOrigin property */
void SecurePaymentConfirmationRequest_set_payeeOrigin(SecurePaymentConfirmationRequest* self, jb_String * value);

/** @brief Getter of the paymentEntitiesLogos property */
jb_Array SecurePaymentConfirmationRequest_paymentEntitiesLogos(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the paymentEntitiesLogos property */
void SecurePaymentConfirmationRequest_set_paymentEntitiesLogos(SecurePaymentConfirmationRequest* self, jb_Array * value);

/** @brief Getter of the extensions property */
AuthenticationExtensionsClientInputs SecurePaymentConfirmationRequest_extensions(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the extensions property */
void SecurePaymentConfirmationRequest_set_extensions(SecurePaymentConfirmationRequest* self, AuthenticationExtensionsClientInputs * value);

/** @brief Getter of the browserBoundPubKeyCredParams property */
jb_Array SecurePaymentConfirmationRequest_browserBoundPubKeyCredParams(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the browserBoundPubKeyCredParams property */
void SecurePaymentConfirmationRequest_set_browserBoundPubKeyCredParams(SecurePaymentConfirmationRequest* self, jb_Array * value);

/** @brief Getter of the locale property */
jb_Array SecurePaymentConfirmationRequest_locale(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the locale property */
void SecurePaymentConfirmationRequest_set_locale(SecurePaymentConfirmationRequest* self, jb_Array * value);

/** @brief Getter of the showOptOut property */
bool SecurePaymentConfirmationRequest_showOptOut(const SecurePaymentConfirmationRequest *self);

/** @brief Setter of the showOptOut property */
void SecurePaymentConfirmationRequest_set_showOptOut(SecurePaymentConfirmationRequest* self, bool value);

/** @brief Constructor of the SecurePaymentConfirmationRequest dictionary type */
SecurePaymentConfirmationRequest SecurePaymentConfirmationRequest_new();

#ifdef __cplusplus
}
#endif
