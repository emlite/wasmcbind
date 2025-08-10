#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CollectedClientAdditionalPaymentRegistrationData, em_Val);

jb_String CollectedClientAdditionalPaymentRegistrationData_browserBoundPublicKey(const CollectedClientAdditionalPaymentRegistrationData *self);

void CollectedClientAdditionalPaymentRegistrationData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentRegistrationData* self, jb_String * value);

CollectedClientAdditionalPaymentRegistrationData CollectedClientAdditionalPaymentRegistrationData_new();

#ifdef __cplusplus
}
#endif
