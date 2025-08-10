#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Credential Credential;
typedef struct CredentialRequestOptions CredentialRequestOptions;
typedef struct CredentialCreationOptions CredentialCreationOptions;

DECLARE_EMLITE_TYPE(CredentialsContainer, em_Val);

jb_Promise CredentialsContainer_get0(CredentialsContainer* self );

jb_Promise CredentialsContainer_get1(CredentialsContainer* self , CredentialRequestOptions * options);

jb_Promise CredentialsContainer_store(CredentialsContainer* self , Credential * credential);

jb_Promise CredentialsContainer_create0(CredentialsContainer* self );

jb_Promise CredentialsContainer_create1(CredentialsContainer* self , CredentialCreationOptions * options);

jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self );

#ifdef __cplusplus
}
#endif
