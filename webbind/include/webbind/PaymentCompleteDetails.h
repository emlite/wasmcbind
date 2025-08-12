#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentCompleteDetails */
DECLARE_EMLITE_TYPE(PaymentCompleteDetails, em_Val);

/** @brief Getter of the data property */
jb_Object PaymentCompleteDetails_data(const PaymentCompleteDetails *self);

/** @brief Setter of the data property */
void PaymentCompleteDetails_set_data(PaymentCompleteDetails* self, jb_Object * value);

/** @brief Constructor of the PaymentCompleteDetails dictionary type */
PaymentCompleteDetails PaymentCompleteDetails_new();

#ifdef __cplusplus
}
#endif
