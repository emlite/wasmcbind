#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CredentialData.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PasswordCredentialData, CredentialData);

jb_String PasswordCredentialData_name(const PasswordCredentialData *self);

void PasswordCredentialData_set_name(PasswordCredentialData* self, jb_String * value);

jb_String PasswordCredentialData_iconURL(const PasswordCredentialData *self);

void PasswordCredentialData_set_iconURL(PasswordCredentialData* self, jb_String * value);

jb_String PasswordCredentialData_origin(const PasswordCredentialData *self);

void PasswordCredentialData_set_origin(PasswordCredentialData* self, jb_String * value);

jb_String PasswordCredentialData_password(const PasswordCredentialData *self);

void PasswordCredentialData_set_password(PasswordCredentialData* self, jb_String * value);

PasswordCredentialData PasswordCredentialData_new();

#ifdef __cplusplus
}
#endif
