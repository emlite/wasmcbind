#include <webbind/ItemDetails.h>

DEFINE_EMLITE_TYPE(ItemDetails, em_Val);


jb_String ItemDetails_itemId(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("itemId")));
}


void ItemDetails_set_itemId(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("itemId"), em_Val_from(value));
}


jb_String ItemDetails_title(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ItemDetails_set_title(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


PaymentCurrencyAmount ItemDetails_price(const ItemDetails *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("price")));
}


void ItemDetails_set_price(ItemDetails* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("price"), em_Val_from(value));
}


ItemType ItemDetails_type(const ItemDetails *self) {
    return em_Val_as(ItemType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void ItemDetails_set_type(ItemDetails* self, ItemType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String ItemDetails_description(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void ItemDetails_set_description(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


jb_Array ItemDetails_iconURLs(const ItemDetails *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iconURLs")));
}


void ItemDetails_set_iconURLs(ItemDetails* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iconURLs"), em_Val_from(value));
}


jb_String ItemDetails_subscriptionPeriod(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subscriptionPeriod")));
}


void ItemDetails_set_subscriptionPeriod(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subscriptionPeriod"), em_Val_from(value));
}


jb_String ItemDetails_freeTrialPeriod(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("freeTrialPeriod")));
}


void ItemDetails_set_freeTrialPeriod(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("freeTrialPeriod"), em_Val_from(value));
}


PaymentCurrencyAmount ItemDetails_introductoryPrice(const ItemDetails *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("introductoryPrice")));
}


void ItemDetails_set_introductoryPrice(ItemDetails* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("introductoryPrice"), em_Val_from(value));
}


jb_String ItemDetails_introductoryPricePeriod(const ItemDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("introductoryPricePeriod")));
}


void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("introductoryPricePeriod"), em_Val_from(value));
}


long long ItemDetails_introductoryPriceCycles(const ItemDetails *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("introductoryPriceCycles")));
}


void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("introductoryPriceCycles"), em_Val_from(value));
}


ItemDetails ItemDetails_new() {
    em_Val obj = em_Val_object();
    return ItemDetails_from_val(&obj);
}

