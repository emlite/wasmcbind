#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PermissionStatus PermissionStatus;


/**
 * @brief Interface Permissions
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Permissions)
 */
DECLARE_EMLITE_TYPE(Permissions, em_Val);

/**
 * @brief Calls the `query` method. 
*/
jb_Promise Permissions_query(Permissions* self , jb_Object * permissionDesc);

/**
 * @brief Calls the `request` method. 
*/
jb_Promise Permissions_request(Permissions* self , jb_Object * permissionDesc);

/**
 * @brief Calls the `revoke` method. 
*/
jb_Promise Permissions_revoke(Permissions* self , jb_Object * permissionDesc);

#ifdef __cplusplus
}
#endif
