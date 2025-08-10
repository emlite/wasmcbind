#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CollectedClientData.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CollectedClientPaymentData, CollectedClientData);

jb_Any CollectedClientPaymentData_payment(const CollectedClientPaymentData *self);

void CollectedClientPaymentData_set_payment(CollectedClientPaymentData* self, jb_Any * value);

CollectedClientPaymentData CollectedClientPaymentData_new();

#ifdef __cplusplus
}
#endif
