#include <webbind/PrivateAggregation.h>


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

DEFINE_EMLITE_TYPE(PADebugModeOptions, em_Val);


long long PADebugModeOptions_debugKey(const PADebugModeOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("debugKey")));
}


void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("debugKey"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PrivateAggregation, em_Val);


jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , PAHistogramContribution * contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogram", em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , jb_DOMString * event, jb_Record * contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogramOnEvent", em_Val_from(event), em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_enableDebugMode0(PrivateAggregation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode"));
}


jb_Undefined PrivateAggregation_enableDebugMode1(PrivateAggregation* self , PADebugModeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode", em_Val_from(options)));
}

