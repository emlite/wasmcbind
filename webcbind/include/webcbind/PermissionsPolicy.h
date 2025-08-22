#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PermissionsPolicy
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy)
 */
DECLARE_EMLITE_TYPE(PermissionsPolicy, em_Val);

/**
 * @brief Calls the `allowsFeature` method. 
*/
bool PermissionsPolicy_allowsFeature0(PermissionsPolicy* self , jb_String * feature);

/**
 * @brief Calls the `allowsFeature` method. 
*/
bool PermissionsPolicy_allowsFeature1(PermissionsPolicy* self , jb_String * feature, jb_String * origin);

/**
 * @brief Calls the `features` method. 
*/
jb_Array PermissionsPolicy_features(PermissionsPolicy* self );

/**
 * @brief Calls the `allowedFeatures` method. 
*/
jb_Array PermissionsPolicy_allowedFeatures(PermissionsPolicy* self );

/**
 * @brief Calls the `getAllowlistForFeature` method. 
*/
jb_Array PermissionsPolicy_getAllowlistForFeature(PermissionsPolicy* self , jb_String * feature);

#ifdef __cplusplus
}
#endif
