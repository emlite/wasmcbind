#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentEntityLogo, em_Val);

jb_String PaymentEntityLogo_url(const PaymentEntityLogo *self);

void PaymentEntityLogo_set_url(PaymentEntityLogo* self, jb_String * value);

jb_String PaymentEntityLogo_label(const PaymentEntityLogo *self);

void PaymentEntityLogo_set_label(PaymentEntityLogo* self, jb_String * value);

PaymentEntityLogo PaymentEntityLogo_new();

#ifdef __cplusplus
}
#endif
