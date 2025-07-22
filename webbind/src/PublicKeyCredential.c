#include <webbind/PublicKeyCredential.h>
#include <webbind/AuthenticatorResponse.h>


DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientOutputs, em_Val);


jb_Any AuthenticationExtensionsClientOutputs_largeBlob(const AuthenticationExtensionsClientOutputs *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("largeBlob")));
}


void AuthenticationExtensionsClientOutputs_set_largeBlob(AuthenticationExtensionsClientOutputs* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("largeBlob"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptions, em_Val);


jb_Any PublicKeyCredentialCreationOptions_rp(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rp")));
}


void PublicKeyCredentialCreationOptions_set_rp(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rp"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptions_user(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("user")));
}


void PublicKeyCredentialCreationOptions_set_user(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("user"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptions_challenge(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialCreationOptions_set_challenge(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptions_pubKeyCredParams(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams")));
}


void PublicKeyCredentialCreationOptions_set_pubKeyCredParams(PublicKeyCredentialCreationOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams"), em_Val_from(value));
}


unsigned long PublicKeyCredentialCreationOptions_timeout(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialCreationOptions_set_timeout(PublicKeyCredentialCreationOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptions_excludeCredentials(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("excludeCredentials")));
}


void PublicKeyCredentialCreationOptions_set_excludeCredentials(PublicKeyCredentialCreationOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("excludeCredentials"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptions_authenticatorSelection(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection")));
}


void PublicKeyCredentialCreationOptions_set_authenticatorSelection(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptions_hints(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialCreationOptions_set_hints(PublicKeyCredentialCreationOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialCreationOptions_attestation(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestation")));
}


void PublicKeyCredentialCreationOptions_set_attestation(PublicKeyCredentialCreationOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestation"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptions_attestationFormats(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestationFormats")));
}


void PublicKeyCredentialCreationOptions_set_attestationFormats(PublicKeyCredentialCreationOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestationFormats"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptions_extensions(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialCreationOptions_set_extensions(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptionsJSON, em_Val);


jb_Any PublicKeyCredentialCreationOptionsJSON_rp(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rp")));
}


void PublicKeyCredentialCreationOptionsJSON_set_rp(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rp"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptionsJSON_user(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("user")));
}


void PublicKeyCredentialCreationOptionsJSON_set_user(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("user"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptionsJSON_challenge(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialCreationOptionsJSON_set_challenge(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_pubKeyCredParams(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams")));
}


void PublicKeyCredentialCreationOptionsJSON_set_pubKeyCredParams(PublicKeyCredentialCreationOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams"), em_Val_from(value));
}


unsigned long PublicKeyCredentialCreationOptionsJSON_timeout(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialCreationOptionsJSON_set_timeout(PublicKeyCredentialCreationOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_excludeCredentials(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("excludeCredentials")));
}


void PublicKeyCredentialCreationOptionsJSON_set_excludeCredentials(PublicKeyCredentialCreationOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("excludeCredentials"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptionsJSON_authenticatorSelection(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection")));
}


void PublicKeyCredentialCreationOptionsJSON_set_authenticatorSelection(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_hints(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialCreationOptionsJSON_set_hints(PublicKeyCredentialCreationOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialCreationOptionsJSON_attestation(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestation")));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestation(PublicKeyCredentialCreationOptionsJSON* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestation"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_attestationFormats(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestationFormats")));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestationFormats(PublicKeyCredentialCreationOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestationFormats"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptionsJSON_extensions(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialCreationOptionsJSON_set_extensions(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptions, em_Val);


jb_Any PublicKeyCredentialRequestOptions_challenge(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialRequestOptions_set_challenge(PublicKeyCredentialRequestOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


unsigned long PublicKeyCredentialRequestOptions_timeout(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialRequestOptions_set_timeout(PublicKeyCredentialRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialRequestOptions_rpId(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void PublicKeyCredentialRequestOptions_set_rpId(PublicKeyCredentialRequestOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialRequestOptions_allowCredentials(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowCredentials")));
}


void PublicKeyCredentialRequestOptions_set_allowCredentials(PublicKeyCredentialRequestOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowCredentials"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialRequestOptions_userVerification(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVerification")));
}


void PublicKeyCredentialRequestOptions_set_userVerification(PublicKeyCredentialRequestOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVerification"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialRequestOptions_hints(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialRequestOptions_set_hints(PublicKeyCredentialRequestOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_Any PublicKeyCredentialRequestOptions_extensions(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialRequestOptions_set_extensions(PublicKeyCredentialRequestOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptionsJSON, em_Val);


jb_Any PublicKeyCredentialRequestOptionsJSON_challenge(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialRequestOptionsJSON_set_challenge(PublicKeyCredentialRequestOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


unsigned long PublicKeyCredentialRequestOptionsJSON_timeout(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialRequestOptionsJSON_set_timeout(PublicKeyCredentialRequestOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialRequestOptionsJSON_rpId(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void PublicKeyCredentialRequestOptionsJSON_set_rpId(PublicKeyCredentialRequestOptionsJSON* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialRequestOptionsJSON_allowCredentials(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowCredentials")));
}


void PublicKeyCredentialRequestOptionsJSON_set_allowCredentials(PublicKeyCredentialRequestOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowCredentials"), em_Val_from(value));
}


jb_DOMString PublicKeyCredentialRequestOptionsJSON_userVerification(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVerification")));
}


void PublicKeyCredentialRequestOptionsJSON_set_userVerification(PublicKeyCredentialRequestOptionsJSON* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVerification"), em_Val_from(value));
}


jb_Sequence PublicKeyCredentialRequestOptionsJSON_hints(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialRequestOptionsJSON_set_hints(PublicKeyCredentialRequestOptionsJSON* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_Any PublicKeyCredentialRequestOptionsJSON_extensions(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialRequestOptionsJSON_set_extensions(PublicKeyCredentialRequestOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(UnknownCredentialOptions, em_Val);


jb_DOMString UnknownCredentialOptions_rpId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void UnknownCredentialOptions_set_rpId(UnknownCredentialOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any UnknownCredentialOptions_credentialId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentialId")));
}


void UnknownCredentialOptions_set_credentialId(UnknownCredentialOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentialId"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AllAcceptedCredentialsOptions, em_Val);


jb_DOMString AllAcceptedCredentialsOptions_rpId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void AllAcceptedCredentialsOptions_set_rpId(AllAcceptedCredentialsOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any AllAcceptedCredentialsOptions_userId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userId")));
}


void AllAcceptedCredentialsOptions_set_userId(AllAcceptedCredentialsOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userId"), em_Val_from(value));
}


jb_Sequence AllAcceptedCredentialsOptions_allAcceptedCredentialIds(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allAcceptedCredentialIds")));
}


void AllAcceptedCredentialsOptions_set_allAcceptedCredentialIds(AllAcceptedCredentialsOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allAcceptedCredentialIds"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CurrentUserDetailsOptions, em_Val);


jb_DOMString CurrentUserDetailsOptions_rpId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void CurrentUserDetailsOptions_set_rpId(CurrentUserDetailsOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any CurrentUserDetailsOptions_userId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userId")));
}


void CurrentUserDetailsOptions_set_userId(CurrentUserDetailsOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userId"), em_Val_from(value));
}


jb_DOMString CurrentUserDetailsOptions_name(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CurrentUserDetailsOptions_set_name(CurrentUserDetailsOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_DOMString CurrentUserDetailsOptions_displayName(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayName")));
}


void CurrentUserDetailsOptions_set_displayName(CurrentUserDetailsOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayName"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PublicKeyCredential, Credential);


jb_ArrayBuffer PublicKeyCredential_rawId(const PublicKeyCredential *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Credential_as_val(self->inner), em_Val_from("rawId")));
}


AuthenticatorResponse PublicKeyCredential_response(const PublicKeyCredential *self) {
    return em_Val_as(AuthenticatorResponse, em_Val_get(Credential_as_val(self->inner), em_Val_from("response")));
}


jb_DOMString PublicKeyCredential_authenticatorAttachment(const PublicKeyCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), em_Val_from("authenticatorAttachment")));
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

