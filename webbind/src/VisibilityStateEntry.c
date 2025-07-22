#include <webbind/VisibilityStateEntry.h>


DEFINE_EMLITE_TYPE(VisibilityStateEntry, PerformanceEntry);


jb_DOMString VisibilityStateEntry_name(const VisibilityStateEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "name"));
}


jb_DOMString VisibilityStateEntry_entryType(const VisibilityStateEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "entryType"));
}


jb_Any VisibilityStateEntry_startTime(const VisibilityStateEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "startTime"));
}


unsigned long VisibilityStateEntry_duration(const VisibilityStateEntry *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), "duration"));
}

