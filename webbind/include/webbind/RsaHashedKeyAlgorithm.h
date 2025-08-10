#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RsaKeyAlgorithm.h"
#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaHashedKeyAlgorithm, RsaKeyAlgorithm);

KeyAlgorithm RsaHashedKeyAlgorithm_hash(const RsaHashedKeyAlgorithm *self);

void RsaHashedKeyAlgorithm_set_hash(RsaHashedKeyAlgorithm* self, KeyAlgorithm * value);

RsaHashedKeyAlgorithm RsaHashedKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
