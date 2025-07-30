#include <webbind/LayoutShift.h>
#include <webbind/LayoutShiftAttribution.h>


DEFINE_EMLITE_TYPE(LayoutShift, PerformanceEntry);


double LayoutShift_value(const LayoutShift *self) {
    return em_Val_as(double, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("value")));
}


bool LayoutShift_hadRecentInput(const LayoutShift *self) {
    return em_Val_as(bool, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("hadRecentInput")));
}


jb_Any LayoutShift_lastInputTime(const LayoutShift *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("lastInputTime")));
}


jb_Array LayoutShift_sources(const LayoutShift *self) {
    return em_Val_as(jb_Array, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("sources")));
}


jb_Object LayoutShift_toJSON(LayoutShift* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

