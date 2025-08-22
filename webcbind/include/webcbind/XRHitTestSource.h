#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRHitTestSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestSource)
 */
DECLARE_EMLITE_TYPE(XRHitTestSource, em_Val);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Undefined XRHitTestSource_cancel(XRHitTestSource* self );

#ifdef __cplusplus
}
#endif
