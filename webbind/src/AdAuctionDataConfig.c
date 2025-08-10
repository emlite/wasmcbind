#include <webbind/AdAuctionDataConfig.h>

DEFINE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);


jb_String AdAuctionDataConfig_seller(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_String AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin")));
}


void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin"), em_Val_from(value));
}


jb_Array AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellers")));
}


void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellers"), em_Val_from(value));
}


unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestSize")));
}


void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestSize"), em_Val_from(value));
}


jb_Object AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerConfig")));
}


void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerConfig"), em_Val_from(value));
}


AdAuctionDataConfig AdAuctionDataConfig_new() {
    em_Val obj = em_Val_object();
    return AdAuctionDataConfig_from_val(&obj);
}

