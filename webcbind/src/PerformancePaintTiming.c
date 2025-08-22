#include <webcbind/PerformancePaintTiming.h>

DEFINE_EMLITE_TYPE(PerformancePaintTiming, PerformanceEntry);


jb_Object PerformancePaintTiming_toJSON(PerformancePaintTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any PerformancePaintTiming_paintTime(const PerformancePaintTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("paintTime")));
}


jb_Any PerformancePaintTiming_presentationTime(const PerformancePaintTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("presentationTime")));
}

