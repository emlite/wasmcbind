#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct EventCounts EventCounts;
typedef struct PerformanceTiming PerformanceTiming;
typedef struct PerformanceNavigation PerformanceNavigation;
typedef struct MemoryMeasurement MemoryMeasurement;
typedef struct PerformanceMark PerformanceMark;
typedef struct PerformanceMarkOptions PerformanceMarkOptions;
typedef struct PerformanceMeasure PerformanceMeasure;


typedef struct {
  em_Val inner;
} MemoryMeasurement;


DECLARE_EMLITE_TYPE(MemoryMeasurement, em_Val);

long long MemoryMeasurement_bytes( const MemoryMeasurement *self);

void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value);

jb_Sequence MemoryMeasurement_breakdown( const MemoryMeasurement *self);

void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} PerformanceMarkOptions;


DECLARE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);

jb_Any PerformanceMarkOptions_detail( const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, const jb_Any* value);

jb_Any PerformanceMarkOptions_startTime( const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, const jb_Any* value);
typedef struct {
  EventTarget inner;
} Performance;


DECLARE_EMLITE_TYPE(Performance, EventTarget);

jb_Any Performance_now(Performance* self );

jb_Any Performance_timeOrigin( const Performance *self);

jb_Object Performance_toJSON(Performance* self );

EventCounts Performance_eventCounts( const Performance *self);

long long Performance_interactionCount( const Performance *self);

PerformanceTiming Performance_timing( const Performance *self);

PerformanceNavigation Performance_navigation( const Performance *self);

jb_Promise Performance_measureUserAgentSpecificMemory(Performance* self );

jb_Any Performance_getEntries(Performance* self );

jb_Any Performance_getEntriesByType(Performance* self , const jb_DOMString* type);

jb_Any Performance_getEntriesByName(Performance* self , const jb_DOMString* name);

jb_Any Performance_getEntriesByName(Performance* self , const jb_DOMString* name, const jb_DOMString* type);

jb_Undefined Performance_clearResourceTimings(Performance* self );

jb_Undefined Performance_setResourceTimingBufferSize(Performance* self , unsigned long maxSize);

jb_Any Performance_onresourcetimingbufferfull( const Performance *self);

void Performance_set_onresourcetimingbufferfull(Performance* self, const jb_Any* value);

PerformanceMark Performance_mark(Performance* self , const jb_DOMString* markName);

PerformanceMark Performance_mark(Performance* self , const jb_DOMString* markName, const PerformanceMarkOptions* markOptions);

jb_Undefined Performance_clearMarks(Performance* self );

jb_Undefined Performance_clearMarks(Performance* self , const jb_DOMString* markName);

PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName);

PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName, const jb_Any* startOrMeasureOptions);

PerformanceMeasure Performance_measure(Performance* self , const jb_DOMString* measureName, const jb_Any* startOrMeasureOptions, const jb_DOMString* endMark);

jb_Undefined Performance_clearMeasures(Performance* self );

jb_Undefined Performance_clearMeasures(Performance* self , const jb_DOMString* measureName);
