#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PerformanceEntry;


DECLARE_EMLITE_TYPE(PerformanceEntry, em_Val);

long long PerformanceEntry_id( const PerformanceEntry *self);

jb_DOMString PerformanceEntry_name( const PerformanceEntry *self);

jb_DOMString PerformanceEntry_entryType( const PerformanceEntry *self);

jb_Any PerformanceEntry_startTime( const PerformanceEntry *self);

jb_Any PerformanceEntry_duration( const PerformanceEntry *self);

long long PerformanceEntry_navigationId( const PerformanceEntry *self);

jb_Object PerformanceEntry_toJSON(PerformanceEntry* self );
