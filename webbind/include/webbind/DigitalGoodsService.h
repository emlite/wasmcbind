#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ItemDetails ItemDetails;
typedef struct PurchaseDetails PurchaseDetails;


DECLARE_EMLITE_TYPE(ItemDetails, em_Val);

jb_DOMString ItemDetails_itemId( const ItemDetails *self);

void ItemDetails_set_itemId(ItemDetails* self, jb_DOMString * value);

jb_DOMString ItemDetails_title( const ItemDetails *self);

void ItemDetails_set_title(ItemDetails* self, jb_DOMString * value);

jb_Any ItemDetails_price( const ItemDetails *self);

void ItemDetails_set_price(ItemDetails* self, jb_Any * value);

ItemType ItemDetails_type( const ItemDetails *self);

void ItemDetails_set_type(ItemDetails* self, ItemType * value);

jb_DOMString ItemDetails_description( const ItemDetails *self);

void ItemDetails_set_description(ItemDetails* self, jb_DOMString * value);

jb_Sequence ItemDetails_iconURLs( const ItemDetails *self);

void ItemDetails_set_iconURLs(ItemDetails* self, jb_Sequence * value);

jb_DOMString ItemDetails_subscriptionPeriod( const ItemDetails *self);

void ItemDetails_set_subscriptionPeriod(ItemDetails* self, jb_DOMString * value);

jb_DOMString ItemDetails_freeTrialPeriod( const ItemDetails *self);

void ItemDetails_set_freeTrialPeriod(ItemDetails* self, jb_DOMString * value);

jb_Any ItemDetails_introductoryPrice( const ItemDetails *self);

void ItemDetails_set_introductoryPrice(ItemDetails* self, jb_Any * value);

jb_DOMString ItemDetails_introductoryPricePeriod( const ItemDetails *self);

void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, jb_DOMString * value);

long long ItemDetails_introductoryPriceCycles( const ItemDetails *self);

void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value);
DECLARE_EMLITE_TYPE(PurchaseDetails, em_Val);

jb_DOMString PurchaseDetails_itemId( const PurchaseDetails *self);

void PurchaseDetails_set_itemId(PurchaseDetails* self, jb_DOMString * value);

jb_DOMString PurchaseDetails_purchaseToken( const PurchaseDetails *self);

void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(DigitalGoodsService, em_Val);

jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , jb_Sequence * itemIds);

jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , jb_DOMString * purchaseToken);
