#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CredentialData.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FederatedCredentialInit */
DECLARE_EMLITE_TYPE(FederatedCredentialInit, CredentialData);

/** @brief Getter of the name property */
jb_String FederatedCredentialInit_name(const FederatedCredentialInit *self);

/** @brief Setter of the name property */
void FederatedCredentialInit_set_name(FederatedCredentialInit* self, jb_String * value);

/** @brief Getter of the iconURL property */
jb_String FederatedCredentialInit_iconURL(const FederatedCredentialInit *self);

/** @brief Setter of the iconURL property */
void FederatedCredentialInit_set_iconURL(FederatedCredentialInit* self, jb_String * value);

/** @brief Getter of the origin property */
jb_String FederatedCredentialInit_origin(const FederatedCredentialInit *self);

/** @brief Setter of the origin property */
void FederatedCredentialInit_set_origin(FederatedCredentialInit* self, jb_String * value);

/** @brief Getter of the provider property */
jb_String FederatedCredentialInit_provider(const FederatedCredentialInit *self);

/** @brief Setter of the provider property */
void FederatedCredentialInit_set_provider(FederatedCredentialInit* self, jb_String * value);

/** @brief Getter of the protocol property */
jb_String FederatedCredentialInit_protocol(const FederatedCredentialInit *self);

/** @brief Setter of the protocol property */
void FederatedCredentialInit_set_protocol(FederatedCredentialInit* self, jb_String * value);

/** @brief Constructor of the FederatedCredentialInit dictionary type */
FederatedCredentialInit FederatedCredentialInit_new();

#ifdef __cplusplus
}
#endif
