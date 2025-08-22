#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceObserverEntryList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserverEntryList)
 */
DECLARE_EMLITE_TYPE(PerformanceObserverEntryList, em_Val);

/**
 * @brief Calls the `getEntries` method. 
*/
jb_Any PerformanceObserverEntryList_getEntries(PerformanceObserverEntryList* self );

/**
 * @brief Calls the `getEntriesByType` method. 
*/
jb_Any PerformanceObserverEntryList_getEntriesByType(PerformanceObserverEntryList* self , jb_String * type);

/**
 * @brief Calls the `getEntriesByName` method. 
*/
jb_Any PerformanceObserverEntryList_getEntriesByName0(PerformanceObserverEntryList* self , jb_String * name);

/**
 * @brief Calls the `getEntriesByName` method. 
*/
jb_Any PerformanceObserverEntryList_getEntriesByName1(PerformanceObserverEntryList* self , jb_String * name, jb_String * type);

#ifdef __cplusplus
}
#endif
