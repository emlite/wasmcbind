#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentMethodData */
DECLARE_EMLITE_TYPE(PaymentMethodData, em_Val);

/** @brief Getter of the supportedMethods property */
jb_String PaymentMethodData_supportedMethods(const PaymentMethodData *self);

/** @brief Setter of the supportedMethods property */
void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, jb_String * value);

/** @brief Getter of the data property */
jb_Object PaymentMethodData_data(const PaymentMethodData *self);

/** @brief Setter of the data property */
void PaymentMethodData_set_data(PaymentMethodData* self, jb_Object * value);

/** @brief Constructor of the PaymentMethodData dictionary type */
PaymentMethodData PaymentMethodData_new();

#ifdef __cplusplus
}
#endif
