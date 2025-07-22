#include <webbind/PublicKeyCredential.h>
#include <webbind/AuthenticatorResponse.h>


DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientOutputs, em_Val);


jb_Any AuthenticationExtensionsClientOutputs_largeBlob(const AuthenticationExtensionsClientOutputs *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "largeBlob"));
}


void AuthenticationExtensionsClientOutputs_set_largeBlob(AuthenticationExtensionsClientOutputs* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "largeBlob", value);
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptions, em_Val);


jb_Any PublicKeyCredentialCreationOptions_rp(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rp"));
}


void PublicKeyCredentialCreationOptions_set_rp(PublicKeyCredentialCreationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rp", value);
}


jb_Any PublicKeyCredentialCreationOptions_user(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "user"));
}


void PublicKeyCredentialCreationOptions_set_user(PublicKeyCredentialCreationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "user", value);
}


jb_Any PublicKeyCredentialCreationOptions_challenge(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "challenge"));
}


void PublicKeyCredentialCreationOptions_set_challenge(PublicKeyCredentialCreationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "challenge", value);
}


jb_Sequence PublicKeyCredentialCreationOptions_pubKeyCredParams(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "pubKeyCredParams"));
}


void PublicKeyCredentialCreationOptions_set_pubKeyCredParams(PublicKeyCredentialCreationOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "pubKeyCredParams", value);
}


unsigned long PublicKeyCredentialCreationOptions_timeout(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void PublicKeyCredentialCreationOptions_set_timeout(PublicKeyCredentialCreationOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}


jb_Sequence PublicKeyCredentialCreationOptions_excludeCredentials(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "excludeCredentials"));
}


void PublicKeyCredentialCreationOptions_set_excludeCredentials(PublicKeyCredentialCreationOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "excludeCredentials", value);
}


jb_Any PublicKeyCredentialCreationOptions_authenticatorSelection(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "authenticatorSelection"));
}


void PublicKeyCredentialCreationOptions_set_authenticatorSelection(PublicKeyCredentialCreationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "authenticatorSelection", value);
}


jb_Sequence PublicKeyCredentialCreationOptions_hints(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "hints"));
}


void PublicKeyCredentialCreationOptions_set_hints(PublicKeyCredentialCreationOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "hints", value);
}


jb_DOMString PublicKeyCredentialCreationOptions_attestation(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "attestation"));
}


void PublicKeyCredentialCreationOptions_set_attestation(PublicKeyCredentialCreationOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "attestation", value);
}


jb_Sequence PublicKeyCredentialCreationOptions_attestationFormats(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "attestationFormats"));
}


void PublicKeyCredentialCreationOptions_set_attestationFormats(PublicKeyCredentialCreationOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "attestationFormats", value);
}


jb_Any PublicKeyCredentialCreationOptions_extensions(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "extensions"));
}


void PublicKeyCredentialCreationOptions_set_extensions(PublicKeyCredentialCreationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "extensions", value);
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptionsJSON, em_Val);


jb_Any PublicKeyCredentialCreationOptionsJSON_rp(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rp"));
}


void PublicKeyCredentialCreationOptionsJSON_set_rp(PublicKeyCredentialCreationOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rp", value);
}


jb_Any PublicKeyCredentialCreationOptionsJSON_user(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "user"));
}


void PublicKeyCredentialCreationOptionsJSON_set_user(PublicKeyCredentialCreationOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "user", value);
}


jb_Any PublicKeyCredentialCreationOptionsJSON_challenge(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "challenge"));
}


void PublicKeyCredentialCreationOptionsJSON_set_challenge(PublicKeyCredentialCreationOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "challenge", value);
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_pubKeyCredParams(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "pubKeyCredParams"));
}


void PublicKeyCredentialCreationOptionsJSON_set_pubKeyCredParams(PublicKeyCredentialCreationOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "pubKeyCredParams", value);
}


unsigned long PublicKeyCredentialCreationOptionsJSON_timeout(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void PublicKeyCredentialCreationOptionsJSON_set_timeout(PublicKeyCredentialCreationOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_excludeCredentials(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "excludeCredentials"));
}


