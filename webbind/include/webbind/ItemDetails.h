#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ItemDetails, em_Val);

jb_String ItemDetails_itemId(const ItemDetails *self);

void ItemDetails_set_itemId(ItemDetails* self, jb_String * value);

jb_String ItemDetails_title(const ItemDetails *self);

void ItemDetails_set_title(ItemDetails* self, jb_String * value);

PaymentCurrencyAmount ItemDetails_price(const ItemDetails *self);

void ItemDetails_set_price(ItemDetails* self, PaymentCurrencyAmount * value);

ItemType ItemDetails_type(const ItemDetails *self);

void ItemDetails_set_type(ItemDetails* self, ItemType * value);

jb_String ItemDetails_description(const ItemDetails *self);

void ItemDetails_set_description(ItemDetails* self, jb_String * value);

jb_Array ItemDetails_iconURLs(const ItemDetails *self);

void ItemDetails_set_iconURLs(ItemDetails* self, jb_Array * value);

jb_String ItemDetails_subscriptionPeriod(const ItemDetails *self);

void ItemDetails_set_subscriptionPeriod(ItemDetails* self, jb_String * value);

jb_String ItemDetails_freeTrialPeriod(const ItemDetails *self);

void ItemDetails_set_freeTrialPeriod(ItemDetails* self, jb_String * value);

PaymentCurrencyAmount ItemDetails_introductoryPrice(const ItemDetails *self);

void ItemDetails_set_introductoryPrice(ItemDetails* self, PaymentCurrencyAmount * value);

jb_String ItemDetails_introductoryPricePeriod(const ItemDetails *self);

void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, jb_String * value);

long long ItemDetails_introductoryPriceCycles(const ItemDetails *self);

void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value);

ItemDetails ItemDetails_new();

#ifdef __cplusplus
}
#endif
