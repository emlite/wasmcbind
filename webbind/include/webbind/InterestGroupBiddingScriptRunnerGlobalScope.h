#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.h"
#include "enums.h"


typedef struct {
  InterestGroupBiddingAndScoringScriptRunnerGlobalScope inner;
} InterestGroupBiddingScriptRunnerGlobalScope;


DECLARE_EMLITE_TYPE(InterestGroupBiddingScriptRunnerGlobalScope, InterestGroupBiddingAndScoringScriptRunnerGlobalScope);

bool InterestGroupBiddingScriptRunnerGlobalScope_setBid(InterestGroupBiddingScriptRunnerGlobalScope* self );

bool InterestGroupBiddingScriptRunnerGlobalScope_setBid(InterestGroupBiddingScriptRunnerGlobalScope* self , const jb_Any* oneOrManyBids);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPriority(InterestGroupBiddingScriptRunnerGlobalScope* self , double priority);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride(InterestGroupBiddingScriptRunnerGlobalScope* self , const jb_DOMString* key);

jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride(InterestGroupBiddingScriptRunnerGlobalScope* self , const jb_DOMString* key, double priority);
