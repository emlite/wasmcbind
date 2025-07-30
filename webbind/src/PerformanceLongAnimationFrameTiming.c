#include <webbind/PerformanceLongAnimationFrameTiming.h>
#include <webbind/PerformanceScriptTiming.h>


DEFINE_EMLITE_TYPE(PerformanceLongAnimationFrameTiming, PerformanceEntry);


jb_Any PerformanceLongAnimationFrameTiming_startTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("startTime")));
}


jb_Any PerformanceLongAnimationFrameTiming_duration(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("duration")));
}


jb_String PerformanceLongAnimationFrameTiming_name(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("name")));
}


jb_String PerformanceLongAnimationFrameTiming_entryType(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("entryType")));
}


jb_Any PerformanceLongAnimationFrameTiming_renderStart(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("renderStart")));
}


jb_Any PerformanceLongAnimationFrameTiming_styleAndLayoutStart(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("styleAndLayoutStart")));
}


jb_Any PerformanceLongAnimationFrameTiming_blockingDuration(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("blockingDuration")));
}


jb_Any PerformanceLongAnimationFrameTiming_firstUIEventTimestamp(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("firstUIEventTimestamp")));
}


jb_Array PerformanceLongAnimationFrameTiming_scripts(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Array, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("scripts")));
}


jb_Object PerformanceLongAnimationFrameTiming_toJSON(PerformanceLongAnimationFrameTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any PerformanceLongAnimationFrameTiming_paintTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("paintTime")));
}


jb_Any PerformanceLongAnimationFrameTiming_presentationTime(const PerformanceLongAnimationFrameTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("presentationTime")));
}

