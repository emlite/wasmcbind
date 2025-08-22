#include <webcbind/AdAuctionData.h>

DEFINE_EMLITE_TYPE(AdAuctionData, em_Val);


jb_String AdAuctionData_requestId(const AdAuctionData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestId")));
}


void AdAuctionData_set_requestId(AdAuctionData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestId"), em_Val_from(value));
}


jb_Uint8Array AdAuctionData_request(const AdAuctionData *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


void AdAuctionData_set_request(AdAuctionData* self, jb_Uint8Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("request"), em_Val_from(value));
}


jb_Array AdAuctionData_requests(const AdAuctionData *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requests")));
}


void AdAuctionData_set_requests(AdAuctionData* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requests"), em_Val_from(value));
}


AdAuctionData AdAuctionData_new() {
    em_Val obj = em_Val_object();
    return AdAuctionData_from_val(&obj);
}

