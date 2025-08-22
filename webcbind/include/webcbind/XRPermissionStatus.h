#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionStatus.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRPermissionStatus
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRPermissionStatus)
 */
DECLARE_EMLITE_TYPE(XRPermissionStatus, PermissionStatus);

/**
 * @brief Gets the `granted` property. 
*/
jb_Array XRPermissionStatus_granted(const XRPermissionStatus *self);

/**
 * @brief Sets the `granted` property. 
*/
void XRPermissionStatus_set_granted(XRPermissionStatus* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
