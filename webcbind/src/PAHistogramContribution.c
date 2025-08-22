#include <webcbind/PAHistogramContribution.h>

DEFINE_EMLITE_TYPE(PAHistogramContribution, em_Val);


long long PAHistogramContribution_bucket(const PAHistogramContribution *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bucket")));
}


void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bucket"), em_Val_from(value));
}


long PAHistogramContribution_value(const PAHistogramContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void PAHistogramContribution_set_value(PAHistogramContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


long long PAHistogramContribution_filteringId(const PAHistogramContribution *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filteringId")));
}


void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filteringId"), em_Val_from(value));
}


PAHistogramContribution PAHistogramContribution_new() {
    em_Val obj = em_Val_object();
    return PAHistogramContribution_from_val(&obj);
}

