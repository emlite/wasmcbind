#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ItemDetails */
DECLARE_EMLITE_TYPE(ItemDetails, em_Val);

/** @brief Getter of the itemId property */
jb_String ItemDetails_itemId(const ItemDetails *self);

/** @brief Setter of the itemId property */
void ItemDetails_set_itemId(ItemDetails* self, jb_String * value);

/** @brief Getter of the title property */
jb_String ItemDetails_title(const ItemDetails *self);

/** @brief Setter of the title property */
void ItemDetails_set_title(ItemDetails* self, jb_String * value);

/** @brief Getter of the price property */
PaymentCurrencyAmount ItemDetails_price(const ItemDetails *self);

/** @brief Setter of the price property */
void ItemDetails_set_price(ItemDetails* self, PaymentCurrencyAmount * value);

/** @brief Getter of the type property */
ItemType ItemDetails_type(const ItemDetails *self);

/** @brief Setter of the type property */
void ItemDetails_set_type(ItemDetails* self, ItemType * value);

/** @brief Getter of the description property */
jb_String ItemDetails_description(const ItemDetails *self);

/** @brief Setter of the description property */
void ItemDetails_set_description(ItemDetails* self, jb_String * value);

/** @brief Getter of the iconURLs property */
jb_Array ItemDetails_iconURLs(const ItemDetails *self);

/** @brief Setter of the iconURLs property */
void ItemDetails_set_iconURLs(ItemDetails* self, jb_Array * value);

/** @brief Getter of the subscriptionPeriod property */
jb_String ItemDetails_subscriptionPeriod(const ItemDetails *self);

/** @brief Setter of the subscriptionPeriod property */
void ItemDetails_set_subscriptionPeriod(ItemDetails* self, jb_String * value);

/** @brief Getter of the freeTrialPeriod property */
jb_String ItemDetails_freeTrialPeriod(const ItemDetails *self);

/** @brief Setter of the freeTrialPeriod property */
void ItemDetails_set_freeTrialPeriod(ItemDetails* self, jb_String * value);

/** @brief Getter of the introductoryPrice property */
PaymentCurrencyAmount ItemDetails_introductoryPrice(const ItemDetails *self);

/** @brief Setter of the introductoryPrice property */
void ItemDetails_set_introductoryPrice(ItemDetails* self, PaymentCurrencyAmount * value);

/** @brief Getter of the introductoryPricePeriod property */
jb_String ItemDetails_introductoryPricePeriod(const ItemDetails *self);

/** @brief Setter of the introductoryPricePeriod property */
void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, jb_String * value);

/** @brief Getter of the introductoryPriceCycles property */
long long ItemDetails_introductoryPriceCycles(const ItemDetails *self);

/** @brief Setter of the introductoryPriceCycles property */
void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value);

/** @brief Constructor of the ItemDetails dictionary type */
ItemDetails ItemDetails_new();

#ifdef __cplusplus
}
#endif
