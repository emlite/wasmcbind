#include <webbind/IdentityProvider.h>


DEFINE_EMLITE_TYPE(IdentityResolveOptions, em_Val);


jb_USVString IdentityResolveOptions_accountId(const IdentityResolveOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "accountId"));
}


void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "accountId", value);
}

DEFINE_EMLITE_TYPE(IdentityUserInfo, em_Val);


jb_USVString IdentityUserInfo_email(const IdentityUserInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "email"));
}


void IdentityUserInfo_set_email(IdentityUserInfo* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "email", value);
}


jb_USVString IdentityUserInfo_name(const IdentityUserInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void IdentityUserInfo_set_name(IdentityUserInfo* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_USVString IdentityUserInfo_givenName(const IdentityUserInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "givenName"));
}


void IdentityUserInfo_set_givenName(IdentityUserInfo* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "givenName", value);
}


jb_USVString IdentityUserInfo_picture(const IdentityUserInfo *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "picture"));
}


void IdentityUserInfo_set_picture(IdentityUserInfo* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "picture", value);
}

DEFINE_EMLITE_TYPE(IdentityProviderConfig, em_Val);


jb_USVString IdentityProviderConfig_configURL(const IdentityProviderConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "configURL"));
}


void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "configURL", value);
}


jb_USVString IdentityProviderConfig_clientId(const IdentityProviderConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "clientId"));
}


void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "clientId", value);
}

DEFINE_EMLITE_TYPE(IdentityProvider, em_Val);


jb_Undefined IdentityProvider_close(IdentityProvider* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("identityprovider"), "close"));
}


jb_Promise IdentityProvider_resolve(IdentityProvider* self , const jb_DOMString* token) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "resolve", em_Val_from(token)));
}


jb_Promise IdentityProvider_resolve(IdentityProvider* self , const jb_DOMString* token, const IdentityResolveOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "resolve", em_Val_from(token), em_Val_from(options)));
}


jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , const IdentityProviderConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "getUserInfo", em_Val_from(config)));
}

