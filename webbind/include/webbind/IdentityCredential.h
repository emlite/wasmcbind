#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions;

DECLARE_EMLITE_TYPE(IdentityCredential, Credential);

jb_Promise IdentityCredential_disconnect(IdentityCredential* self , IdentityCredentialDisconnectOptions * options);

jb_String IdentityCredential_token(const IdentityCredential *self);

bool IdentityCredential_isAutoSelected(const IdentityCredential *self);

jb_String IdentityCredential_configURL(const IdentityCredential *self);

#ifdef __cplusplus
}
#endif
