#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSource XRInputSource;


/**
 * @brief Interface XRInputSourceArray
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceArray)
 */
DECLARE_EMLITE_TYPE(XRInputSourceArray, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long XRInputSourceArray_length(const XRInputSourceArray *self);

#ifdef __cplusplus
}
#endif
