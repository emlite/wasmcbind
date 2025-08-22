#include <webcbind/InterestGroupScriptRunnerGlobalScope.h>

#include <webcbind/PrivateAggregation.h>
#include <webcbind/ProtectedAudienceUtilities.h>

DEFINE_EMLITE_TYPE(InterestGroupScriptRunnerGlobalScope, em_Val);


PrivateAggregation InterestGroupScriptRunnerGlobalScope_privateAggregation(const InterestGroupScriptRunnerGlobalScope *self) {
    return em_Val_as(PrivateAggregation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregation")));
}


ProtectedAudienceUtilities InterestGroupScriptRunnerGlobalScope_protectedAudience(const InterestGroupScriptRunnerGlobalScope *self) {
    return em_Val_as(ProtectedAudienceUtilities, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protectedAudience")));
}

