#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PrivateAggregation PrivateAggregation;
typedef struct ProtectedAudienceUtilities ProtectedAudienceUtilities;


typedef struct {
  em_Val inner;
} InterestGroupScriptRunnerGlobalScope;


DECLARE_EMLITE_TYPE(InterestGroupScriptRunnerGlobalScope, em_Val);

PrivateAggregation InterestGroupScriptRunnerGlobalScope_privateAggregation( const InterestGroupScriptRunnerGlobalScope *self);

ProtectedAudienceUtilities InterestGroupScriptRunnerGlobalScope_protectedAudience( const InterestGroupScriptRunnerGlobalScope *self);
