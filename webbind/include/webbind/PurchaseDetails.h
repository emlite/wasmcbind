#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PurchaseDetails */
DECLARE_EMLITE_TYPE(PurchaseDetails, em_Val);

/** @brief Getter of the itemId property */
jb_String PurchaseDetails_itemId(const PurchaseDetails *self);

/** @brief Setter of the itemId property */
void PurchaseDetails_set_itemId(PurchaseDetails* self, jb_String * value);

/** @brief Getter of the purchaseToken property */
jb_String PurchaseDetails_purchaseToken(const PurchaseDetails *self);

/** @brief Setter of the purchaseToken property */
void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, jb_String * value);

/** @brief Constructor of the PurchaseDetails dictionary type */
PurchaseDetails PurchaseDetails_new();

#ifdef __cplusplus
}
#endif
