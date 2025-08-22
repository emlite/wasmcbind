#include <webcbind/AuctionAdInterestGroupKey.h>

DEFINE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);


jb_String AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("owner")));
}


void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("owner"), em_Val_from(value));
}


jb_String AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


AuctionAdInterestGroupKey AuctionAdInterestGroupKey_new() {
    em_Val obj = em_Val_object();
    return AuctionAdInterestGroupKey_from_val(&obj);
}

