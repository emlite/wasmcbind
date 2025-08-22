#include <webcbind/AdAuctionOneSeller.h>

DEFINE_EMLITE_TYPE(AdAuctionOneSeller, em_Val);


jb_String AdAuctionOneSeller_seller(const AdAuctionOneSeller *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AdAuctionOneSeller_set_seller(AdAuctionOneSeller* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_String AdAuctionOneSeller_coordinatorOrigin(const AdAuctionOneSeller *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin")));
}


void AdAuctionOneSeller_set_coordinatorOrigin(AdAuctionOneSeller* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin"), em_Val_from(value));
}


AdAuctionOneSeller AdAuctionOneSeller_new() {
    em_Val obj = em_Val_object();
    return AdAuctionOneSeller_from_val(&obj);
}

