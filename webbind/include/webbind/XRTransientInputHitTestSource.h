#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRTransientInputHitTestSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestSource)
 */
DECLARE_EMLITE_TYPE(XRTransientInputHitTestSource, em_Val);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Undefined XRTransientInputHitTestSource_cancel(XRTransientInputHitTestSource* self );

#ifdef __cplusplus
}
#endif
