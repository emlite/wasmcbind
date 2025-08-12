#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CollectedClientData.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CollectedClientPaymentData */
DECLARE_EMLITE_TYPE(CollectedClientPaymentData, CollectedClientData);

/** @brief Getter of the payment property */
jb_Any CollectedClientPaymentData_payment(const CollectedClientPaymentData *self);

/** @brief Setter of the payment property */
void CollectedClientPaymentData_set_payment(CollectedClientPaymentData* self, jb_Any * value);

/** @brief Constructor of the CollectedClientPaymentData dictionary type */
CollectedClientPaymentData CollectedClientPaymentData_new();

#ifdef __cplusplus
}
#endif
