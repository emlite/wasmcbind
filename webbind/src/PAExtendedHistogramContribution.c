#include <webbind/PAExtendedHistogramContribution.h>

DEFINE_EMLITE_TYPE(PAExtendedHistogramContribution, em_Val);


jb_Any PAExtendedHistogramContribution_bucket(const PAExtendedHistogramContribution *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bucket")));
}


void PAExtendedHistogramContribution_set_bucket(PAExtendedHistogramContribution* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bucket"), em_Val_from(value));
}


jb_Any PAExtendedHistogramContribution_value(const PAExtendedHistogramContribution *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void PAExtendedHistogramContribution_set_value(PAExtendedHistogramContribution* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


long long PAExtendedHistogramContribution_filteringId(const PAExtendedHistogramContribution *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filteringId")));
}


void PAExtendedHistogramContribution_set_filteringId(PAExtendedHistogramContribution* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filteringId"), em_Val_from(value));
}


PAExtendedHistogramContribution PAExtendedHistogramContribution_new() {
    em_Val obj = em_Val_object();
    return PAExtendedHistogramContribution_from_val(&obj);
}

