#include <webbind/PerformanceLongTaskTiming.h>

#include <webbind/TaskAttributionTiming.h>

DEFINE_EMLITE_TYPE(PerformanceLongTaskTiming, PerformanceEntry);


jb_Any PerformanceLongTaskTiming_startTime(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("startTime")));
}


jb_Any PerformanceLongTaskTiming_duration(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("duration")));
}


jb_String PerformanceLongTaskTiming_name(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("name")));
}


jb_String PerformanceLongTaskTiming_entryType(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("entryType")));
}


jb_Array PerformanceLongTaskTiming_attribution(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_Array, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("attribution")));
}


jb_Object PerformanceLongTaskTiming_toJSON(PerformanceLongTaskTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

