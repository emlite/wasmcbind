#include <webbind/ReportingObserverOptions.h>

DEFINE_EMLITE_TYPE(ReportingObserverOptions, em_Val);


jb_Array ReportingObserverOptions_types(const ReportingObserverOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


void ReportingObserverOptions_set_types(ReportingObserverOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("types"), em_Val_from(value));
}


bool ReportingObserverOptions_buffered(const ReportingObserverOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffered")));
}


void ReportingObserverOptions_set_buffered(ReportingObserverOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffered"), em_Val_from(value));
}


ReportingObserverOptions ReportingObserverOptions_new() {
    em_Val obj = em_Val_object();
    return ReportingObserverOptions_from_val(&obj);
}

