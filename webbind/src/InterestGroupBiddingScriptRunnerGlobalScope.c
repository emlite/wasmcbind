#include <webbind/InterestGroupBiddingScriptRunnerGlobalScope.h>

DEFINE_EMLITE_TYPE(InterestGroupBiddingScriptRunnerGlobalScope, InterestGroupBiddingAndScoringScriptRunnerGlobalScope);


bool InterestGroupBiddingScriptRunnerGlobalScope_setBid0(InterestGroupBiddingScriptRunnerGlobalScope* self ) {
    return em_Val_as(bool, em_Val_call(InterestGroupBiddingAndScoringScriptRunnerGlobalScope_as_val(self->inner), "setBid"));
}


bool InterestGroupBiddingScriptRunnerGlobalScope_setBid1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_Any * oneOrManyBids) {
    return em_Val_as(bool, em_Val_call(InterestGroupBiddingAndScoringScriptRunnerGlobalScope_as_val(self->inner), "setBid", em_Val_from(oneOrManyBids)));
}


jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPriority(InterestGroupBiddingScriptRunnerGlobalScope* self , double priority) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupBiddingAndScoringScriptRunnerGlobalScope_as_val(self->inner), "setPriority", em_Val_from(priority)));
}


jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride0(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_String * key) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupBiddingAndScoringScriptRunnerGlobalScope_as_val(self->inner), "setPrioritySignalsOverride", em_Val_from(key)));
}


jb_Undefined InterestGroupBiddingScriptRunnerGlobalScope_setPrioritySignalsOverride1(InterestGroupBiddingScriptRunnerGlobalScope* self , jb_String * key, double priority) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupBiddingAndScoringScriptRunnerGlobalScope_as_val(self->inner), "setPrioritySignalsOverride", em_Val_from(key), em_Val_from(priority)));
}

