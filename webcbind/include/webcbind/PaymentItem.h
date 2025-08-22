#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentItem */
DECLARE_EMLITE_TYPE(PaymentItem, em_Val);

/** @brief Getter of the label property */
jb_String PaymentItem_label(const PaymentItem *self);

/** @brief Setter of the label property */
void PaymentItem_set_label(PaymentItem* self, jb_String * value);

/** @brief Getter of the amount property */
PaymentCurrencyAmount PaymentItem_amount(const PaymentItem *self);

/** @brief Setter of the amount property */
void PaymentItem_set_amount(PaymentItem* self, PaymentCurrencyAmount * value);

/** @brief Getter of the pending property */
bool PaymentItem_pending(const PaymentItem *self);

/** @brief Setter of the pending property */
void PaymentItem_set_pending(PaymentItem* self, bool value);

/** @brief Constructor of the PaymentItem dictionary type */
PaymentItem PaymentItem_new();

#ifdef __cplusplus
}
#endif
