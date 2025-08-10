#include <webbind/GenerateBidInterestGroup.h>

DEFINE_EMLITE_TYPE(GenerateBidInterestGroup, em_Val);


jb_String GenerateBidInterestGroup_owner(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("owner")));
}


void GenerateBidInterestGroup_set_owner(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("owner"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_name(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void GenerateBidInterestGroup_set_name(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


bool GenerateBidInterestGroup_enableBiddingSignalsPrioritization(const GenerateBidInterestGroup *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enableBiddingSignalsPrioritization")));
}


void GenerateBidInterestGroup_set_enableBiddingSignalsPrioritization(GenerateBidInterestGroup* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enableBiddingSignalsPrioritization"), em_Val_from(value));
}


jb_Object GenerateBidInterestGroup_priorityVector(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priorityVector")));
}


void GenerateBidInterestGroup_set_priorityVector(GenerateBidInterestGroup* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priorityVector"), em_Val_from(value));
}


jb_Object GenerateBidInterestGroup_sellerCapabilities(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerCapabilities")));
}


void GenerateBidInterestGroup_set_sellerCapabilities(GenerateBidInterestGroup* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerCapabilities"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_executionMode(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("executionMode")));
}


void GenerateBidInterestGroup_set_executionMode(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("executionMode"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_biddingLogicURL(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("biddingLogicURL")));
}


void GenerateBidInterestGroup_set_biddingLogicURL(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("biddingLogicURL"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_biddingWasmHelperURL(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("biddingWasmHelperURL")));
}


void GenerateBidInterestGroup_set_biddingWasmHelperURL(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("biddingWasmHelperURL"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_updateURL(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("updateURL")));
}


void GenerateBidInterestGroup_set_updateURL(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("updateURL"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_trustedBiddingSignalsURL(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsURL")));
}


void GenerateBidInterestGroup_set_trustedBiddingSignalsURL(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsURL"), em_Val_from(value));
}


jb_Array GenerateBidInterestGroup_trustedBiddingSignalsKeys(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsKeys")));
}


void GenerateBidInterestGroup_set_trustedBiddingSignalsKeys(GenerateBidInterestGroup* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsKeys"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_trustedBiddingSignalsSlotSizeMode(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsSlotSizeMode")));
}


void GenerateBidInterestGroup_set_trustedBiddingSignalsSlotSizeMode(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsSlotSizeMode"), em_Val_from(value));
}


long GenerateBidInterestGroup_maxTrustedBiddingSignalsURLLength(const GenerateBidInterestGroup *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTrustedBiddingSignalsURLLength")));
}


void GenerateBidInterestGroup_set_maxTrustedBiddingSignalsURLLength(GenerateBidInterestGroup* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxTrustedBiddingSignalsURLLength"), em_Val_from(value));
}


jb_String GenerateBidInterestGroup_trustedBiddingSignalsCoordinator(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsCoordinator")));
}


void GenerateBidInterestGroup_set_trustedBiddingSignalsCoordinator(GenerateBidInterestGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedBiddingSignalsCoordinator"), em_Val_from(value));
}


jb_Any GenerateBidInterestGroup_userBiddingSignals(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userBiddingSignals")));
}


void GenerateBidInterestGroup_set_userBiddingSignals(GenerateBidInterestGroup* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userBiddingSignals"), em_Val_from(value));
}


jb_Array GenerateBidInterestGroup_ads(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ads")));
}


void GenerateBidInterestGroup_set_ads(GenerateBidInterestGroup* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ads"), em_Val_from(value));
}


jb_Array GenerateBidInterestGroup_adComponents(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adComponents")));
}


void GenerateBidInterestGroup_set_adComponents(GenerateBidInterestGroup* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adComponents"), em_Val_from(value));
}


jb_Object GenerateBidInterestGroup_adSizes(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adSizes")));
}


void GenerateBidInterestGroup_set_adSizes(GenerateBidInterestGroup* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adSizes"), em_Val_from(value));
}


jb_Object GenerateBidInterestGroup_sizeGroups(const GenerateBidInterestGroup *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizeGroups")));
}


void GenerateBidInterestGroup_set_sizeGroups(GenerateBidInterestGroup* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizeGroups"), em_Val_from(value));
}


GenerateBidInterestGroup GenerateBidInterestGroup_new() {
    em_Val obj = em_Val_object();
    return GenerateBidInterestGroup_from_val(&obj);
}

