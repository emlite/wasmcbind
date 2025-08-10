#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIdentityProvider RTCIdentityProvider;

DECLARE_EMLITE_TYPE(RTCIdentityProviderRegistrar, em_Val);

jb_Undefined RTCIdentityProviderRegistrar_register_(RTCIdentityProviderRegistrar* self , RTCIdentityProvider * idp);

#ifdef __cplusplus
}
#endif
