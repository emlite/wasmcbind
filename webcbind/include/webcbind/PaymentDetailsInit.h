#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentDetailsBase.h"
#include "PaymentItem.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentDetailsInit */
DECLARE_EMLITE_TYPE(PaymentDetailsInit, PaymentDetailsBase);

/** @brief Getter of the id property */
jb_String PaymentDetailsInit_id(const PaymentDetailsInit *self);

/** @brief Setter of the id property */
void PaymentDetailsInit_set_id(PaymentDetailsInit* self, jb_String * value);

/** @brief Getter of the total property */
PaymentItem PaymentDetailsInit_total(const PaymentDetailsInit *self);

/** @brief Setter of the total property */
void PaymentDetailsInit_set_total(PaymentDetailsInit* self, PaymentItem * value);

/** @brief Constructor of the PaymentDetailsInit dictionary type */
PaymentDetailsInit PaymentDetailsInit_new();

#ifdef __cplusplus
}
#endif
