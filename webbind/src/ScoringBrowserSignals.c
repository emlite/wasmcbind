#include <webbind/ScoringBrowserSignals.h>

DEFINE_EMLITE_TYPE(ScoringBrowserSignals, em_Val);


jb_String ScoringBrowserSignals_topWindowHostname(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topWindowHostname")));
}


void ScoringBrowserSignals_set_topWindowHostname(ScoringBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topWindowHostname"), em_Val_from(value));
}


jb_String ScoringBrowserSignals_interestGroupOwner(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interestGroupOwner")));
}


void ScoringBrowserSignals_set_interestGroupOwner(ScoringBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("interestGroupOwner"), em_Val_from(value));
}


jb_String ScoringBrowserSignals_renderURL(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderURL")));
}


void ScoringBrowserSignals_set_renderURL(ScoringBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderURL"), em_Val_from(value));
}


unsigned long ScoringBrowserSignals_biddingDurationMsec(const ScoringBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("biddingDurationMsec")));
}


void ScoringBrowserSignals_set_biddingDurationMsec(ScoringBrowserSignals* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("biddingDurationMsec"), em_Val_from(value));
}


jb_String ScoringBrowserSignals_bidCurrency(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bidCurrency")));
}


void ScoringBrowserSignals_set_bidCurrency(ScoringBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bidCurrency"), em_Val_from(value));
}


jb_Object ScoringBrowserSignals_renderSize(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderSize")));
}


void ScoringBrowserSignals_set_renderSize(ScoringBrowserSignals* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderSize"), em_Val_from(value));
}


unsigned long ScoringBrowserSignals_dataVersion(const ScoringBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataVersion")));
}


void ScoringBrowserSignals_set_dataVersion(ScoringBrowserSignals* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataVersion"), em_Val_from(value));
}


unsigned long ScoringBrowserSignals_crossOriginDataVersion(const ScoringBrowserSignals *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crossOriginDataVersion")));
}


void ScoringBrowserSignals_set_crossOriginDataVersion(ScoringBrowserSignals* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crossOriginDataVersion"), em_Val_from(value));
}


jb_Array ScoringBrowserSignals_adComponents(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adComponents")));
}


void ScoringBrowserSignals_set_adComponents(ScoringBrowserSignals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adComponents"), em_Val_from(value));
}


bool ScoringBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const ScoringBrowserSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forDebuggingOnlyInCooldownOrLockout")));
}


void ScoringBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(ScoringBrowserSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("forDebuggingOnlyInCooldownOrLockout"), em_Val_from(value));
}


jb_String ScoringBrowserSignals_creativeScanningMetadata(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("creativeScanningMetadata")));
}


void ScoringBrowserSignals_set_creativeScanningMetadata(ScoringBrowserSignals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("creativeScanningMetadata"), em_Val_from(value));
}


jb_Array ScoringBrowserSignals_adComponentsCreativeScanningMetadata(const ScoringBrowserSignals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("adComponentsCreativeScanningMetadata")));
}


void ScoringBrowserSignals_set_adComponentsCreativeScanningMetadata(ScoringBrowserSignals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("adComponentsCreativeScanningMetadata"), em_Val_from(value));
}


ScoringBrowserSignals ScoringBrowserSignals_new() {
    em_Val obj = em_Val_object();
    return ScoringBrowserSignals_from_val(&obj);
}

