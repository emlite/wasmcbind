#include <webcbind/InterestGroupBiddingAndScoringScriptRunnerGlobalScope.h>

#include <webcbind/ForDebuggingOnly.h>
#include <webcbind/RealTimeReporting.h>

DEFINE_EMLITE_TYPE(InterestGroupBiddingAndScoringScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);


ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope_forDebuggingOnly(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self) {
    return em_Val_as(ForDebuggingOnly, em_Val_get(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), em_Val_from("forDebuggingOnly")));
}


RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope_realTimeReporting(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self) {
    return em_Val_as(RealTimeReporting, em_Val_get(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), em_Val_from("realTimeReporting")));
}

