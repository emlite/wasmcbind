#include <webcbind/StorageInterestGroup.h>

DEFINE_EMLITE_TYPE(StorageInterestGroup, AuctionAdInterestGroup);


long long StorageInterestGroup_joinCount(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("joinCount")));
}


void StorageInterestGroup_set_joinCount(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("joinCount"), em_Val_from(value));
}


long long StorageInterestGroup_bidCount(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("bidCount")));
}


void StorageInterestGroup_set_bidCount(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("bidCount"), em_Val_from(value));
}


jb_Array StorageInterestGroup_prevWinsMs(const StorageInterestGroup *self) {
    return em_Val_as(jb_Array, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("prevWinsMs")));
}


void StorageInterestGroup_set_prevWinsMs(StorageInterestGroup* self, jb_Array * value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("prevWinsMs"), em_Val_from(value));
}


jb_String StorageInterestGroup_joiningOrigin(const StorageInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("joiningOrigin")));
}


void StorageInterestGroup_set_joiningOrigin(StorageInterestGroup* self, jb_String * value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("joiningOrigin"), em_Val_from(value));
}


long long StorageInterestGroup_timeSinceGroupJoinedMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeSinceGroupJoinedMs")));
}


void StorageInterestGroup_set_timeSinceGroupJoinedMs(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeSinceGroupJoinedMs"), em_Val_from(value));
}


long long StorageInterestGroup_lifetimeRemainingMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("lifetimeRemainingMs")));
}


void StorageInterestGroup_set_lifetimeRemainingMs(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("lifetimeRemainingMs"), em_Val_from(value));
}


long long StorageInterestGroup_timeSinceLastUpdateMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeSinceLastUpdateMs")));
}


void StorageInterestGroup_set_timeSinceLastUpdateMs(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeSinceLastUpdateMs"), em_Val_from(value));
}


long long StorageInterestGroup_timeUntilNextUpdateMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeUntilNextUpdateMs")));
}


void StorageInterestGroup_set_timeUntilNextUpdateMs(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("timeUntilNextUpdateMs"), em_Val_from(value));
}


long long StorageInterestGroup_estimatedSize(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("estimatedSize")));
}


void StorageInterestGroup_set_estimatedSize(StorageInterestGroup* self, long long value) {
    em_Val_set(AuctionAdInterestGroup_as_val(self->inner), em_Val_from("estimatedSize"), em_Val_from(value));
}


StorageInterestGroup StorageInterestGroup_new() {
    em_Val obj = em_Val_object();
    return StorageInterestGroup_from_val(&obj);
}

