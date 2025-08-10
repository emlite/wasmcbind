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

DECLARE_EMLITE_TYPE(IdentityProvider, em_Val);

jb_Undefined IdentityProvider_close(IdentityProvider* self );

jb_Promise IdentityProvider_resolve0(IdentityProvider* self , jb_String * token);

jb_Promise IdentityProvider_resolve1(IdentityProvider* self , jb_String * token, IdentityResolveOptions * options);

jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , IdentityProviderConfig * config);

#ifdef __cplusplus
}
#endif
