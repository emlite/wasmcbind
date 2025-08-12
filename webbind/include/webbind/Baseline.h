#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Baseline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Baseline)
 */
DECLARE_EMLITE_TYPE(Baseline, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String Baseline_name(const Baseline *self);

/**
 * @brief Gets the `value` property. 
*/
double Baseline_value(const Baseline *self);

#ifdef __cplusplus
}
#endif
