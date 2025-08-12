#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HMACGetSecretOutput */
DECLARE_EMLITE_TYPE(HMACGetSecretOutput, em_Val);

/** @brief Getter of the output1 property */
jb_ArrayBuffer HMACGetSecretOutput_output1(const HMACGetSecretOutput *self);

/** @brief Setter of the output1 property */
void HMACGetSecretOutput_set_output1(HMACGetSecretOutput* self, jb_ArrayBuffer * value);

/** @brief Getter of the output2 property */
jb_ArrayBuffer HMACGetSecretOutput_output2(const HMACGetSecretOutput *self);

/** @brief Setter of the output2 property */
void HMACGetSecretOutput_set_output2(HMACGetSecretOutput* self, jb_ArrayBuffer * value);

/** @brief Constructor of the HMACGetSecretOutput dictionary type */
HMACGetSecretOutput HMACGetSecretOutput_new();

#ifdef __cplusplus
}
#endif
