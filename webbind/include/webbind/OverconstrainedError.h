#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface OverconstrainedError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OverconstrainedError)
 */
DECLARE_EMLITE_TYPE(OverconstrainedError, DOMException);

/**
 * @brief Creates a new `OverconstrainedError` object. 
*/
OverconstrainedError OverconstrainedError_new0(jb_String * constraint);

/**
 * @brief Creates a new `OverconstrainedError` object. 
*/
OverconstrainedError OverconstrainedError_new1(jb_String * constraint, jb_String * message);

/**
 * @brief Gets the `constraint` property. 
*/
jb_String OverconstrainedError_constraint(const OverconstrainedError *self);

#ifdef __cplusplus
}
#endif
