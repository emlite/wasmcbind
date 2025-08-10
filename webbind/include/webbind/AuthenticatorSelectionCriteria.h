#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticatorSelectionCriteria, em_Val);

jb_String AuthenticatorSelectionCriteria_authenticatorAttachment(const AuthenticatorSelectionCriteria *self);

void AuthenticatorSelectionCriteria_set_authenticatorAttachment(AuthenticatorSelectionCriteria* self, jb_String * value);

jb_String AuthenticatorSelectionCriteria_residentKey(const AuthenticatorSelectionCriteria *self);

void AuthenticatorSelectionCriteria_set_residentKey(AuthenticatorSelectionCriteria* self, jb_String * value);

bool AuthenticatorSelectionCriteria_requireResidentKey(const AuthenticatorSelectionCriteria *self);

void AuthenticatorSelectionCriteria_set_requireResidentKey(AuthenticatorSelectionCriteria* self, bool value);

jb_String AuthenticatorSelectionCriteria_userVerification(const AuthenticatorSelectionCriteria *self);

void AuthenticatorSelectionCriteria_set_userVerification(AuthenticatorSelectionCriteria* self, jb_String * value);

AuthenticatorSelectionCriteria AuthenticatorSelectionCriteria_new();

#ifdef __cplusplus
}
#endif
