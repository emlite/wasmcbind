#include <webbind/VisibilityStateEntry.h>

DEFINE_EMLITE_TYPE(VisibilityStateEntry, PerformanceEntry);


jb_String VisibilityStateEntry_name(const VisibilityStateEntry *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("name")));
}


jb_String VisibilityStateEntry_entryType(const VisibilityStateEntry *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("entryType")));
}


jb_Any VisibilityStateEntry_startTime(const VisibilityStateEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("startTime")));
}


unsigned long VisibilityStateEntry_duration(const VisibilityStateEntry *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("duration")));
}

