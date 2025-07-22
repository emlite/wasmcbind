#include <webbind/TaskAttributionTiming.h>


DEFINE_EMLITE_TYPE(TaskAttributionTiming, PerformanceEntry);


jb_Any TaskAttributionTiming_startTime(const TaskAttributionTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "startTime"));
}


jb_Any TaskAttributionTiming_duration(const TaskAttributionTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "duration"));
}


jb_DOMString TaskAttributionTiming_name(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "name"));
}


jb_DOMString TaskAttributionTiming_entryType(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "entryType"));
}


jb_DOMString TaskAttributionTiming_containerType(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "containerType"));
}


jb_DOMString TaskAttributionTiming_containerSrc(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "containerSrc"));
}


jb_DOMString TaskAttributionTiming_containerId(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "containerId"));
}


jb_DOMString TaskAttributionTiming_containerName(const TaskAttributionTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "containerName"));
}


jb_Object TaskAttributionTiming_toJSON(TaskAttributionTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

