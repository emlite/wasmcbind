#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventCounts EventCounts;
typedef struct PerformanceTiming PerformanceTiming;
typedef struct PerformanceNavigation PerformanceNavigation;
typedef struct MemoryMeasurement MemoryMeasurement;
typedef struct PerformanceMark PerformanceMark;
typedef struct PerformanceMarkOptions PerformanceMarkOptions;
typedef struct PerformanceMeasure PerformanceMeasure;


/**
 * @brief Interface Performance
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Performance)
 */
DECLARE_EMLITE_TYPE(Performance, EventTarget);

/**
 * @brief Calls the `now` method. 
*/
jb_Any Performance_now(Performance* self );

/**
 * @brief Gets the `timeOrigin` property. 
*/
jb_Any Performance_timeOrigin(const Performance *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object Performance_toJSON(Performance* self );

/**
 * @brief Gets the `eventCounts` property. 
*/
EventCounts Performance_eventCounts(const Performance *self);

/**
 * @brief Gets the `interactionCount` property. 
*/
long long Performance_interactionCount(const Performance *self);

/**
 * @brief Gets the `timing` property. 
*/
PerformanceTiming Performance_timing(const Performance *self);

/**
 * @brief Gets the `navigation` property. 
*/
PerformanceNavigation Performance_navigation(const Performance *self);

/**
 * @brief Calls the `measureUserAgentSpecificMemory` method. 
*/
jb_Promise Performance_measureUserAgentSpecificMemory(Performance* self );

/**
 * @brief Calls the `getEntries` method. 
*/
jb_Any Performance_getEntries(Performance* self );

/**
 * @brief Calls the `getEntriesByType` method. 
*/
jb_Any Performance_getEntriesByType(Performance* self , jb_String * type);

/**
 * @brief Calls the `getEntriesByName` method. 
*/
jb_Any Performance_getEntriesByName0(Performance* self , jb_String * name);

/**
 * @brief Calls the `getEntriesByName` method. 
*/
jb_Any Performance_getEntriesByName1(Performance* self , jb_String * name, jb_String * type);

/**
 * @brief Calls the `clearResourceTimings` method. 
*/
jb_Undefined Performance_clearResourceTimings(Performance* self );

/**
 * @brief Calls the `setResourceTimingBufferSize` method. 
*/
jb_Undefined Performance_setResourceTimingBufferSize(Performance* self , unsigned long maxSize);

/**
 * @brief Gets the `onresourcetimingbufferfull` property. 
*/
jb_Any Performance_onresourcetimingbufferfull(const Performance *self);

/**
 * @brief Sets the `onresourcetimingbufferfull` property. 
*/
void Performance_set_onresourcetimingbufferfull(Performance* self, jb_Any * value);

/**
 * @brief Calls the `mark` method. 
*/
PerformanceMark Performance_mark0(Performance* self , jb_String * markName);

/**
 * @brief Calls the `mark` method. 
*/
PerformanceMark Performance_mark1(Performance* self , jb_String * markName, PerformanceMarkOptions * markOptions);

/**
 * @brief Calls the `clearMarks` method. 
*/
jb_Undefined Performance_clearMarks0(Performance* self );

/**
 * @brief Calls the `clearMarks` method. 
*/
jb_Undefined Performance_clearMarks1(Performance* self , jb_String * markName);

/**
 * @brief Calls the `measure` method. 
*/
PerformanceMeasure Performance_measure0(Performance* self , jb_String * measureName);

/**
 * @brief Calls the `measure` method. 
*/
PerformanceMeasure Performance_measure1(Performance* self , jb_String * measureName, jb_Any * startOrMeasureOptions);

/**
 * @brief Calls the `measure` method. 
*/
PerformanceMeasure Performance_measure2(Performance* self , jb_String * measureName, jb_Any * startOrMeasureOptions, jb_String * endMark);

/**
 * @brief Calls the `clearMeasures` method. 
*/
jb_Undefined Performance_clearMeasures0(Performance* self );

/**
 * @brief Calls the `clearMeasures` method. 
*/
jb_Undefined Performance_clearMeasures1(Performance* self , jb_String * measureName);

#ifdef __cplusplus
}
#endif
