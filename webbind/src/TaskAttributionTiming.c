#include <webbind/TaskAttributionTiming.h>

DEFINE_EMLITE_TYPE(TaskAttributionTiming, PerformanceEntry);


jb_Any TaskAttributionTiming_startTime(const TaskAttributionTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("startTime")));
}


jb_Any TaskAttributionTiming_duration(const TaskAttributionTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("duration")));
}


jb_String TaskAttributionTiming_name(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("name")));
}


jb_String TaskAttributionTiming_entryType(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("entryType")));
}


jb_String TaskAttributionTiming_containerType(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("containerType")));
}


jb_String TaskAttributionTiming_containerSrc(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("containerSrc")));
}


jb_String TaskAttributionTiming_containerId(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("containerId")));
}


jb_String TaskAttributionTiming_containerName(const TaskAttributionTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("containerName")));
}


jb_Object TaskAttributionTiming_toJSON(TaskAttributionTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

