#include <webbind/PerformanceEntry.h>


DEFINE_EMLITE_TYPE(PerformanceEntry, em_Val);


long long PerformanceEntry_id(const PerformanceEntry *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DOMString PerformanceEntry_name(const PerformanceEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_DOMString PerformanceEntry_entryType(const PerformanceEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "entryType"));
}


jb_Any PerformanceEntry_startTime(const PerformanceEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "startTime"));
}


jb_Any PerformanceEntry_duration(const PerformanceEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


long long PerformanceEntry_navigationId(const PerformanceEntry *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "navigationId"));
}


jb_Object PerformanceEntry_toJSON(PerformanceEntry* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

