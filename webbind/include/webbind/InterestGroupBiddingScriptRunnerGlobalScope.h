#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface InterestGroupBiddingScriptRunnerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope)
 */
DECLARE_EMLITE_TYPE(InterestGroupBiddingScriptRunnerGlobalScope, InterestGroupBiddingAndScoringScriptRunnerGlobalScope);

/**
 * @brief Calls the `setBid` method. 
*/
bool InterestGroupBiddingScriptRunnerGlobalScope_setBid0(InterestGroupBiddingScriptRunnerGlobalScope* self );

/**
 * @brief Calls the `setBid` method. 
*/
bool InterestGroupBiddingScriptRunnerGlobalScope_setBid1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_Any * oneOrManyBids);

/**
 * @brief Calls the `setPriority` method. 
*/
jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPriority(InterestGroupBiddingScriptRunnerGlobalScope* self , double priority);

/**
 * @brief Calls the `setPrioritySignalsOverride` method. 
*/
jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride0(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_String * key);

/**
 * @brief Calls the `setPrioritySignalsOverride` method. 
*/
jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_String * key, double priority);

#ifdef __cplusplus
}
#endif
