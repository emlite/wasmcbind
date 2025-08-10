#include <webbind/RealTimeContribution.h>

DEFINE_EMLITE_TYPE(RealTimeContribution, em_Val);


long RealTimeContribution_bucket(const RealTimeContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bucket")));
}


void RealTimeContribution_set_bucket(RealTimeContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bucket"), em_Val_from(value));
}


double RealTimeContribution_priorityWeight(const RealTimeContribution *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priorityWeight")));
}


void RealTimeContribution_set_priorityWeight(RealTimeContribution* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priorityWeight"), em_Val_from(value));
}


long RealTimeContribution_latencyThreshold(const RealTimeContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("latencyThreshold")));
}


void RealTimeContribution_set_latencyThreshold(RealTimeContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("latencyThreshold"), em_Val_from(value));
}


RealTimeContribution RealTimeContribution_new() {
    em_Val obj = em_Val_object();
    return RealTimeContribution_from_val(&obj);
}

