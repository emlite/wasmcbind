#include <webbind/DigitalGoodsService.h>


DEFINE_EMLITE_TYPE(ItemDetails, em_Val);


jb_DOMString ItemDetails_itemId(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "itemId"));
}


void ItemDetails_set_itemId(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "itemId", value);
}


jb_DOMString ItemDetails_title(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void ItemDetails_set_title(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}


jb_Any ItemDetails_price(const ItemDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "price"));
}


void ItemDetails_set_price(ItemDetails* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "price", value);
}


ItemType ItemDetails_type(const ItemDetails *self) {
    return em_Val_as(ItemType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void ItemDetails_set_type(ItemDetails* self, const ItemType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_DOMString ItemDetails_description(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "description"));
}


void ItemDetails_set_description(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "description", value);
}


jb_Sequence ItemDetails_iconURLs(const ItemDetails *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "iconURLs"));
}


void ItemDetails_set_iconURLs(ItemDetails* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "iconURLs", value);
}


jb_DOMString ItemDetails_subscriptionPeriod(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "subscriptionPeriod"));
}


void ItemDetails_set_subscriptionPeriod(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "subscriptionPeriod", value);
}


jb_DOMString ItemDetails_freeTrialPeriod(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "freeTrialPeriod"));
}


void ItemDetails_set_freeTrialPeriod(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "freeTrialPeriod", value);
}


jb_Any ItemDetails_introductoryPrice(const ItemDetails *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "introductoryPrice"));
}


void ItemDetails_set_introductoryPrice(ItemDetails* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "introductoryPrice", value);
}


jb_DOMString ItemDetails_introductoryPricePeriod(const ItemDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "introductoryPricePeriod"));
}


void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "introductoryPricePeriod", value);
}


long long ItemDetails_introductoryPriceCycles(const ItemDetails *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "introductoryPriceCycles"));
}


void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "introductoryPriceCycles", value);
}

DEFINE_EMLITE_TYPE(PurchaseDetails, em_Val);


jb_DOMString PurchaseDetails_itemId(const PurchaseDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "itemId"));
}


void PurchaseDetails_set_itemId(PurchaseDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "itemId", value);
}


jb_DOMString PurchaseDetails_purchaseToken(const PurchaseDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "purchaseToken"));
}


void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "purchaseToken", value);
}

DEFINE_EMLITE_TYPE(DigitalGoodsService, em_Val);


jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , const jb_Sequence* itemIds) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getDetails", em_Val_from(itemIds)));
}


jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "listPurchases"));
}


jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "listPurchaseHistory"));
}


jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , const jb_DOMString* purchaseToken) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "consume", em_Val_from(purchaseToken)));
}

