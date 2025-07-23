#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IdentityResolveOptions IdentityResolveOptions;
typedef struct IdentityUserInfo IdentityUserInfo;
typedef struct IdentityProviderConfig IdentityProviderConfig;


DECLARE_EMLITE_TYPE(IdentityResolveOptions, em_Val);

jb_USVString IdentityResolveOptions_accountId(const IdentityResolveOptions *self);

void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, jb_USVString * value);
DECLARE_EMLITE_TYPE(IdentityUserInfo, em_Val);

jb_USVString IdentityUserInfo_email(const IdentityUserInfo *self);

void IdentityUserInfo_set_email(IdentityUserInfo* self, jb_USVString * value);

jb_USVString IdentityUserInfo_name(const IdentityUserInfo *self);

void IdentityUserInfo_set_name(IdentityUserInfo* self, jb_USVString * value);

jb_USVString IdentityUserInfo_givenName(const IdentityUserInfo *self);

void IdentityUserInfo_set_givenName(IdentityUserInfo* self, jb_USVString * value);

jb_USVString IdentityUserInfo_picture(const IdentityUserInfo *self);

void IdentityUserInfo_set_picture(IdentityUserInfo* self, jb_USVString * value);
DECLARE_EMLITE_TYPE(IdentityProviderConfig, em_Val);

jb_USVString IdentityProviderConfig_configURL(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, jb_USVString * value);

jb_USVString IdentityProviderConfig_clientId(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, jb_USVString * value);
DECLARE_EMLITE_TYPE(IdentityProvider, em_Val);

jb_Undefined IdentityProvider_close(IdentityProvider* self );

jb_Promise IdentityProvider_resolve0(IdentityProvider* self , jb_DOMString * token);

jb_Promise IdentityProvider_resolve1(IdentityProvider* self , jb_DOMString * token, IdentityResolveOptions * options);

jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , IdentityProviderConfig * config);
