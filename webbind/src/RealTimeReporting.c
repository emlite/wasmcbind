#include <webbind/RealTimeReporting.h>

#include <webbind/RealTimeContribution.h>

DEFINE_EMLITE_TYPE(RealTimeReporting, em_Val);


jb_Undefined RealTimeReporting_contributeToHistogram(RealTimeReporting* self , RealTimeContribution * contribution) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "contributeToHistogram", em_Val_from(contribution)));
}

