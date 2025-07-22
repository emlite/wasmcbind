#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupScriptRunnerGlobalScope.h"
#include "enums.h"

typedef struct ForDebuggingOnly ForDebuggingOnly;
typedef struct RealTimeReporting RealTimeReporting;


typedef struct {
  InterestGroupScriptRunnerGlobalScope inner;
} InterestGroupBiddingAndScoringScriptRunnerGlobalScope;


DECLARE_EMLITE_TYPE(InterestGroupBiddingAndScoringScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope_forDebuggingOnly( const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);

RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope_realTimeReporting( const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);
