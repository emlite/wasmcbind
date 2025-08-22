#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PublicKeyCredentialParameters.h"
#include "PaymentEntityLogo.h"
#include "PaymentCurrencyAmount.h"
#include "PaymentCredentialInstrument.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPaymentInputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPaymentInputs, em_Val);

/** @brief Getter of the isPayment property */
bool AuthenticationExtensionsPaymentInputs_isPayment(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the isPayment property */
void AuthenticationExtensionsPaymentInputs_set_isPayment(AuthenticationExtensionsPaymentInputs* self, bool value);

/** @brief Getter of the browserBoundPubKeyCredParams property */
jb_Array AuthenticationExtensionsPaymentInputs_browserBoundPubKeyCredParams(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the browserBoundPubKeyCredParams property */
void AuthenticationExtensionsPaymentInputs_set_browserBoundPubKeyCredParams(AuthenticationExtensionsPaymentInputs* self, jb_Array * value);

/** @brief Getter of the rpId property */
jb_String AuthenticationExtensionsPaymentInputs_rpId(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the rpId property */
void AuthenticationExtensionsPaymentInputs_set_rpId(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

/** @brief Getter of the topOrigin property */
jb_String AuthenticationExtensionsPaymentInputs_topOrigin(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the topOrigin property */
void AuthenticationExtensionsPaymentInputs_set_topOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

/** @brief Getter of the payeeName property */
jb_String AuthenticationExtensionsPaymentInputs_payeeName(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the payeeName property */
void AuthenticationExtensionsPaymentInputs_set_payeeName(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

/** @brief Getter of the payeeOrigin property */
jb_String AuthenticationExtensionsPaymentInputs_payeeOrigin(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the payeeOrigin property */
void AuthenticationExtensionsPaymentInputs_set_payeeOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value);

/** @brief Getter of the paymentEntitiesLogos property */
jb_Array AuthenticationExtensionsPaymentInputs_paymentEntitiesLogos(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the paymentEntitiesLogos property */
void AuthenticationExtensionsPaymentInputs_set_paymentEntitiesLogos(AuthenticationExtensionsPaymentInputs* self, jb_Array * value);

/** @brief Getter of the total property */
PaymentCurrencyAmount AuthenticationExtensionsPaymentInputs_total(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the total property */
void AuthenticationExtensionsPaymentInputs_set_total(AuthenticationExtensionsPaymentInputs* self, PaymentCurrencyAmount * value);

/** @brief Getter of the instrument property */
PaymentCredentialInstrument AuthenticationExtensionsPaymentInputs_instrument(const AuthenticationExtensionsPaymentInputs *self);

/** @brief Setter of the instrument property */
void AuthenticationExtensionsPaymentInputs_set_instrument(AuthenticationExtensionsPaymentInputs* self, PaymentCredentialInstrument * value);

/** @brief Constructor of the AuthenticationExtensionsPaymentInputs dictionary type */
AuthenticationExtensionsPaymentInputs AuthenticationExtensionsPaymentInputs_new();

#ifdef __cplusplus
}
#endif
