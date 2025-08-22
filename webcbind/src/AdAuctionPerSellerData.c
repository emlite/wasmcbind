#include <webcbind/AdAuctionPerSellerData.h>

DEFINE_EMLITE_TYPE(AdAuctionPerSellerData, em_Val);


jb_String AdAuctionPerSellerData_seller(const AdAuctionPerSellerData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AdAuctionPerSellerData_set_seller(AdAuctionPerSellerData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_Uint8Array AdAuctionPerSellerData_request(const AdAuctionPerSellerData *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


void AdAuctionPerSellerData_set_request(AdAuctionPerSellerData* self, jb_Uint8Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("request"), em_Val_from(value));
}


jb_String AdAuctionPerSellerData_error(const AdAuctionPerSellerData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void AdAuctionPerSellerData_set_error(AdAuctionPerSellerData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


AdAuctionPerSellerData AdAuctionPerSellerData_new() {
    em_Val obj = em_Val_object();
    return AdAuctionPerSellerData_from_val(&obj);
}

