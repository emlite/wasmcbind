#include <webbind/IdentityProvider.h>

#include <webbind/IdentityResolveOptions.h>
#include <webbind/IdentityUserInfo.h>
#include <webbind/IdentityProviderConfig.h>

DEFINE_EMLITE_TYPE(IdentityProvider, em_Val);


jb_Undefined IdentityProvider_close(IdentityProvider* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("identityprovider"), "close"));
}


jb_Promise IdentityProvider_resolve0(IdentityProvider* self , jb_String * token) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "resolve", em_Val_from(token)));
}


jb_Promise IdentityProvider_resolve1(IdentityProvider* self , jb_String * token, IdentityResolveOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "resolve", em_Val_from(token), em_Val_from(options)));
}


jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , IdentityProviderConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identityprovider"), "getUserInfo", em_Val_from(config)));
}

