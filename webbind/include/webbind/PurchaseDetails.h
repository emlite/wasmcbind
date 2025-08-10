#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PurchaseDetails, em_Val);

jb_String PurchaseDetails_itemId(const PurchaseDetails *self);

void PurchaseDetails_set_itemId(PurchaseDetails* self, jb_String * value);

jb_String PurchaseDetails_purchaseToken(const PurchaseDetails *self);

void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, jb_String * value);

PurchaseDetails PurchaseDetails_new();

#ifdef __cplusplus
}
#endif
