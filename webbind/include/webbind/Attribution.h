#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AttributionAggregationServices AttributionAggregationServices;
typedef struct AttributionImpressionResult AttributionImpressionResult;
typedef struct AttributionImpressionOptions AttributionImpressionOptions;
typedef struct AttributionConversionResult AttributionConversionResult;
typedef struct AttributionConversionOptions AttributionConversionOptions;


/**
 * @brief Interface Attribution
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Attribution)
 */
DECLARE_EMLITE_TYPE(Attribution, em_Val);

/**
 * @brief Gets the `aggregationServices` property. 
*/
AttributionAggregationServices Attribution_aggregationServices(const Attribution *self);

/**
 * @brief Calls the `saveImpression` method. 
*/
jb_Promise Attribution_saveImpression(Attribution* self , AttributionImpressionOptions * options);

/**
 * @brief Calls the `measureConversion` method. 
*/
jb_Promise Attribution_measureConversion(Attribution* self , AttributionConversionOptions * options);

#ifdef __cplusplus
}
#endif
