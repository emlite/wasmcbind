#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderAccount */
DECLARE_EMLITE_TYPE(IdentityProviderAccount, em_Val);

/** @brief Getter of the id property */
jb_String IdentityProviderAccount_id(const IdentityProviderAccount *self);

/** @brief Setter of the id property */
void IdentityProviderAccount_set_id(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the name property */
jb_String IdentityProviderAccount_name(const IdentityProviderAccount *self);

/** @brief Setter of the name property */
void IdentityProviderAccount_set_name(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the email property */
jb_String IdentityProviderAccount_email(const IdentityProviderAccount *self);

/** @brief Setter of the email property */
void IdentityProviderAccount_set_email(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the tel property */
jb_String IdentityProviderAccount_tel(const IdentityProviderAccount *self);

/** @brief Setter of the tel property */
void IdentityProviderAccount_set_tel(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the username property */
jb_String IdentityProviderAccount_username(const IdentityProviderAccount *self);

/** @brief Setter of the username property */
void IdentityProviderAccount_set_username(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the given_name property */
jb_String IdentityProviderAccount_given_name(const IdentityProviderAccount *self);

/** @brief Setter of the given_name property */
void IdentityProviderAccount_set_given_name(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the picture property */
jb_String IdentityProviderAccount_picture(const IdentityProviderAccount *self);

/** @brief Setter of the picture property */
void IdentityProviderAccount_set_picture(IdentityProviderAccount* self, jb_String * value);

/** @brief Getter of the approved_clients property */
jb_Array IdentityProviderAccount_approved_clients(const IdentityProviderAccount *self);

/** @brief Setter of the approved_clients property */
void IdentityProviderAccount_set_approved_clients(IdentityProviderAccount* self, jb_Array * value);

/** @brief Getter of the login_hints property */
jb_Array IdentityProviderAccount_login_hints(const IdentityProviderAccount *self);

/** @brief Setter of the login_hints property */
void IdentityProviderAccount_set_login_hints(IdentityProviderAccount* self, jb_Array * value);

/** @brief Getter of the domain_hints property */
jb_Array IdentityProviderAccount_domain_hints(const IdentityProviderAccount *self);

/** @brief Setter of the domain_hints property */
void IdentityProviderAccount_set_domain_hints(IdentityProviderAccount* self, jb_Array * value);

/** @brief Getter of the label_hints property */
jb_Array IdentityProviderAccount_label_hints(const IdentityProviderAccount *self);

/** @brief Setter of the label_hints property */
void IdentityProviderAccount_set_label_hints(IdentityProviderAccount* self, jb_Array * value);

/** @brief Constructor of the IdentityProviderAccount dictionary type */
IdentityProviderAccount IdentityProviderAccount_new();

#ifdef __cplusplus
}
#endif
