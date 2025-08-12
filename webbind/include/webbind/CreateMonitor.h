#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CreateMonitor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CreateMonitor)
 */
DECLARE_EMLITE_TYPE(CreateMonitor, EventTarget);

/**
 * @brief Gets the `ondownloadprogress` property. 
*/
jb_Any CreateMonitor_ondownloadprogress(const CreateMonitor *self);

/**
 * @brief Sets the `ondownloadprogress` property. 
*/
void CreateMonitor_set_ondownloadprogress(CreateMonitor* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
