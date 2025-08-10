#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CredentialData.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FederatedCredentialInit, CredentialData);

jb_String FederatedCredentialInit_name(const FederatedCredentialInit *self);

void FederatedCredentialInit_set_name(FederatedCredentialInit* self, jb_String * value);

jb_String FederatedCredentialInit_iconURL(const FederatedCredentialInit *self);

void FederatedCredentialInit_set_iconURL(FederatedCredentialInit* self, jb_String * value);

jb_String FederatedCredentialInit_origin(const FederatedCredentialInit *self);

void FederatedCredentialInit_set_origin(FederatedCredentialInit* self, jb_String * value);

jb_String FederatedCredentialInit_provider(const FederatedCredentialInit *self);

void FederatedCredentialInit_set_provider(FederatedCredentialInit* self, jb_String * value);

jb_String FederatedCredentialInit_protocol(const FederatedCredentialInit *self);

void FederatedCredentialInit_set_protocol(FederatedCredentialInit* self, jb_String * value);

FederatedCredentialInit FederatedCredentialInit_new();

#ifdef __cplusplus
}
#endif
