#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BarProp
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BarProp)
 */
DECLARE_EMLITE_TYPE(BarProp, em_Val);

/**
 * @brief Gets the `visible` property. 
*/
bool BarProp_visible(const BarProp *self);

#ifdef __cplusplus
}
#endif
