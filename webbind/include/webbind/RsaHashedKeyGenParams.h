#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RsaKeyGenParams.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaHashedKeyGenParams, RsaKeyGenParams);

jb_Any RsaHashedKeyGenParams_hash(const RsaHashedKeyGenParams *self);

void RsaHashedKeyGenParams_set_hash(RsaHashedKeyGenParams* self, jb_Any * value);

RsaHashedKeyGenParams RsaHashedKeyGenParams_new();

#ifdef __cplusplus
}
#endif
