#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentCurrencyAmount */
DECLARE_EMLITE_TYPE(PaymentCurrencyAmount, em_Val);

/** @brief Getter of the currency property */
jb_String PaymentCurrencyAmount_currency(const PaymentCurrencyAmount *self);

/** @brief Setter of the currency property */
void PaymentCurrencyAmount_set_currency(PaymentCurrencyAmount* self, jb_String * value);

/** @brief Getter of the value property */
jb_String PaymentCurrencyAmount_value(const PaymentCurrencyAmount *self);

/** @brief Setter of the value property */
void PaymentCurrencyAmount_set_value(PaymentCurrencyAmount* self, jb_String * value);

/** @brief Constructor of the PaymentCurrencyAmount dictionary type */
PaymentCurrencyAmount PaymentCurrencyAmount_new();

#ifdef __cplusplus
}
#endif
