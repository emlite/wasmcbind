#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CollectedClientAdditionalPaymentRegistrationData */
DECLARE_EMLITE_TYPE(CollectedClientAdditionalPaymentRegistrationData, em_Val);

/** @brief Getter of the browserBoundPublicKey property */
jb_String CollectedClientAdditionalPaymentRegistrationData_browserBoundPublicKey(const CollectedClientAdditionalPaymentRegistrationData *self);

/** @brief Setter of the browserBoundPublicKey property */
void CollectedClientAdditionalPaymentRegistrationData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentRegistrationData* self, jb_String * value);

/** @brief Constructor of the CollectedClientAdditionalPaymentRegistrationData dictionary type */
CollectedClientAdditionalPaymentRegistrationData CollectedClientAdditionalPaymentRegistrationData_new();

#ifdef __cplusplus
}
#endif
