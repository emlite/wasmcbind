#include <webbind/Performance.h>
#include <webbind/EventCounts.h>
#include <webbind/PerformanceTiming.h>
#include <webbind/PerformanceNavigation.h>
#include <webbind/PerformanceMark.h>
#include <webbind/PerformanceMeasure.h>


DEFINE_EMLITE_TYPE(MemoryMeasurement, em_Val);


long long MemoryMeasurement_bytes(const MemoryMeasurement *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytes")));
}


void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytes"), em_Val_from(value));
}


jb_Sequence MemoryMeasurement_breakdown(const MemoryMeasurement *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("breakdown")));
}


void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("breakdown"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);


jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detail")));
}


void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("detail"), em_Val_from(value));
}


jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startTime")));
}


void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startTime"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Performance, EventTarget);


jb_Any Performance_now(Performance* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "now"));
}


jb_Any Performance_timeOrigin(const Performance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("timeOrigin")));
}


jb_Object Performance_toJSON(Performance* self ) {
    return em_Val_as(jb_Object, em_Val_call(EventTarget_as_val(self->inner), "toJSON"));
}


EventCounts Performance_eventCounts(const Performance *self) {
    return em_Val_as(EventCounts, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("eventCounts")));
}


long long Performance_interactionCount(const Performance *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("interactionCount")));
}


PerformanceTiming Performance_timing(const Performance *self) {
    return em_Val_as(PerformanceTiming, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("timing")));
}


PerformanceNavigation Performance_navigation(const Performance *self) {
    return em_Val_as(PerformanceNavigation, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("navigation")));
}


jb_Promise Performance_measureUserAgentSpecificMemory(Performance* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "measureUserAgentSpecificMemory"));
}


jb_Any Performance_getEntries(Performance* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntries"));
}


jb_Any Performance_getEntriesByType(Performance* self , jb_DOMString * type) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByType", em_Val_from(type)));
}


jb_Any Performance_getEntriesByName0(Performance* self , jb_DOMString * name) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByName", em_Val_from(name)));
}


jb_Any Performance_getEntriesByName1(Performance* self , jb_DOMString * name, jb_DOMString * type) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getEntriesByName", em_Val_from(name), em_Val_from(type)));
}


jb_Undefined Performance_clearResourceTimings(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearResourceTimings"));
}


jb_Undefined Performance_setResourceTimingBufferSize(Performance* self , unsigned long maxSize) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setResourceTimingBufferSize", em_Val_from(maxSize)));
}


jb_Any Performance_onresourcetimingbufferfull(const Performance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresourcetimingbufferfull")));
}


void Performance_set_onresourcetimingbufferfull(Performance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresourcetimingbufferfull"), em_Val_from(value));
}


PerformanceMark Performance_mark0(Performance* self , jb_DOMString * markName) {
    return em_Val_as(PerformanceMark, em_Val_call(EventTarget_as_val(self->inner), "mark", em_Val_from(markName)));
}


PerformanceMark Performance_mark1(Performance* self , jb_DOMString * markName, PerformanceMarkOptions * markOptions) {
    return em_Val_as(PerformanceMark, em_Val_call(EventTarget_as_val(self->inner), "mark", em_Val_from(markName), em_Val_from(markOptions)));
}


jb_Undefined Performance_clearMarks0(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMarks"));
}


jb_Undefined Performance_clearMarks1(Performance* self , jb_DOMString * markName) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMarks", em_Val_from(markName)));
}


PerformanceMeasure Performance_measure0(Performance* self , jb_DOMString * measureName) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName)));
}


PerformanceMeasure Performance_measure1(Performance* self , jb_DOMString * measureName, jb_Any * startOrMeasureOptions) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName), em_Val_from(startOrMeasureOptions)));
}


PerformanceMeasure Performance_measure2(Performance* self , jb_DOMString * measureName, jb_Any * startOrMeasureOptions, jb_DOMString * endMark) {
    return em_Val_as(PerformanceMeasure, em_Val_call(EventTarget_as_val(self->inner), "measure", em_Val_from(measureName), em_Val_from(startOrMeasureOptions), em_Val_from(endMark)));
}


jb_Undefined Performance_clearMeasures0(Performance* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMeasures"));
}


jb_Undefined Performance_clearMeasures1(Performance* self , jb_DOMString * measureName) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearMeasures", em_Val_from(measureName)));
}

