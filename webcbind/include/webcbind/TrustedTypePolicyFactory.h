#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TrustedTypePolicy TrustedTypePolicy;
typedef struct TrustedTypePolicyOptions TrustedTypePolicyOptions;
typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;


/**
 * @brief Interface TrustedTypePolicyFactory
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory)
 */
DECLARE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);

/**
 * @brief Calls the `createPolicy` method. 
*/
TrustedTypePolicy TrustedTypePolicyFactory_createPolicy0(TrustedTypePolicyFactory* self , jb_String * policyName);

/**
 * @brief Calls the `createPolicy` method. 
*/
TrustedTypePolicy TrustedTypePolicyFactory_createPolicy1(TrustedTypePolicyFactory* self , jb_String * policyName, TrustedTypePolicyOptions * policyOptions);

/**
 * @brief Calls the `isHTML` method. 
*/
bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , jb_Any * value);

/**
 * @brief Calls the `isScript` method. 
*/
bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , jb_Any * value);

/**
 * @brief Calls the `isScriptURL` method. 
*/
bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , jb_Any * value);

/**
 * @brief Gets the `emptyHTML` property. 
*/
TrustedHTML TrustedTypePolicyFactory_emptyHTML(const TrustedTypePolicyFactory *self);

/**
 * @brief Gets the `emptyScript` property. 
*/
TrustedScript TrustedTypePolicyFactory_emptyScript(const TrustedTypePolicyFactory *self);

/**
 * @brief Calls the `getAttributeType` method. 
*/
jb_String TrustedTypePolicyFactory_getAttributeType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute);

/**
 * @brief Calls the `getAttributeType` method. 
*/
jb_String TrustedTypePolicyFactory_getAttributeType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs);

/**
 * @brief Calls the `getAttributeType` method. 
*/
jb_String TrustedTypePolicyFactory_getAttributeType2(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs, jb_String * attrNs);

/**
 * @brief Calls the `getPropertyType` method. 
*/
jb_String TrustedTypePolicyFactory_getPropertyType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property);

/**
 * @brief Calls the `getPropertyType` method. 
*/
jb_String TrustedTypePolicyFactory_getPropertyType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property, jb_String * elementNs);

/**
 * @brief Gets the `defaultPolicy` property. 
*/
TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy(const TrustedTypePolicyFactory *self);

#ifdef __cplusplus
}
#endif
