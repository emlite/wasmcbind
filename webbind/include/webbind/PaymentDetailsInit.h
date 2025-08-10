#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentDetailsBase.h"
#include "PaymentItem.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentDetailsInit, PaymentDetailsBase);

jb_String PaymentDetailsInit_id(const PaymentDetailsInit *self);

void PaymentDetailsInit_set_id(PaymentDetailsInit* self, jb_String * value);

PaymentItem PaymentDetailsInit_total(const PaymentDetailsInit *self);

void PaymentDetailsInit_set_total(PaymentDetailsInit* self, PaymentItem * value);

PaymentDetailsInit PaymentDetailsInit_new();

#ifdef __cplusplus
}
#endif
