#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentEntityLogo */
DECLARE_EMLITE_TYPE(PaymentEntityLogo, em_Val);

/** @brief Getter of the url property */
jb_String PaymentEntityLogo_url(const PaymentEntityLogo *self);

/** @brief Setter of the url property */
void PaymentEntityLogo_set_url(PaymentEntityLogo* self, jb_String * value);

/** @brief Getter of the label property */
jb_String PaymentEntityLogo_label(const PaymentEntityLogo *self);

/** @brief Setter of the label property */
void PaymentEntityLogo_set_label(PaymentEntityLogo* self, jb_String * value);

/** @brief Constructor of the PaymentEntityLogo dictionary type */
PaymentEntityLogo PaymentEntityLogo_new();

#ifdef __cplusplus
}
#endif
