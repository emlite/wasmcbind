#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentItem.h"
#include "PaymentShippingOption.h"
#include "PaymentDetailsModifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentDetailsBase */
DECLARE_EMLITE_TYPE(PaymentDetailsBase, em_Val);

/** @brief Getter of the displayItems property */
jb_Array PaymentDetailsBase_displayItems(const PaymentDetailsBase *self);

/** @brief Setter of the displayItems property */
void PaymentDetailsBase_set_displayItems(PaymentDetailsBase* self, jb_Array * value);

/** @brief Getter of the shippingOptions property */
jb_Array PaymentDetailsBase_shippingOptions(const PaymentDetailsBase *self);

/** @brief Setter of the shippingOptions property */
void PaymentDetailsBase_set_shippingOptions(PaymentDetailsBase* self, jb_Array * value);

/** @brief Getter of the modifiers property */
jb_Array PaymentDetailsBase_modifiers(const PaymentDetailsBase *self);

/** @brief Setter of the modifiers property */
void PaymentDetailsBase_set_modifiers(PaymentDetailsBase* self, jb_Array * value);

/** @brief Constructor of the PaymentDetailsBase dictionary type */
PaymentDetailsBase PaymentDetailsBase_new();

#ifdef __cplusplus
}
#endif
