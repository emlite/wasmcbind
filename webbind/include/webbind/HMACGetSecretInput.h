#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HMACGetSecretInput, em_Val);

jb_ArrayBuffer HMACGetSecretInput_salt1(const HMACGetSecretInput *self);

void HMACGetSecretInput_set_salt1(HMACGetSecretInput* self, jb_ArrayBuffer * value);

jb_ArrayBuffer HMACGetSecretInput_salt2(const HMACGetSecretInput *self);

void HMACGetSecretInput_set_salt2(HMACGetSecretInput* self, jb_ArrayBuffer * value);

HMACGetSecretInput HMACGetSecretInput_new();

#ifdef __cplusplus
}
#endif
