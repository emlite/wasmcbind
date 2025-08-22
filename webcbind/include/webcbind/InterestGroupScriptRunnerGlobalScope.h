#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PrivateAggregation PrivateAggregation;
typedef struct ProtectedAudienceUtilities ProtectedAudienceUtilities;


/**
 * @brief Interface InterestGroupScriptRunnerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope)
 */
DECLARE_EMLITE_TYPE(InterestGroupScriptRunnerGlobalScope, em_Val);

/**
 * @brief Gets the `privateAggregation` property. 
*/
PrivateAggregation InterestGroupScriptRunnerGlobalScope_privateAggregation(const InterestGroupScriptRunnerGlobalScope *self);

/**
 * @brief Gets the `protectedAudience` property. 
*/
ProtectedAudienceUtilities InterestGroupScriptRunnerGlobalScope_protectedAudience(const InterestGroupScriptRunnerGlobalScope *self);

#ifdef __cplusplus
}
#endif
