#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PAHistogramContribution PAHistogramContribution;
typedef struct PADebugModeOptions PADebugModeOptions;


/**
 * @brief Interface PrivateAggregation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAggregation)
 */
DECLARE_EMLITE_TYPE(PrivateAggregation, em_Val);

/**
 * @brief Calls the `contributeToHistogram` method. 
*/
jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , PAHistogramContribution * contribution);

/**
 * @brief Calls the `contributeToHistogramOnEvent` method. 
*/
jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , jb_String * event, jb_Object * contribution);

/**
 * @brief Calls the `enableDebugMode` method. 
*/
jb_Undefined PrivateAggregation_enableDebugMode0(PrivateAggregation* self );

/**
 * @brief Calls the `enableDebugMode` method. 
*/
jb_Undefined PrivateAggregation_enableDebugMode1(PrivateAggregation* self , PADebugModeOptions * options);

#ifdef __cplusplus
}
#endif
