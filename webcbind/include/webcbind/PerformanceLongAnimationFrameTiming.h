#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PerformanceScriptTiming PerformanceScriptTiming;


/**
 * @brief Interface PerformanceLongAnimationFrameTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceLongAnimationFrameTiming, PerformanceEntry);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_startTime(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_duration(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PerformanceLongAnimationFrameTiming_name(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String PerformanceLongAnimationFrameTiming_entryType(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `renderStart` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_renderStart(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `styleAndLayoutStart` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_styleAndLayoutStart(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `blockingDuration` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_blockingDuration(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `firstUIEventTimestamp` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_firstUIEventTimestamp(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `scripts` property. 
*/
jb_Array PerformanceLongAnimationFrameTiming_scripts(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceLongAnimationFrameTiming_toJSON(PerformanceLongAnimationFrameTiming* self );

/**
 * @brief Gets the `paintTime` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_paintTime(const PerformanceLongAnimationFrameTiming *self);

/**
 * @brief Gets the `presentationTime` property. 
*/
jb_Any PerformanceLongAnimationFrameTiming_presentationTime(const PerformanceLongAnimationFrameTiming *self);

#ifdef __cplusplus
}
#endif
