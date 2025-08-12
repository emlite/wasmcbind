#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IdleDeadline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IdleDeadline)
 */
DECLARE_EMLITE_TYPE(IdleDeadline, em_Val);

/**
 * @brief Calls the `timeRemaining` method. 
*/
jb_Any IdleDeadline_timeRemaining(IdleDeadline* self );

/**
 * @brief Gets the `didTimeout` property. 
*/
bool IdleDeadline_didTimeout(const IdleDeadline *self);

#ifdef __cplusplus
}
#endif
