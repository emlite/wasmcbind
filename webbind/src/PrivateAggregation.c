#include <webbind/PrivateAggregation.h>

#include <webbind/PAHistogramContribution.h>
#include <webbind/PADebugModeOptions.h>

DEFINE_EMLITE_TYPE(PrivateAggregation, em_Val);


jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , PAHistogramContribution * contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogram", em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , jb_String * event, jb_Object * contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogramOnEvent", em_Val_from(event), em_Val_from(contribution)));
}


jb_Undefined PrivateAggregation_enableDebugMode0(PrivateAggregation* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode"));
}


jb_Undefined PrivateAggregation_enableDebugMode1(PrivateAggregation* self , PADebugModeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableDebugMode", em_Val_from(options)));
}

