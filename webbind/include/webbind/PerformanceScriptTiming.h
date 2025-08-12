#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;


/**
 * @brief Interface PerformanceScriptTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceScriptTiming, PerformanceEntry);

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any PerformanceScriptTiming_startTime(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any PerformanceScriptTiming_duration(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PerformanceScriptTiming_name(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `entryType` property. 
*/
jb_String PerformanceScriptTiming_entryType(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `invokerType` property. 
*/
ScriptInvokerType PerformanceScriptTiming_invokerType(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `invoker` property. 
*/
jb_String PerformanceScriptTiming_invoker(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `executionStart` property. 
*/
jb_Any PerformanceScriptTiming_executionStart(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `sourceURL` property. 
*/
jb_String PerformanceScriptTiming_sourceURL(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `sourceFunctionName` property. 
*/
jb_String PerformanceScriptTiming_sourceFunctionName(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `sourceCharPosition` property. 
*/
long long PerformanceScriptTiming_sourceCharPosition(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `pauseDuration` property. 
*/
jb_Any PerformanceScriptTiming_pauseDuration(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `forcedStyleAndLayoutDuration` property. 
*/
jb_Any PerformanceScriptTiming_forcedStyleAndLayoutDuration(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `window` property. 
*/
Window PerformanceScriptTiming_window(const PerformanceScriptTiming *self);

/**
 * @brief Gets the `windowAttribution` property. 
*/
ScriptWindowAttribution PerformanceScriptTiming_windowAttribution(const PerformanceScriptTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceScriptTiming_toJSON(PerformanceScriptTiming* self );

#ifdef __cplusplus
}
#endif
