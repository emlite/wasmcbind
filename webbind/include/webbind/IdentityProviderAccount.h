#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderAccount, em_Val);

jb_String IdentityProviderAccount_id(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_id(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_name(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_name(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_email(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_email(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_tel(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_tel(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_username(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_username(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_given_name(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_given_name(IdentityProviderAccount* self, jb_String * value);

jb_String IdentityProviderAccount_picture(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_picture(IdentityProviderAccount* self, jb_String * value);

jb_Array IdentityProviderAccount_approved_clients(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_approved_clients(IdentityProviderAccount* self, jb_Array * value);

jb_Array IdentityProviderAccount_login_hints(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_login_hints(IdentityProviderAccount* self, jb_Array * value);

jb_Array IdentityProviderAccount_domain_hints(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_domain_hints(IdentityProviderAccount* self, jb_Array * value);

jb_Array IdentityProviderAccount_label_hints(const IdentityProviderAccount *self);

void IdentityProviderAccount_set_label_hints(IdentityProviderAccount* self, jb_Array * value);

IdentityProviderAccount IdentityProviderAccount_new();

#ifdef __cplusplus
}
#endif
