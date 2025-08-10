#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentMethodData, em_Val);

jb_String PaymentMethodData_supportedMethods(const PaymentMethodData *self);

void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, jb_String * value);

jb_Object PaymentMethodData_data(const PaymentMethodData *self);

void PaymentMethodData_set_data(PaymentMethodData* self, jb_Object * value);

PaymentMethodData PaymentMethodData_new();

#ifdef __cplusplus
}
#endif
