#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentCompleteDetails, em_Val);

jb_Object PaymentCompleteDetails_data(const PaymentCompleteDetails *self);

void PaymentCompleteDetails_set_data(PaymentCompleteDetails* self, jb_Object * value);

PaymentCompleteDetails PaymentCompleteDetails_new();

#ifdef __cplusplus
}
#endif
