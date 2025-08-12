#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RealTimeContribution RealTimeContribution;


/**
 * @brief Interface RealTimeReporting
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeReporting)
 */
DECLARE_EMLITE_TYPE(RealTimeReporting, em_Val);

/**
 * @brief Calls the `contributeToHistogram` method. 
*/
jb_Undefined RealTimeReporting_contributeToHistogram(RealTimeReporting* self , RealTimeContribution * contribution);

#ifdef __cplusplus
}
#endif
