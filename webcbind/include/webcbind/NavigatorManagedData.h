#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NavigatorManagedData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData)
 */
DECLARE_EMLITE_TYPE(NavigatorManagedData, EventTarget);

/**
 * @brief Calls the `getManagedConfiguration` method. 
*/
jb_Promise NavigatorManagedData_getManagedConfiguration(NavigatorManagedData* self , jb_Array * keys);

/**
 * @brief Gets the `onmanagedconfigurationchange` property. 
*/
jb_Any NavigatorManagedData_onmanagedconfigurationchange(const NavigatorManagedData *self);

/**
 * @brief Sets the `onmanagedconfigurationchange` property. 
*/
void NavigatorManagedData_set_onmanagedconfigurationchange(NavigatorManagedData* self, jb_Any * value);

/**
 * @brief Calls the `getAnnotatedAssetId` method. 
*/
jb_Promise NavigatorManagedData_getAnnotatedAssetId(NavigatorManagedData* self );

/**
 * @brief Calls the `getAnnotatedLocation` method. 
*/
jb_Promise NavigatorManagedData_getAnnotatedLocation(NavigatorManagedData* self );

/**
 * @brief Calls the `getDirectoryId` method. 
*/
jb_Promise NavigatorManagedData_getDirectoryId(NavigatorManagedData* self );

/**
 * @brief Calls the `getHostname` method. 
*/
jb_Promise NavigatorManagedData_getHostname(NavigatorManagedData* self );

/**
 * @brief Calls the `getSerialNumber` method. 
*/
jb_Promise NavigatorManagedData_getSerialNumber(NavigatorManagedData* self );

#ifdef __cplusplus
}
#endif
