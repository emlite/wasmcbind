#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "InterestGroupScriptRunnerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface InterestGroupReportingScriptRunnerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupReportingScriptRunnerGlobalScope)
 */
DECLARE_EMLITE_TYPE(InterestGroupReportingScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

/**
 * @brief Calls the `sendReportTo` method. 
*/
jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_sendReportTo(InterestGroupReportingScriptRunnerGlobalScope* self , jb_String * url);

/**
 * @brief Calls the `registerAdBeacon` method. 
*/
jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdBeacon(InterestGroupReportingScriptRunnerGlobalScope* self , jb_Object * map);

/**
 * @brief Calls the `registerAdMacro` method. 
*/
jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdMacro(InterestGroupReportingScriptRunnerGlobalScope* self , jb_String * name, jb_String * value);

#ifdef __cplusplus
}
#endif
