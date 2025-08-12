#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PayerErrors */
DECLARE_EMLITE_TYPE(PayerErrors, em_Val);

/** @brief Getter of the email property */
jb_String PayerErrors_email(const PayerErrors *self);

/** @brief Setter of the email property */
void PayerErrors_set_email(PayerErrors* self, jb_String * value);

/** @brief Getter of the name property */
jb_String PayerErrors_name(const PayerErrors *self);

/** @brief Setter of the name property */
void PayerErrors_set_name(PayerErrors* self, jb_String * value);

/** @brief Getter of the phone property */
jb_String PayerErrors_phone(const PayerErrors *self);

/** @brief Setter of the phone property */
void PayerErrors_set_phone(PayerErrors* self, jb_String * value);

/** @brief Constructor of the PayerErrors dictionary type */
PayerErrors PayerErrors_new();

#ifdef __cplusplus
}
#endif
