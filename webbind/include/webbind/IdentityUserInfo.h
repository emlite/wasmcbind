#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityUserInfo, em_Val);

jb_String IdentityUserInfo_email(const IdentityUserInfo *self);

void IdentityUserInfo_set_email(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_name(const IdentityUserInfo *self);

void IdentityUserInfo_set_name(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_givenName(const IdentityUserInfo *self);

void IdentityUserInfo_set_givenName(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_picture(const IdentityUserInfo *self);

void IdentityUserInfo_set_picture(IdentityUserInfo* self, jb_String * value);

IdentityUserInfo IdentityUserInfo_new();

#ifdef __cplusplus
}
#endif
