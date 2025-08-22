#include <webcbind/DirectFromSellerSignalsForSeller.h>

DEFINE_EMLITE_TYPE(DirectFromSellerSignalsForSeller, em_Val);


jb_Any DirectFromSellerSignalsForSeller_auctionSignals(const DirectFromSellerSignalsForSeller *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionSignals")));
}


void DirectFromSellerSignalsForSeller_set_auctionSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionSignals"), em_Val_from(value));
}


jb_Any DirectFromSellerSignalsForSeller_sellerSignals(const DirectFromSellerSignalsForSeller *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerSignals")));
}


void DirectFromSellerSignalsForSeller_set_sellerSignals(DirectFromSellerSignalsForSeller* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerSignals"), em_Val_from(value));
}


DirectFromSellerSignalsForSeller DirectFromSellerSignalsForSeller_new() {
    em_Val obj = em_Val_object();
    return DirectFromSellerSignalsForSeller_from_val(&obj);
}

