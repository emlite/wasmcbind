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

DECLARE_EMLITE_TYPE(PaymentDetailsBase, em_Val);

jb_Array PaymentDetailsBase_displayItems(const PaymentDetailsBase *self);

void PaymentDetailsBase_set_displayItems(PaymentDetailsBase* self, jb_Array * value);

jb_Array PaymentDetailsBase_shippingOptions(const PaymentDetailsBase *self);

void PaymentDetailsBase_set_shippingOptions(PaymentDetailsBase* self, jb_Array * value);

jb_Array PaymentDetailsBase_modifiers(const PaymentDetailsBase *self);

void PaymentDetailsBase_set_modifiers(PaymentDetailsBase* self, jb_Array * value);

PaymentDetailsBase PaymentDetailsBase_new();

#ifdef __cplusplus
}
#endif
