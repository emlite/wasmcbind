#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdentityResolveOptions IdentityResolveOptions;
typedef struct IdentityUserInfo IdentityUserInfo;
typedef struct IdentityProviderConfig IdentityProviderConfig;


/**
 * @brief Interface IdentityProvider
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider)
 */
DECLARE_EMLITE_TYPE(IdentityProvider, em_Val);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined IdentityProvider_close(IdentityProvider* self );

/**
 * @brief Calls the `resolve` method. 
*/
jb_Promise IdentityProvider_resolve0(IdentityProvider* self , jb_String * token);

/**
 * @brief Calls the `resolve` method. 
*/
jb_Promise IdentityProvider_resolve1(IdentityProvider* self , jb_String * token, IdentityResolveOptions * options);

/**
 * @brief Calls the `getUserInfo` method. 
*/
jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , IdentityProviderConfig * config);

#ifdef __cplusplus
}
#endif
