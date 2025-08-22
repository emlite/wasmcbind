#include <webcbind/RequestInit.h>

DEFINE_EMLITE_TYPE(RequestInit, em_Val);


bool RequestInit_adAuctionHeaders(const RequestInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adAuctionHeaders")));
}


void RequestInit_set_adAuctionHeaders(RequestInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adAuctionHeaders"), em_Val_from(value));
}


RequestInit RequestInit_new() {
    em_Val obj = em_Val_object();
    return RequestInit_from_val(&obj);
}

