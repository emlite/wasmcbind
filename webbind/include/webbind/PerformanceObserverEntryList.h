#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PerformanceObserverEntryList;


DECLARE_EMLITE_TYPE(PerformanceObserverEntryList, em_Val);

jb_Any PerformanceObserverEntryList_getEntries(PerformanceObserverEntryList* self );

jb_Any PerformanceObserverEntryList_getEntriesByType(PerformanceObserverEntryList* self , const jb_DOMString* type);

jb_Any PerformanceObserverEntryList_getEntriesByName(PerformanceObserverEntryList* self , const jb_DOMString* name);

jb_Any PerformanceObserverEntryList_getEntriesByName(PerformanceObserverEntryList* self , const jb_DOMString* name, const jb_DOMString* type);
