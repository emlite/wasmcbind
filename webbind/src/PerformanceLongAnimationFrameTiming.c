#include <webbind/PerformanceLongAnimationFrameTiming.h>
#include <webbind/PerformanceScriptTiming.h>


DEFINE_EMLITE_TYPE(PerformanceLongAnimationFrameTiming, PerformanceEntry);


jb_Any PerformanceLongAnimationFrameTiming_startTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "startTime"));
}


jb_Any PerformanceLongAnimationFrameTiming_duration(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "duration"));
}


jb_DOMString PerformanceLongAnimationFrameTiming_name(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "name"));
}


jb_DOMString PerformanceLongAnimationFrameTiming_entryType(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "entryType"));
}


jb_Any PerformanceLongAnimationFrameTiming_renderStart(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "renderStart"));
}


jb_Any PerformanceLongAnimationFrameTiming_styleAndLayoutStart(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "styleAndLayoutStart"));
}


jb_Any PerformanceLongAnimationFrameTiming_blockingDuration(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "blockingDuration"));
}


jb_Any PerformanceLongAnimationFrameTiming_firstUIEventTimestamp(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "firstUIEventTimestamp"));
}


jb_FrozenArray PerformanceLongAnimationFrameTiming_scripts(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PerformanceEntry_as_val(self->inner), "scripts"));
}


jb_Object PerformanceLongAnimationFrameTiming_toJSON(PerformanceLongAnimationFrameTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any PerformanceLongAnimationFrameTiming_paintTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "paintTime"));
}


jb_Any PerformanceLongAnimationFrameTiming_presentationTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "presentationTime"));
}

