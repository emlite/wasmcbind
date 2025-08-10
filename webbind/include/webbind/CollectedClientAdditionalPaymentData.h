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

DECLARE_EMLITE_TYPE(CollectedClientAdditionalPaymentData, em_Val);

jb_String CollectedClientAdditionalPaymentData_rpId(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_rpId(CollectedClientAdditionalPaymentData* self, jb_String * value);

jb_String CollectedClientAdditionalPaymentData_topOrigin(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_topOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value);

jb_String CollectedClientAdditionalPaymentData_payeeName(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_payeeName(CollectedClientAdditionalPaymentData* self, jb_String * value);

jb_String CollectedClientAdditionalPaymentData_payeeOrigin(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_payeeOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value);

jb_Array CollectedClientAdditionalPaymentData_paymentEntitiesLogos(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_paymentEntitiesLogos(CollectedClientAdditionalPaymentData* self, jb_Array * value);

PaymentCurrencyAmount CollectedClientAdditionalPaymentData_total(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_total(CollectedClientAdditionalPaymentData* self, PaymentCurrencyAmount * value);

PaymentCredentialInstrument CollectedClientAdditionalPaymentData_instrument(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_instrument(CollectedClientAdditionalPaymentData* self, PaymentCredentialInstrument * value);

jb_String CollectedClientAdditionalPaymentData_browserBoundPublicKey(const CollectedClientAdditionalPaymentData *self);

void CollectedClientAdditionalPaymentData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentData* self, jb_String * value);

CollectedClientAdditionalPaymentData CollectedClientAdditionalPaymentData_new();

#ifdef __cplusplus
}
#endif
