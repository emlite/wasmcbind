#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PayerErrors, em_Val);

jb_String PayerErrors_email(const PayerErrors *self);

void PayerErrors_set_email(PayerErrors* self, jb_String * value);

jb_String PayerErrors_name(const PayerErrors *self);

void PayerErrors_set_name(PayerErrors* self, jb_String * value);

jb_String PayerErrors_phone(const PayerErrors *self);

void PayerErrors_set_phone(PayerErrors* self, jb_String * value);

PayerErrors PayerErrors_new();

#ifdef __cplusplus
}
#endif
