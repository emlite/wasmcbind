#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityUserInfo */
DECLARE_EMLITE_TYPE(IdentityUserInfo, em_Val);

/** @brief Getter of the email property */
jb_String IdentityUserInfo_email(const IdentityUserInfo *self);

/** @brief Setter of the email property */
void IdentityUserInfo_set_email(IdentityUserInfo* self, jb_String * value);

/** @brief Getter of the name property */
jb_String IdentityUserInfo_name(const IdentityUserInfo *self);

/** @brief Setter of the name property */
void IdentityUserInfo_set_name(IdentityUserInfo* self, jb_String * value);

/** @brief Getter of the givenName property */
jb_String IdentityUserInfo_givenName(const IdentityUserInfo *self);

/** @brief Setter of the givenName property */
void IdentityUserInfo_set_givenName(IdentityUserInfo* self, jb_String * value);

/** @brief Getter of the picture property */
jb_String IdentityUserInfo_picture(const IdentityUserInfo *self);

/** @brief Setter of the picture property */
void IdentityUserInfo_set_picture(IdentityUserInfo* self, jb_String * value);

/** @brief Constructor of the IdentityUserInfo dictionary type */
IdentityUserInfo IdentityUserInfo_new();

#ifdef __cplusplus
}
#endif
