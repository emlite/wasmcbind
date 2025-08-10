#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PAHistogramContribution PAHistogramContribution;
typedef struct PADebugModeOptions PADebugModeOptions;

DECLARE_EMLITE_TYPE(PrivateAggregation, em_Val);

jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , PAHistogramContribution * contribution);

jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , jb_String * event, jb_Object * contribution);

jb_Undefined PrivateAggregation_enableDebugMode0(PrivateAggregation* self );

jb_Undefined PrivateAggregation_enableDebugMode1(PrivateAggregation* self , PADebugModeOptions * options);

#ifdef __cplusplus
}
#endif
