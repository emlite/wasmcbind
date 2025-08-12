#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentCredentialInstrument */
DECLARE_EMLITE_TYPE(PaymentCredentialInstrument, em_Val);

/** @brief Getter of the displayName property */
jb_String PaymentCredentialInstrument_displayName(const PaymentCredentialInstrument *self);

/** @brief Setter of the displayName property */
void PaymentCredentialInstrument_set_displayName(PaymentCredentialInstrument* self, jb_String * value);

/** @brief Getter of the icon property */
jb_String PaymentCredentialInstrument_icon(const PaymentCredentialInstrument *self);

/** @brief Setter of the icon property */
void PaymentCredentialInstrument_set_icon(PaymentCredentialInstrument* self, jb_String * value);

/** @brief Getter of the iconMustBeShown property */
bool PaymentCredentialInstrument_iconMustBeShown(const PaymentCredentialInstrument *self);

/** @brief Setter of the iconMustBeShown property */
void PaymentCredentialInstrument_set_iconMustBeShown(PaymentCredentialInstrument* self, bool value);

/** @brief Getter of the details property */
jb_String PaymentCredentialInstrument_details(const PaymentCredentialInstrument *self);

/** @brief Setter of the details property */
void PaymentCredentialInstrument_set_details(PaymentCredentialInstrument* self, jb_String * value);

/** @brief Constructor of the PaymentCredentialInstrument dictionary type */
PaymentCredentialInstrument PaymentCredentialInstrument_new();

#ifdef __cplusplus
}
#endif
