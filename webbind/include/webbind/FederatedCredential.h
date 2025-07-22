#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"


typedef struct {
  Credential inner;
} FederatedCredential;


DECLARE_EMLITE_TYPE(FederatedCredential, Credential);

FederatedCredential FederatedCredential_new(const jb_Any* data);

jb_USVString FederatedCredential_provider( const FederatedCredential *self);

jb_DOMString FederatedCredential_protocol( const FederatedCredential *self);

jb_USVString FederatedCredential_name( const FederatedCredential *self);

jb_USVString FederatedCredential_iconURL( const FederatedCredential *self);
