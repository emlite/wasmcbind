#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

typedef struct IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions;


DECLARE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, em_Val);

jb_USVString IdentityCredentialDisconnectOptions_accountHint( const IdentityCredentialDisconnectOptions *self);

void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, jb_USVString * value);
DECLARE_EMLITE_TYPE(IdentityCredential, Credential);

jb_Promise IdentityCredential_disconnect(IdentityCredential* self , IdentityCredentialDisconnectOptions * options);

jb_USVString IdentityCredential_token( const IdentityCredential *self);

bool IdentityCredential_isAutoSelected( const IdentityCredential *self);

jb_USVString IdentityCredential_configURL( const IdentityCredential *self);
