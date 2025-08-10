#include <webbind/DirectFromSellerSignalsForBuyer.h>

DEFINE_EMLITE_TYPE(DirectFromSellerSignalsForBuyer, em_Val);


jb_Any DirectFromSellerSignalsForBuyer_auctionSignals(const DirectFromSellerSignalsForBuyer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionSignals")));
}


void DirectFromSellerSignalsForBuyer_set_auctionSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionSignals"), em_Val_from(value));
}


jb_Any DirectFromSellerSignalsForBuyer_perBuyerSignals(const DirectFromSellerSignalsForBuyer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerSignals")));
}


void DirectFromSellerSignalsForBuyer_set_perBuyerSignals(DirectFromSellerSignalsForBuyer* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerSignals"), em_Val_from(value));
}


DirectFromSellerSignalsForBuyer DirectFromSellerSignalsForBuyer_new() {
    em_Val obj = em_Val_object();
    return DirectFromSellerSignalsForBuyer_from_val(&obj);
}

