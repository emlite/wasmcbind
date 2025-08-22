#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIdentityValidationResult */
DECLARE_EMLITE_TYPE(RTCIdentityValidationResult, em_Val);

/** @brief Getter of the identity property */
jb_String RTCIdentityValidationResult_identity(const RTCIdentityValidationResult *self);

/** @brief Setter of the identity property */
void RTCIdentityValidationResult_set_identity(RTCIdentityValidationResult* self, jb_String * value);

/** @brief Getter of the contents property */
jb_String RTCIdentityValidationResult_contents(const RTCIdentityValidationResult *self);

/** @brief Setter of the contents property */
void RTCIdentityValidationResult_set_contents(RTCIdentityValidationResult* self, jb_String * value);

/** @brief Constructor of the RTCIdentityValidationResult dictionary type */
RTCIdentityValidationResult RTCIdentityValidationResult_new();

#ifdef __cplusplus
}
#endif
