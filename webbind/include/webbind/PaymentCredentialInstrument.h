#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentCredentialInstrument, em_Val);

jb_String PaymentCredentialInstrument_displayName(const PaymentCredentialInstrument *self);

void PaymentCredentialInstrument_set_displayName(PaymentCredentialInstrument* self, jb_String * value);

jb_String PaymentCredentialInstrument_icon(const PaymentCredentialInstrument *self);

void PaymentCredentialInstrument_set_icon(PaymentCredentialInstrument* self, jb_String * value);

bool PaymentCredentialInstrument_iconMustBeShown(const PaymentCredentialInstrument *self);

void PaymentCredentialInstrument_set_iconMustBeShown(PaymentCredentialInstrument* self, bool value);

jb_String PaymentCredentialInstrument_details(const PaymentCredentialInstrument *self);

void PaymentCredentialInstrument_set_details(PaymentCredentialInstrument* self, jb_String * value);

PaymentCredentialInstrument PaymentCredentialInstrument_new();

#ifdef __cplusplus
}
#endif
