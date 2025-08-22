#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PushSubscriptionOptions
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionOptions)
 */
DECLARE_EMLITE_TYPE(PushSubscriptionOptions, em_Val);

/**
 * @brief Gets the `userVisibleOnly` property. 
*/
bool PushSubscriptionOptions_userVisibleOnly(const PushSubscriptionOptions *self);

/**
 * @brief Gets the `applicationServerKey` property. 
*/
jb_ArrayBuffer PushSubscriptionOptions_applicationServerKey(const PushSubscriptionOptions *self);

#ifdef __cplusplus
}
#endif
