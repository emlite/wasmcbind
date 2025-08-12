#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentItem.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentDetailsModifier */
DECLARE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);

/** @brief Getter of the supportedMethods property */
jb_String PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self);

/** @brief Setter of the supportedMethods property */
void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, jb_String * value);

/** @brief Getter of the total property */
PaymentItem PaymentDetailsModifier_total(const PaymentDetailsModifier *self);

/** @brief Setter of the total property */
void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, PaymentItem * value);

/** @brief Getter of the additionalDisplayItems property */
jb_Array PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self);

/** @brief Setter of the additionalDisplayItems property */
void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, jb_Array * value);

/** @brief Getter of the data property */
jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self);

/** @brief Setter of the data property */
void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, jb_Object * value);

/** @brief Constructor of the PaymentDetailsModifier dictionary type */
PaymentDetailsModifier PaymentDetailsModifier_new();

#ifdef __cplusplus
}
#endif
