#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HMACGetSecretInput */
DECLARE_EMLITE_TYPE(HMACGetSecretInput, em_Val);

/** @brief Getter of the salt1 property */
jb_ArrayBuffer HMACGetSecretInput_salt1(const HMACGetSecretInput *self);

/** @brief Setter of the salt1 property */
void HMACGetSecretInput_set_salt1(HMACGetSecretInput* self, jb_ArrayBuffer * value);

/** @brief Getter of the salt2 property */
jb_ArrayBuffer HMACGetSecretInput_salt2(const HMACGetSecretInput *self);

/** @brief Setter of the salt2 property */
void HMACGetSecretInput_set_salt2(HMACGetSecretInput* self, jb_ArrayBuffer * value);

/** @brief Constructor of the HMACGetSecretInput dictionary type */
HMACGetSecretInput HMACGetSecretInput_new();

#ifdef __cplusplus
}
#endif
