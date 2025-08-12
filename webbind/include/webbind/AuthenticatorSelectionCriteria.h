#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticatorSelectionCriteria */
DECLARE_EMLITE_TYPE(AuthenticatorSelectionCriteria, em_Val);

/** @brief Getter of the authenticatorAttachment property */
jb_String AuthenticatorSelectionCriteria_authenticatorAttachment(const AuthenticatorSelectionCriteria *self);

/** @brief Setter of the authenticatorAttachment property */
void AuthenticatorSelectionCriteria_set_authenticatorAttachment(AuthenticatorSelectionCriteria* self, jb_String * value);

/** @brief Getter of the residentKey property */
jb_String AuthenticatorSelectionCriteria_residentKey(const AuthenticatorSelectionCriteria *self);

/** @brief Setter of the residentKey property */
void AuthenticatorSelectionCriteria_set_residentKey(AuthenticatorSelectionCriteria* self, jb_String * value);

/** @brief Getter of the requireResidentKey property */
bool AuthenticatorSelectionCriteria_requireResidentKey(const AuthenticatorSelectionCriteria *self);

/** @brief Setter of the requireResidentKey property */
void AuthenticatorSelectionCriteria_set_requireResidentKey(AuthenticatorSelectionCriteria* self, bool value);

/** @brief Getter of the userVerification property */
jb_String AuthenticatorSelectionCriteria_userVerification(const AuthenticatorSelectionCriteria *self);

/** @brief Setter of the userVerification property */
void AuthenticatorSelectionCriteria_set_userVerification(AuthenticatorSelectionCriteria* self, jb_String * value);

/** @brief Constructor of the AuthenticatorSelectionCriteria dictionary type */
AuthenticatorSelectionCriteria AuthenticatorSelectionCriteria_new();

#ifdef __cplusplus
}
#endif
