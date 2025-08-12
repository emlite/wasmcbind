#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WakeLockSentinel
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel)
 */
DECLARE_EMLITE_TYPE(WakeLockSentinel, EventTarget);

/**
 * @brief Gets the `released` property. 
*/
bool WakeLockSentinel_released(const WakeLockSentinel *self);

/**
 * @brief Gets the `type` property. 
*/
WakeLockType WakeLockSentinel_type(const WakeLockSentinel *self);

/**
 * @brief Calls the `release` method. 
*/
jb_Promise WakeLockSentinel_release(WakeLockSentinel* self );

/**
 * @brief Gets the `onrelease` property. 
*/
jb_Any WakeLockSentinel_onrelease(const WakeLockSentinel *self);

/**
 * @brief Sets the `onrelease` property. 
*/
void WakeLockSentinel_set_onrelease(WakeLockSentinel* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
