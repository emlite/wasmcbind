#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(PerformanceObserverEntryList, em_Val);

jb_Any PerformanceObserverEntryList_getEntries(PerformanceObserverEntryList* self );

jb_Any PerformanceObserverEntryList_getEntriesByType(PerformanceObserverEntryList* self , jb_DOMString * type);

jb_Any PerformanceObserverEntryList_getEntriesByName0(PerformanceObserverEntryList* self , jb_DOMString * name);

jb_Any PerformanceObserverEntryList_getEntriesByName1(PerformanceObserverEntryList* self , jb_DOMString * name, jb_DOMString * type);
