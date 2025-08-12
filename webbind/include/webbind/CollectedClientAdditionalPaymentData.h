#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentEntityLogo.h"
#include "PaymentCurrencyAmount.h"
#include "PaymentCredentialInstrument.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CollectedClientAdditionalPaymentData */
DECLARE_EMLITE_TYPE(CollectedClientAdditionalPaymentData, em_Val);

/** @brief Getter of the rpId property */
jb_String CollectedClientAdditionalPaymentData_rpId(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the rpId property */
void CollectedClientAdditionalPaymentData_set_rpId(CollectedClientAdditionalPaymentData* self, jb_String * value);

/** @brief Getter of the topOrigin property */
jb_String CollectedClientAdditionalPaymentData_topOrigin(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the topOrigin property */
void CollectedClientAdditionalPaymentData_set_topOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value);

/** @brief Getter of the payeeName property */
jb_String CollectedClientAdditionalPaymentData_payeeName(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the payeeName property */
void CollectedClientAdditionalPaymentData_set_payeeName(CollectedClientAdditionalPaymentData* self, jb_String * value);

/** @brief Getter of the payeeOrigin property */
jb_String CollectedClientAdditionalPaymentData_payeeOrigin(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the payeeOrigin property */
void CollectedClientAdditionalPaymentData_set_payeeOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value);

/** @brief Getter of the paymentEntitiesLogos property */
jb_Array CollectedClientAdditionalPaymentData_paymentEntitiesLogos(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the paymentEntitiesLogos property */
void CollectedClientAdditionalPaymentData_set_paymentEntitiesLogos(CollectedClientAdditionalPaymentData* self, jb_Array * value);

/** @brief Getter of the total property */
PaymentCurrencyAmount CollectedClientAdditionalPaymentData_total(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the total property */
void CollectedClientAdditionalPaymentData_set_total(CollectedClientAdditionalPaymentData* self, PaymentCurrencyAmount * value);

/** @brief Getter of the instrument property */
PaymentCredentialInstrument CollectedClientAdditionalPaymentData_instrument(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the instrument property */
void CollectedClientAdditionalPaymentData_set_instrument(CollectedClientAdditionalPaymentData* self, PaymentCredentialInstrument * value);

/** @brief Getter of the browserBoundPublicKey property */
jb_String CollectedClientAdditionalPaymentData_browserBoundPublicKey(const CollectedClientAdditionalPaymentData *self);

/** @brief Setter of the browserBoundPublicKey property */
void CollectedClientAdditionalPaymentData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentData* self, jb_String * value);

/** @brief Constructor of the CollectedClientAdditionalPaymentData dictionary type */
CollectedClientAdditionalPaymentData CollectedClientAdditionalPaymentData_new();

#ifdef __cplusplus
}
#endif
