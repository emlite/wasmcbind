#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentRequestUpdateEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentMethodChangeEventInit */
DECLARE_EMLITE_TYPE(PaymentMethodChangeEventInit, PaymentRequestUpdateEventInit);

/** @brief Getter of the methodName property */
jb_String PaymentMethodChangeEventInit_methodName(const PaymentMethodChangeEventInit *self);

/** @brief Setter of the methodName property */
void PaymentMethodChangeEventInit_set_methodName(PaymentMethodChangeEventInit* self, jb_String * value);

/** @brief Getter of the methodDetails property */
jb_Object PaymentMethodChangeEventInit_methodDetails(const PaymentMethodChangeEventInit *self);

/** @brief Setter of the methodDetails property */
void PaymentMethodChangeEventInit_set_methodDetails(PaymentMethodChangeEventInit* self, jb_Object * value);

/** @brief Constructor of the PaymentMethodChangeEventInit dictionary type */
PaymentMethodChangeEventInit PaymentMethodChangeEventInit_new();

#ifdef __cplusplus
}
#endif
