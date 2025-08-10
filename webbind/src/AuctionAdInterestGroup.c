#include <webbind/AuctionAdInterestGroup.h>

DEFINE_EMLITE_TYPE(AuctionAdInterestGroup, GenerateBidInterestGroup);


double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("priority")));
}


void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value) {
    em_Val_set(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


jb_Object AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_Object, em_Val_get(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("prioritySignalsOverrides")));
}


void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, jb_Object * value) {
    em_Val_set(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("prioritySignalsOverrides"), em_Val_from(value));
}


double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("lifetimeMs")));
}


void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value) {
    em_Val_set(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("lifetimeMs"), em_Val_from(value));
}


jb_String AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("additionalBidKey")));
}


void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, jb_String * value) {
    em_Val_set(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("additionalBidKey"), em_Val_from(value));
}


ProtectedAudiencePrivateAggregationConfig AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self) {
    return em_Val_as(ProtectedAudiencePrivateAggregationConfig, em_Val_get(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, ProtectedAudiencePrivateAggregationConfig * value) {
    em_Val_set(GenerateBidInterestGroup_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}


AuctionAdInterestGroup AuctionAdInterestGroup_new() {
    em_Val obj = em_Val_object();
    return AuctionAdInterestGroup_from_val(&obj);
}

