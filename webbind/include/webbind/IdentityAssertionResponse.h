#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityCredentialErrorInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityAssertionResponse, em_Val);

jb_String IdentityAssertionResponse_token(const IdentityAssertionResponse *self);

void IdentityAssertionResponse_set_token(IdentityAssertionResponse* self, jb_String * value);

jb_String IdentityAssertionResponse_continue_on(const IdentityAssertionResponse *self);

void IdentityAssertionResponse_set_continue_on(IdentityAssertionResponse* self, jb_String * value);

IdentityCredentialErrorInit IdentityAssertionResponse_error(const IdentityAssertionResponse *self);

void IdentityAssertionResponse_set_error(IdentityAssertionResponse* self, IdentityCredentialErrorInit * value);

IdentityAssertionResponse IdentityAssertionResponse_new();

#ifdef __cplusplus
}
#endif
