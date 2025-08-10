#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HMACGetSecretOutput, em_Val);

jb_ArrayBuffer HMACGetSecretOutput_output1(const HMACGetSecretOutput *self);

void HMACGetSecretOutput_set_output1(HMACGetSecretOutput* self, jb_ArrayBuffer * value);

jb_ArrayBuffer HMACGetSecretOutput_output2(const HMACGetSecretOutput *self);

void HMACGetSecretOutput_set_output2(HMACGetSecretOutput* self, jb_ArrayBuffer * value);

HMACGetSecretOutput HMACGetSecretOutput_new();

#ifdef __cplusplus
}
#endif
