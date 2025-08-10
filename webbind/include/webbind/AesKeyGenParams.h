#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesKeyGenParams, Algorithm);

unsigned short AesKeyGenParams_length(const AesKeyGenParams *self);

void AesKeyGenParams_set_length(AesKeyGenParams* self, unsigned short value);

AesKeyGenParams AesKeyGenParams_new();

#ifdef __cplusplus
}
#endif
