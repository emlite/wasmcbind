#include <webbind/RealTimeReporting.h>


DEFINE_EMLITE_TYPE(RealTimeContribution, em_Val);


long RealTimeContribution_bucket(const RealTimeContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "bucket"));
}


void RealTimeContribution_set_bucket(RealTimeContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "bucket", value);
}


double RealTimeContribution_priorityWeight(const RealTimeContribution *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "priorityWeight"));
}


void RealTimeContribution_set_priorityWeight(RealTimeContribution* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "priorityWeight", value);
}


long RealTimeContribution_latencyThreshold(const RealTimeContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "latencyThreshold"));
}


void RealTimeContribution_set_latencyThreshold(RealTimeContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "latencyThreshold", value);
}

DEFINE_EMLITE_TYPE(RealTimeReporting, em_Val);


jb_Undefined RealTimeReporting_contributeToHistogram(RealTimeReporting* self , const RealTimeContribution* contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogram", em_Val_from(contribution)));
}

