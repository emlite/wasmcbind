#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentItem.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);

jb_String PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, jb_String * value);

PaymentItem PaymentDetailsModifier_total(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, PaymentItem * value);

jb_Array PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, jb_Array * value);

jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, jb_Object * value);

PaymentDetailsModifier PaymentDetailsModifier_new();

#ifdef __cplusplus
}
#endif
