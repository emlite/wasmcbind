#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PasswordCredentialData PasswordCredentialData;

DECLARE_EMLITE_TYPE(PasswordCredential, Credential);

PasswordCredential PasswordCredential_new(PasswordCredentialData * data);

jb_String PasswordCredential_password(const PasswordCredential *self);

jb_String PasswordCredential_name(const PasswordCredential *self);

jb_String PasswordCredential_iconURL(const PasswordCredential *self);

#ifdef __cplusplus
}
#endif
