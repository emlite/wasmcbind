#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityCredentialErrorInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityAssertionResponse */
DECLARE_EMLITE_TYPE(IdentityAssertionResponse, em_Val);

/** @brief Getter of the token property */
jb_String IdentityAssertionResponse_token(const IdentityAssertionResponse *self);

/** @brief Setter of the token property */
void IdentityAssertionResponse_set_token(IdentityAssertionResponse* self, jb_String * value);

/** @brief Getter of the continue_on property */
jb_String IdentityAssertionResponse_continue_on(const IdentityAssertionResponse *self);

/** @brief Setter of the continue_on property */
void IdentityAssertionResponse_set_continue_on(IdentityAssertionResponse* self, jb_String * value);

/** @brief Getter of the error property */
IdentityCredentialErrorInit IdentityAssertionResponse_error(const IdentityAssertionResponse *self);

/** @brief Setter of the error property */
void IdentityAssertionResponse_set_error(IdentityAssertionResponse* self, IdentityCredentialErrorInit * value);

/** @brief Constructor of the IdentityAssertionResponse dictionary type */
IdentityAssertionResponse IdentityAssertionResponse_new();

#ifdef __cplusplus
}
#endif
