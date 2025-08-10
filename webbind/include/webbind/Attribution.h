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

DECLARE_EMLITE_TYPE(Attribution, em_Val);

AttributionAggregationServices Attribution_aggregationServices(const Attribution *self);

jb_Promise Attribution_saveImpression(Attribution* self , AttributionImpressionOptions * options);

jb_Promise Attribution_measureConversion(Attribution* self , AttributionConversionOptions * options);

#ifdef __cplusplus
}
#endif
