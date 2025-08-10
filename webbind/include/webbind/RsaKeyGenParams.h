#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaKeyGenParams, Algorithm);

unsigned long RsaKeyGenParams_modulusLength(const RsaKeyGenParams *self);

void RsaKeyGenParams_set_modulusLength(RsaKeyGenParams* self, unsigned long value);

jb_Any RsaKeyGenParams_publicExponent(const RsaKeyGenParams *self);

void RsaKeyGenParams_set_publicExponent(RsaKeyGenParams* self, jb_Any * value);

RsaKeyGenParams RsaKeyGenParams_new();

#ifdef __cplusplus
}
#endif