void PublicKeyCredentialCreationOptionsJSON_set_excludeCredentials(PublicKeyCredentialCreationOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "excludeCredentials", value);
}


jb_Any PublicKeyCredentialCreationOptionsJSON_authenticatorSelection(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "authenticatorSelection"));
}


void PublicKeyCredentialCreationOptionsJSON_set_authenticatorSelection(PublicKeyCredentialCreationOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "authenticatorSelection", value);
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_hints(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "hints"));
}


void PublicKeyCredentialCreationOptionsJSON_set_hints(PublicKeyCredentialCreationOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "hints", value);
}


jb_DOMString PublicKeyCredentialCreationOptionsJSON_attestation(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "attestation"));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestation(PublicKeyCredentialCreationOptionsJSON* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "attestation", value);
}


jb_Sequence PublicKeyCredentialCreationOptionsJSON_attestationFormats(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "attestationFormats"));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestationFormats(PublicKeyCredentialCreationOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "attestationFormats", value);
}


jb_Any PublicKeyCredentialCreationOptionsJSON_extensions(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "extensions"));
}


void PublicKeyCredentialCreationOptionsJSON_set_extensions(PublicKeyCredentialCreationOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "extensions", value);
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptions, em_Val);


jb_Any PublicKeyCredentialRequestOptions_challenge(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "challenge"));
}


void PublicKeyCredentialRequestOptions_set_challenge(PublicKeyCredentialRequestOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "challenge", value);
}


unsigned long PublicKeyCredentialRequestOptions_timeout(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void PublicKeyCredentialRequestOptions_set_timeout(PublicKeyCredentialRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}


jb_DOMString PublicKeyCredentialRequestOptions_rpId(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rpId"));
}


void PublicKeyCredentialRequestOptions_set_rpId(PublicKeyCredentialRequestOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rpId", value);
}


jb_Sequence PublicKeyCredentialRequestOptions_allowCredentials(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "allowCredentials"));
}


void PublicKeyCredentialRequestOptions_set_allowCredentials(PublicKeyCredentialRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "allowCredentials", value);
}


jb_DOMString PublicKeyCredentialRequestOptions_userVerification(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "userVerification"));
}


void PublicKeyCredentialRequestOptions_set_userVerification(PublicKeyCredentialRequestOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "userVerification", value);
}


jb_Sequence PublicKeyCredentialRequestOptions_hints(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "hints"));
}


void PublicKeyCredentialRequestOptions_set_hints(PublicKeyCredentialRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "hints", value);
}


jb_Any PublicKeyCredentialRequestOptions_extensions(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "extensions"));
}


void PublicKeyCredentialRequestOptions_set_extensions(PublicKeyCredentialRequestOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "extensions", value);
}

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptionsJSON, em_Val);


jb_Any PublicKeyCredentialRequestOptionsJSON_challenge(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "challenge"));
}


void PublicKeyCredentialRequestOptionsJSON_set_challenge(PublicKeyCredentialRequestOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "challenge", value);
}


unsigned long PublicKeyCredentialRequestOptionsJSON_timeout(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void PublicKeyCredentialRequestOptionsJSON_set_timeout(PublicKeyCredentialRequestOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}


jb_DOMString PublicKeyCredentialRequestOptionsJSON_rpId(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rpId"));
}


void PublicKeyCredentialRequestOptionsJSON_set_rpId(PublicKeyCredentialRequestOptionsJSON* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rpId", value);
}


jb_Sequence PublicKeyCredentialRequestOptionsJSON_allowCredentials(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "allowCredentials"));
}


void PublicKeyCredentialRequestOptionsJSON_set_allowCredentials(PublicKeyCredentialRequestOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "allowCredentials", value);
}


jb_DOMString PublicKeyCredentialRequestOptionsJSON_userVerification(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "userVerification"));
}


void PublicKeyCredentialRequestOptionsJSON_set_userVerification(PublicKeyCredentialRequestOptionsJSON* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "userVerification", value);
}


jb_Sequence PublicKeyCredentialRequestOptionsJSON_hints(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "hints"));
}


void PublicKeyCredentialRequestOptionsJSON_set_hints(PublicKeyCredentialRequestOptionsJSON* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "hints", value);
}


