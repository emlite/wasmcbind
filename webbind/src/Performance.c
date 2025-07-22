#include <webbind/Performance.h>
#include <webbind/EventCounts.h>
#include <webbind/PerformanceTiming.h>
#include <webbind/PerformanceNavigation.h>
#include <webbind/PerformanceMark.h>
#include <webbind/PerformanceMeasure.h>


DEFINE_EMLITE_TYPE(MemoryMeasurement, em_Val);


long long MemoryMeasurement_bytes(const MemoryMeasurement *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bytes"));
}


void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bytes", value);
}


jb_Sequence MemoryMeasurement_breakdown(const MemoryMeasurement *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "breakdown"));
}


void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "breakdown", value);
}

DEFINE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);


jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "detail"));
}


void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "detail", value);
}


jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "startTime"));
}


void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "startTime", value);
}

DEFINE_EMLITE_TYPE(Performance, EventTarget);


jb_Any Performance_now(Performance* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "now"));
}


jb_Any Performance_timeOrigin(const Performance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "timeOrigin"));
}


jb_Object Performance_toJSON(Performance* self ) {
    return em_Val_as(jb_Object, em_Val_call(EventTarget_as_val(self->inner), "toJSON"));
}


EventCounts Performance_eventCounts(const Performance *self) {
    return em_Val_as(EventCounts, em_Val_get(EventTarget_as_val(self->inner), "eventCounts"));
}


long long Performance_interactionCount(const Performance *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "interactionCount"));
}


PerformanceTiming Performance_timing(const Performance *self) {
    return em_Val_as(PerformanceTiming, em_Val_get(EventTarget_as_val(self->inner), "timing"));
}


PerformanceNavigation Performance_navigation(const Performance *self) {
    return em_Val_as(PerformanceNavigation, em_Val_get(EventTarget_as_val(self->inner), "navigation"));
}


jb_Promise Performance_measureUserAgentSpecificMemory(Performance* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "measureUserAgentSpecificMemory"));
}


jb_Any Performance_getEntries(Performance* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntries"));
}


jb_Any Performance_getEntriesByType(Performance* self , const jb_DOMString* type) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByType", em_Val_from(type)));
}


jb_Any Performance_getEntriesByName(Performance* self , const jb_DOMString* name) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByName", em_Val_from(name)));
}


jb_Any Performance_getEntriesByName(Performance* self , const jb_DOMString* name, const jb_DOMString* type) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByName", em_Val_from(name), em_Val_from(type)));
}


jb_Undefined Performance_clearResourceTimings(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearResourceTimings"));
}


jb_Undefined Performance_setResourceTimingBufferSize(Performance* self , unsigned long maxSize) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setResourceTimingBufferSize", em_Val_from(maxSize)));
}


jb_Any Performance_onresourcetimingbufferfull(const Performance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onresourcetimingbufferfull"));
}


void Performance_set_onresourcetimingbufferfull(Performance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onresourcetimingbufferfull", value);
}


PerformanceMark Performance_mark(Performance* self , const jb_DOMString* markName) {
    return em_Val_as(PerformanceMark, em_Val_call(EventTarget_as_val(self->inner), "mark", em_Val_from(markName)));
}


PerformanceMark Performance_mark(Performance* self , const jb_DOMString* markName, const PerformanceMarkOptions* markOptions) {
    return em_Val_as(PerformanceMark, em_Val_call(EventTarget_as_val(self->inner), "mark", em_Val_from(markName), em_Val_from(markOptions)));
}


jb_Undefined Performance_clearMarks(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMarks"));
}


jb_Undefined Performance_clearMarks(Performance* self , const jb_DOMString* markName) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMarks", em_Val_from(markName)));
}


PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName)));
}


PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName, const jb_Any* startOrMeasureOptions) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName), em_Val_from(startOrMeasureOptions)));
}


PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName, const jb_Any* startOrMeasureOptions, const jb_DOMString* endMark) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName), em_Val_from(startOrMeasureOptions), em_Val_from(endMark)));
}


jb_Undefined Performance_clearMeasures(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMeasures"));
}


jb_Undefined Performance_clearMeasures(Performance* self , const jb_DOMString* measureName) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMeasures", em_Val_from(measureName)));
}

