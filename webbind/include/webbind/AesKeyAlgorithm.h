#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesKeyAlgorithm, KeyAlgorithm);

unsigned short AesKeyAlgorithm_length(const AesKeyAlgorithm *self);

void AesKeyAlgorithm_set_length(AesKeyAlgorithm* self, unsigned short value);

AesKeyAlgorithm AesKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
