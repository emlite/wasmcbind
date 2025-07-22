#include <webbind/PerformanceEventTiming.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(PerformanceEventTiming, PerformanceEntry);


jb_Any PerformanceEventTiming_processingStart(const PerformanceEventTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "processingStart"));
}


jb_Any PerformanceEventTiming_processingEnd(const PerformanceEventTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "processingEnd"));
}


bool PerformanceEventTiming_cancelable(const PerformanceEventTiming *self) {
    return em_Val_as(bool, em_Val_get(PerformanceEntry_as_val(self->inner), "cancelable"));
}


Node PerformanceEventTiming_target(const PerformanceEventTiming *self) {
    return em_Val_as(Node, em_Val_get(PerformanceEntry_as_val(self->inner), "target"));
}


long long PerformanceEventTiming_interactionId(const PerformanceEventTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), "interactionId"));
}


jb_Object PerformanceEventTiming_toJSON(PerformanceEventTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

