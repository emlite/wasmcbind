#include <webbind/AttributionReportingRequestOptions.h>

DEFINE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);


bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventSourceEligible")));
}


void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventSourceEligible"), em_Val_from(value));
}


bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("triggerEligible")));
}


void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("triggerEligible"), em_Val_from(value));
}


AttributionReportingRequestOptions AttributionReportingRequestOptions_new() {
    em_Val obj = em_Val_object();
    return AttributionReportingRequestOptions_from_val(&obj);
}

