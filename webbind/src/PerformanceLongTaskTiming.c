#include <webbind/PerformanceLongTaskTiming.h>
#include <webbind/TaskAttributionTiming.h>


DEFINE_EMLITE_TYPE(PerformanceLongTaskTiming, PerformanceEntry);


jb_Any PerformanceLongTaskTiming_startTime(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "startTime"));
}


jb_Any PerformanceLongTaskTiming_duration(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "duration"));
}


jb_DOMString PerformanceLongTaskTiming_name(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "name"));
}


jb_DOMString PerformanceLongTaskTiming_entryType(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "entryType"));
}


jb_FrozenArray PerformanceLongTaskTiming_attribution(const PerformanceLongTaskTiming *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PerformanceEntry_as_val(self->inner), "attribution"));
}


jb_Object PerformanceLongTaskTiming_toJSON(PerformanceLongTaskTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

