#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesGcmParams, Algorithm);

jb_Any AesGcmParams_iv(const AesGcmParams *self);

void AesGcmParams_set_iv(AesGcmParams* self, jb_Any * value);

jb_Any AesGcmParams_additionalData(const AesGcmParams *self);

void AesGcmParams_set_additionalData(AesGcmParams* self, jb_Any * value);

unsigned char AesGcmParams_tagLength(const AesGcmParams *self);

void AesGcmParams_set_tagLength(AesGcmParams* self, unsigned char value);

AesGcmParams AesGcmParams_new();

#ifdef __cplusplus
}
#endif
