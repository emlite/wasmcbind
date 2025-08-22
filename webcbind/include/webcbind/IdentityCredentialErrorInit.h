#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityCredentialErrorInit */
DECLARE_EMLITE_TYPE(IdentityCredentialErrorInit, em_Val);

/** @brief Getter of the error property */
jb_String IdentityCredentialErrorInit_error(const IdentityCredentialErrorInit *self);

/** @brief Setter of the error property */
void IdentityCredentialErrorInit_set_error(IdentityCredentialErrorInit* self, jb_String * value);

/** @brief Getter of the url property */
jb_String IdentityCredentialErrorInit_url(const IdentityCredentialErrorInit *self);

/** @brief Setter of the url property */
void IdentityCredentialErrorInit_set_url(IdentityCredentialErrorInit* self, jb_String * value);

/** @brief Constructor of the IdentityCredentialErrorInit dictionary type */
IdentityCredentialErrorInit IdentityCredentialErrorInit_new();

#ifdef __cplusplus
}
#endif
