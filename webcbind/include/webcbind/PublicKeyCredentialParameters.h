#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialParameters */
DECLARE_EMLITE_TYPE(PublicKeyCredentialParameters, em_Val);

/** @brief Getter of the type property */
jb_String PublicKeyCredentialParameters_type(const PublicKeyCredentialParameters *self);

/** @brief Setter of the type property */
void PublicKeyCredentialParameters_set_type(PublicKeyCredentialParameters* self, jb_String * value);

/** @brief Getter of the alg property */
jb_Any PublicKeyCredentialParameters_alg(const PublicKeyCredentialParameters *self);

/** @brief Setter of the alg property */
void PublicKeyCredentialParameters_set_alg(PublicKeyCredentialParameters* self, jb_Any * value);

/** @brief Constructor of the PublicKeyCredentialParameters dictionary type */
PublicKeyCredentialParameters PublicKeyCredentialParameters_new();

#ifdef __cplusplus
}
#endif
