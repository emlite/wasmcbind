#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentDetailsBase.h"
#include "PaymentItem.h"
#include "AddressErrors.h"
#include "PayerErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentDetailsUpdate */
DECLARE_EMLITE_TYPE(PaymentDetailsUpdate, PaymentDetailsBase);

/** @brief Getter of the error property */
jb_String PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self);

/** @brief Setter of the error property */
void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, jb_String * value);

/** @brief Getter of the total property */
PaymentItem PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self);

/** @brief Setter of the total property */
void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, PaymentItem * value);

/** @brief Getter of the shippingAddressErrors property */
AddressErrors PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self);

/** @brief Setter of the shippingAddressErrors property */
void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, AddressErrors * value);

/** @brief Getter of the payerErrors property */
PayerErrors PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self);

/** @brief Setter of the payerErrors property */
void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, PayerErrors * value);

/** @brief Getter of the paymentMethodErrors property */
jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self);

/** @brief Setter of the paymentMethodErrors property */
void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, jb_Object * value);

/** @brief Constructor of the PaymentDetailsUpdate dictionary type */
PaymentDetailsUpdate PaymentDetailsUpdate_new();

#ifdef __cplusplus
}
#endif
