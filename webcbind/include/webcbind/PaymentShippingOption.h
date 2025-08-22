#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentShippingOption */
DECLARE_EMLITE_TYPE(PaymentShippingOption, em_Val);

/** @brief Getter of the id property */
jb_String PaymentShippingOption_id(const PaymentShippingOption *self);

/** @brief Setter of the id property */
void PaymentShippingOption_set_id(PaymentShippingOption* self, jb_String * value);

/** @brief Getter of the label property */
jb_String PaymentShippingOption_label(const PaymentShippingOption *self);

/** @brief Setter of the label property */
void PaymentShippingOption_set_label(PaymentShippingOption* self, jb_String * value);

/** @brief Getter of the amount property */
PaymentCurrencyAmount PaymentShippingOption_amount(const PaymentShippingOption *self);

/** @brief Setter of the amount property */
void PaymentShippingOption_set_amount(PaymentShippingOption* self, PaymentCurrencyAmount * value);

/** @brief Getter of the selected property */
bool PaymentShippingOption_selected(const PaymentShippingOption *self);

/** @brief Setter of the selected property */
void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value);

/** @brief Constructor of the PaymentShippingOption dictionary type */
PaymentShippingOption PaymentShippingOption_new();

#ifdef __cplusplus
}
#endif
