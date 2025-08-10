#include <webbind/AuctionAdInterestGroupSize.h>

DEFINE_EMLITE_TYPE(AuctionAdInterestGroupSize, em_Val);


jb_String AuctionAdInterestGroupSize_width(const AuctionAdInterestGroupSize *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void AuctionAdInterestGroupSize_set_width(AuctionAdInterestGroupSize* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String AuctionAdInterestGroupSize_height(const AuctionAdInterestGroupSize *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void AuctionAdInterestGroupSize_set_height(AuctionAdInterestGroupSize* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


AuctionAdInterestGroupSize AuctionAdInterestGroupSize_new() {
    em_Val obj = em_Val_object();
    return AuctionAdInterestGroupSize_from_val(&obj);
}

