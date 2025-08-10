#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityCredentialErrorInit, em_Val);

jb_String IdentityCredentialErrorInit_error(const IdentityCredentialErrorInit *self);

void IdentityCredentialErrorInit_set_error(IdentityCredentialErrorInit* self, jb_String * value);

jb_String IdentityCredentialErrorInit_url(const IdentityCredentialErrorInit *self);

void IdentityCredentialErrorInit_set_url(IdentityCredentialErrorInit* self, jb_String * value);

IdentityCredentialErrorInit IdentityCredentialErrorInit_new();

#ifdef __cplusplus
}
#endif
