#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ItemDetails ItemDetails;
typedef struct PurchaseDetails PurchaseDetails;


typedef struct {
  em_Val inner;
} ItemDetails;


DECLARE_EMLITE_TYPE(ItemDetails, em_Val);

jb_DOMString ItemDetails_itemId( const ItemDetails *self);

void ItemDetails_set_itemId(ItemDetails* self, const jb_DOMString* value);

jb_DOMString ItemDetails_title( const ItemDetails *self);

void ItemDetails_set_title(ItemDetails* self, const jb_DOMString* value);

jb_Any ItemDetails_price( const ItemDetails *self);

void ItemDetails_set_price(ItemDetails* self, const jb_Any* value);

ItemType ItemDetails_type( const ItemDetails *self);

void ItemDetails_set_type(ItemDetails* self, const ItemType* value);

jb_DOMString ItemDetails_description( const ItemDetails *self);

void ItemDetails_set_description(ItemDetails* self, const jb_DOMString* value);

jb_Sequence ItemDetails_iconURLs( const ItemDetails *self);

void ItemDetails_set_iconURLs(ItemDetails* self, const jb_Sequence* value);

jb_DOMString ItemDetails_subscriptionPeriod( const ItemDetails *self);

void ItemDetails_set_subscriptionPeriod(ItemDetails* self, const jb_DOMString* value);

jb_DOMString ItemDetails_freeTrialPeriod( const ItemDetails *self);

void ItemDetails_set_freeTrialPeriod(ItemDetails* self, const jb_DOMString* value);

jb_Any ItemDetails_introductoryPrice( const ItemDetails *self);

void ItemDetails_set_introductoryPrice(ItemDetails* self, const jb_Any* value);

jb_DOMString ItemDetails_introductoryPricePeriod( const ItemDetails *self);

void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, const jb_DOMString* value);

long long ItemDetails_introductoryPriceCycles( const ItemDetails *self);

void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value);
typedef struct {
  em_Val inner;
} PurchaseDetails;


DECLARE_EMLITE_TYPE(PurchaseDetails, em_Val);

jb_DOMString PurchaseDetails_itemId( const PurchaseDetails *self);

void PurchaseDetails_set_itemId(PurchaseDetails* self, const jb_DOMString* value);

jb_DOMString PurchaseDetails_purchaseToken( const PurchaseDetails *self);

void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} DigitalGoodsService;


DECLARE_EMLITE_TYPE(DigitalGoodsService, em_Val);

jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , const jb_Sequence* itemIds);

jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , const jb_DOMString* purchaseToken);
