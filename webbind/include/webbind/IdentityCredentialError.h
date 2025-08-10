#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdentityCredentialErrorInit IdentityCredentialErrorInit;

DECLARE_EMLITE_TYPE(IdentityCredentialError, DOMException);

IdentityCredentialError IdentityCredentialError_new0();

IdentityCredentialError IdentityCredentialError_new1(jb_String * message);

IdentityCredentialError IdentityCredentialError_new2(jb_String * message, IdentityCredentialErrorInit * options);

jb_String IdentityCredentialError_error(const IdentityCredentialError *self);

jb_String IdentityCredentialError_url(const IdentityCredentialError *self);

#ifdef __cplusplus
}
#endif
