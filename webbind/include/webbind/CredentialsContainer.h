#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Credential Credential;
typedef struct CredentialRequestOptions CredentialRequestOptions;
typedef struct CredentialCreationOptions CredentialCreationOptions;
typedef struct PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions;
typedef struct PublicKeyCredential PublicKeyCredential;
typedef struct PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions;


typedef struct {
  em_Val inner;
} CredentialRequestOptions;


DECLARE_EMLITE_TYPE(CredentialRequestOptions, em_Val);

PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey( const CredentialRequestOptions *self);

void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, const PublicKeyCredentialRequestOptions* value);
typedef struct {
  em_Val inner;
} CredentialCreationOptions;


DECLARE_EMLITE_TYPE(CredentialCreationOptions, em_Val);

PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey( const CredentialCreationOptions *self);

void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, const PublicKeyCredentialCreationOptions* value);
typedef struct {
  em_Val inner;
} CredentialsContainer;


DECLARE_EMLITE_TYPE(CredentialsContainer, em_Val);

jb_Promise CredentialsContainer_get(CredentialsContainer* self );

jb_Promise CredentialsContainer_get(CredentialsContainer* self , const CredentialRequestOptions* options);

jb_Promise CredentialsContainer_store(CredentialsContainer* self , const Credential* credential);

jb_Promise CredentialsContainer_create(CredentialsContainer* self );

jb_Promise CredentialsContainer_create(CredentialsContainer* self , const CredentialCreationOptions* options);

jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self );
