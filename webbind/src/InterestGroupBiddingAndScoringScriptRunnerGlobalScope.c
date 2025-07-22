#include <webbind/InterestGroupBiddingAndScoringScriptRunnerGlobalScope.h>
#include <webbind/ForDebuggingOnly.h>
#include <webbind/RealTimeReporting.h>


DEFINE_EMLITE_TYPE(InterestGroupBiddingAndScoringScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);


ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope_forDebuggingOnly(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self) {
    return em_Val_as(ForDebuggingOnly, em_Val_get(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), "forDebuggingOnly"));
}


RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope_realTimeReporting(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self) {
    return em_Val_as(RealTimeReporting, em_Val_get(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), "realTimeReporting"));
}

