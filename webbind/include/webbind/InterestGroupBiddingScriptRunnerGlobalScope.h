#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(InterestGroupBiddingScriptRunnerGlobalScope, InterestGroupBiddingAndScoringScriptRunnerGlobalScope);

bool InterestGroupBiddingScriptRunnerGlobalScope_setBid0(InterestGroupBiddingScriptRunnerGlobalScope* self );

bool InterestGroupBiddingScriptRunnerGlobalScope_setBid1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_Any * oneOrManyBids);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPriority(InterestGroupBiddingScriptRunnerGlobalScope* self , double priority);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride0(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_DOMString * key);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_DOMString * key, double priority);