jb_Any PublicKeyCredentialRequestOptionsJSON_extensions(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "extensions"));
}


void PublicKeyCredentialRequestOptionsJSON_set_extensions(PublicKeyCredentialRequestOptionsJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "extensions", value);
}

DEFINE_EMLITE_TYPE(UnknownCredentialOptions, em_Val);


jb_DOMString UnknownCredentialOptions_rpId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rpId"));
}


void UnknownCredentialOptions_set_rpId(UnknownCredentialOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rpId", value);
}


jb_Any UnknownCredentialOptions_credentialId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "credentialId"));
}


void UnknownCredentialOptions_set_credentialId(UnknownCredentialOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "credentialId", value);
}

DEFINE_EMLITE_TYPE(AllAcceptedCredentialsOptions, em_Val);


jb_DOMString AllAcceptedCredentialsOptions_rpId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rpId"));
}


void AllAcceptedCredentialsOptions_set_rpId(AllAcceptedCredentialsOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rpId", value);
}


jb_Any AllAcceptedCredentialsOptions_userId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "userId"));
}


void AllAcceptedCredentialsOptions_set_userId(AllAcceptedCredentialsOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "userId", value);
}


jb_Sequence AllAcceptedCredentialsOptions_allAcceptedCredentialIds(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "allAcceptedCredentialIds"));
}


void AllAcceptedCredentialsOptions_set_allAcceptedCredentialIds(AllAcceptedCredentialsOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "allAcceptedCredentialIds", value);
}

DEFINE_EMLITE_TYPE(CurrentUserDetailsOptions, em_Val);


jb_DOMString CurrentUserDetailsOptions_rpId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rpId"));
}


void CurrentUserDetailsOptions_set_rpId(CurrentUserDetailsOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "rpId", value);
}


jb_Any CurrentUserDetailsOptions_userId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "userId"));
}


void CurrentUserDetailsOptions_set_userId(CurrentUserDetailsOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "userId", value);
}


jb_DOMString CurrentUserDetailsOptions_name(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void CurrentUserDetailsOptions_set_name(CurrentUserDetailsOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_DOMString CurrentUserDetailsOptions_displayName(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "displayName"));
}


void CurrentUserDetailsOptions_set_displayName(CurrentUserDetailsOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "displayName", value);
}

DEFINE_EMLITE_TYPE(PublicKeyCredential, Credential);


jb_ArrayBuffer PublicKeyCredential_rawId(const PublicKeyCredential *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Credential_as_val(self->inner), "rawId"));
}


AuthenticatorResponse PublicKeyCredential_response(const PublicKeyCredential *self) {
    return em_Val_as(AuthenticatorResponse, em_Val_get(Credential_as_val(self->inner), "response"));
}


jb_DOMString PublicKeyCredential_authenticatorAttachment(const PublicKeyCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), "authenticatorAttachment"));
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


PublicKeyCredentialCreationOptions PublicKeyCredential_parseCreationOptionsFromJSON(PublicKeyCredential* self , const PublicKeyCredentialCreationOptionsJSON* options) {
    return em_Val_as(PublicKeyCredentialCreationOptions, em_Val_call(em_Val_global("publickeycredential"), "parseCreationOptionsFromJSON", em_Val_from(options)));
}


PublicKeyCredentialRequestOptions PublicKeyCredential_parseRequestOptionsFromJSON(PublicKeyCredential* self , const PublicKeyCredentialRequestOptionsJSON* options) {
    return em_Val_as(PublicKeyCredentialRequestOptions, em_Val_call(em_Val_global("publickeycredential"), "parseRequestOptionsFromJSON", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalUnknownCredential(PublicKeyCredential* self , const UnknownCredentialOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalUnknownCredential", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalAllAcceptedCredentials(PublicKeyCredential* self , const AllAcceptedCredentialsOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalAllAcceptedCredentials", em_Val_from(options)));
}


jb_Promise PublicKeyCredential_signalCurrentUserDetails(PublicKeyCredential* self , const CurrentUserDetailsOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("publickeycredential"), "signalCurrentUserDetails", em_Val_from(options)));
}

