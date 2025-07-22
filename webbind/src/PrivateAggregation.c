#include <webbind/PrivateAggregation.h>


DEFINE_EMLITE_TYPE(PAHistogramContribution, em_Val);


long long PAHistogramContribution_bucket(const PAHistogramContribution *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bucket"));
}


void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bucket", value);
}


long PAHistogramContribution_value(const PAHistogramContribution *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void PAHistogramContribution_set_value(PAHistogramContribution* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


long long PAHistogramContribution_filteringId(const PAHistogramContribution *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "filteringId"));
}


void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "filteringId", value);
}

DEFINE_EMLITE_TYPE(PADebugModeOptions, em_Val);


long long PADebugModeOptions_debugKey(const PADebugModeOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "debugKey"));
}


void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "debugKey", value);
}

DEFINE_EMLITE_TYPE(PrivateAggregation, em_Val);


jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , const PAHistogramContribution* contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogram", em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , const jb_DOMString* event, const jb_Record* contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogramOnEvent", em_Val_from(event), em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_enableDebugMode(PrivateAggregation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode"));
}


jb_Undefined PrivateAggregation_enableDebugMode(PrivateAggregation* self , const PADebugModeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode", em_Val_from(options)));
}

