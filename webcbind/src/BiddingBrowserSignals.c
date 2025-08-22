#include <webcbind/BiddingBrowserSignals.h>

DEFINE_EMLITE_TYPE(BiddingBrowserSignals, em_Val);


jb_String BiddingBrowserSignals_topWindowHostname(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topWindowHostname")));
}


void BiddingBrowserSignals_set_topWindowHostname(BiddingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topWindowHostname"), em_Val_from(value));
}


jb_String BiddingBrowserSignals_seller(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void BiddingBrowserSignals_set_seller(BiddingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


long BiddingBrowserSignals_joinCount(const BiddingBrowserSignals *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("joinCount")));
}


void BiddingBrowserSignals_set_joinCount(BiddingBrowserSignals* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("joinCount"), em_Val_from(value));
}


long BiddingBrowserSignals_bidCount(const BiddingBrowserSignals *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bidCount")));
}


void BiddingBrowserSignals_set_bidCount(BiddingBrowserSignals* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bidCount"), em_Val_from(value));
}


long BiddingBrowserSignals_recency(const BiddingBrowserSignals *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recency")));
}


void BiddingBrowserSignals_set_recency(BiddingBrowserSignals* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recency"), em_Val_from(value));
}


long BiddingBrowserSignals_adComponentsLimit(const BiddingBrowserSignals *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adComponentsLimit")));
}


void BiddingBrowserSignals_set_adComponentsLimit(BiddingBrowserSignals* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adComponentsLimit"), em_Val_from(value));
}


unsigned short BiddingBrowserSignals_multiBidLimit(const BiddingBrowserSignals *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiBidLimit")));
}


void BiddingBrowserSignals_set_multiBidLimit(BiddingBrowserSignals* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multiBidLimit"), em_Val_from(value));
}


jb_Object BiddingBrowserSignals_requestedSize(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestedSize")));
}


void BiddingBrowserSignals_set_requestedSize(BiddingBrowserSignals* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestedSize"), em_Val_from(value));
}


jb_String BiddingBrowserSignals_topLevelSeller(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topLevelSeller")));
}


void BiddingBrowserSignals_set_topLevelSeller(BiddingBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topLevelSeller"), em_Val_from(value));
}


jb_Array BiddingBrowserSignals_prevWinsMs(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("prevWinsMs")));
}


void BiddingBrowserSignals_set_prevWinsMs(BiddingBrowserSignals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("prevWinsMs"), em_Val_from(value));
}


jb_Object BiddingBrowserSignals_wasmHelper(const BiddingBrowserSignals *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wasmHelper")));
}


void BiddingBrowserSignals_set_wasmHelper(BiddingBrowserSignals* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("wasmHelper"), em_Val_from(value));
}


unsigned long BiddingBrowserSignals_dataVersion(const BiddingBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataVersion")));
}


void BiddingBrowserSignals_set_dataVersion(BiddingBrowserSignals* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataVersion"), em_Val_from(value));
}


unsigned long BiddingBrowserSignals_crossOriginDataVersion(const BiddingBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crossOriginDataVersion")));
}


void BiddingBrowserSignals_set_crossOriginDataVersion(BiddingBrowserSignals* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crossOriginDataVersion"), em_Val_from(value));
}


bool BiddingBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const BiddingBrowserSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forDebuggingOnlyInCooldownOrLockout")));
}


void BiddingBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(BiddingBrowserSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("forDebuggingOnlyInCooldownOrLockout"), em_Val_from(value));
}


BiddingBrowserSignals BiddingBrowserSignals_new() {
    em_Val obj = em_Val_object();
    return BiddingBrowserSignals_from_val(&obj);
}

