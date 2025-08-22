#include <webcbind/PublicKeyCredential.h>

#include <webcbind/AuthenticatorResponse.h>
#include <webcbind/AuthenticationExtensionsClientOutputs.h>
#include <webcbind/PublicKeyCredentialCreationOptions.h>
#include <webcbind/PublicKeyCredentialCreationOptionsJSON.h>
#include <webcbind/PublicKeyCredentialRequestOptions.h>
#include <webcbind/PublicKeyCredentialRequestOptionsJSON.h>
#include <webcbind/UnknownCredentialOptions.h>
#include <webcbind/AllAcceptedCredentialsOptions.h>
#include <webcbind/CurrentUserDetailsOptions.h>

DEFINE_EMLITE_TYPE(PublicKeyCredential, Credential);


jb_ArrayBuffer PublicKeyCredential_rawId(const PublicKeyCredential *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Credential_as_val(self->inner), em_Val_from("rawId")));
}


AuthenticatorResponse PublicKeyCredential_response(const PublicKeyCredential *self) {
    return em_Val_as(AuthenticatorResponse, em_Val_get(Credential_as_val(self->inner), em_Val_from("response")));
}


jb_String PublicKeyCredential_authenticatorAttachment(const PublicKeyCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("authenticatorAttachment")));
}


AuthenticationExtensionsClientOutputs PublicKeyCredential_getClientExtensionResults(PublicKeyCredential* self ) {
    return em_Val_as(AuthenticationExtensionsClientOutputs, em_Val_call(Credential_as_val(self->inner), "getClientExtensionResults"));
}


jb_Promise PublicKeyCredential_isConditionalMediationAvailable(PublicKeyCredential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "isConditionalMediationAvailable"));
}


jb_Any PublicKeyCredential_toJSON(PublicKeyCredential* self ) {
    return em_Val_as(jb_Any, em_Val_call(Credential_as_val(self->inner), "toJSON"));
}


jb_Promise PublicKeyCredential_isUserVerifyingPlatformAuthenticatorAvailable(PublicKeyCredential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "isUserVerifyingPlatformAuthenticatorAvailable"));
}


jb_Promise PublicKeyCredential_getClientCapabilities(PublicKeyCredential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "getClientCapabilities"));
}


PublicKeyCredentialCreationOptions PublicKeyCredential_parseCreationOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialCreationOptionsJSON * options) {
    return em_Val_as(PublicKeyCredentialCreationOptions, em_Val_call(em_Val_global("publickeycredential"), "parseCreationOptionsFromJSON", em_Val_from(options)));
}


PublicKeyCredentialRequestOptions PublicKeyCredential_parseRequestOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialRequestOptionsJSON * options) {
    return em_Val_as(PublicKeyCredentialRequestOptions, em_Val_call(em_Val_global("publickeycredential"), "parseRequestOptionsFromJSON", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalUnknownCredential(PublicKeyCredential* self , UnknownCredentialOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalUnknownCredential", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalAllAcceptedCredentials(PublicKeyCredential* self , AllAcceptedCredentialsOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalAllAcceptedCredentials", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalCurrentUserDetails(PublicKeyCredential* self , CurrentUserDetailsOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalCurrentUserDetails", em_Val_from(options)));
}

