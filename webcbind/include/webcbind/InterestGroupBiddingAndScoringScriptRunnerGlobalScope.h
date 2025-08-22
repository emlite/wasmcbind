#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "InterestGroupScriptRunnerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ForDebuggingOnly ForDebuggingOnly;
typedef struct RealTimeReporting RealTimeReporting;


/**
 * @brief Interface InterestGroupBiddingAndScoringScriptRunnerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope)
 */
DECLARE_EMLITE_TYPE(InterestGroupBiddingAndScoringScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

/**
 * @brief Gets the `forDebuggingOnly` property. 
*/
ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope_forDebuggingOnly(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);

/**
 * @brief Gets the `realTimeReporting` property. 
*/
RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope_realTimeReporting(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);

#ifdef __cplusplus
}
#endif
