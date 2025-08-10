#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RealTimeContribution RealTimeContribution;

DECLARE_EMLITE_TYPE(RealTimeReporting, em_Val);

jb_Undefined RealTimeReporting_contributeToHistogram(RealTimeReporting* self , RealTimeContribution * contribution);

#ifdef __cplusplus
}
#endif
