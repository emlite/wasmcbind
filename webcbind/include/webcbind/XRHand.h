#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRJointSpace XRJointSpace;


/**
 * @brief Interface XRHand
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRHand)
 */
DECLARE_EMLITE_TYPE(XRHand, em_Val);

/**
 * @brief Gets the `size` property. 
*/
unsigned long XRHand_size(const XRHand *self);

/**
 * @brief Calls the `get` method. 
*/
XRJointSpace XRHand_get(XRHand* self , XRHandJoint * key);

#ifdef __cplusplus
}
#endif
