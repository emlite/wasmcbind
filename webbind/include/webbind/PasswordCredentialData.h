#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CredentialData.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PasswordCredentialData */
DECLARE_EMLITE_TYPE(PasswordCredentialData, CredentialData);

/** @brief Getter of the name property */
jb_String PasswordCredentialData_name(const PasswordCredentialData *self);

/** @brief Setter of the name property */
void PasswordCredentialData_set_name(PasswordCredentialData* self, jb_String * value);

/** @brief Getter of the iconURL property */
jb_String PasswordCredentialData_iconURL(const PasswordCredentialData *self);

/** @brief Setter of the iconURL property */
void PasswordCredentialData_set_iconURL(PasswordCredentialData* self, jb_String * value);

/** @brief Getter of the origin property */
jb_String PasswordCredentialData_origin(const PasswordCredentialData *self);

/** @brief Setter of the origin property */
void PasswordCredentialData_set_origin(PasswordCredentialData* self, jb_String * value);

/** @brief Getter of the password property */
jb_String PasswordCredentialData_password(const PasswordCredentialData *self);

/** @brief Setter of the password property */
void PasswordCredentialData_set_password(PasswordCredentialData* self, jb_String * value);

/** @brief Constructor of the PasswordCredentialData dictionary type */
PasswordCredentialData PasswordCredentialData_new();

#ifdef __cplusplus
}
#endif
