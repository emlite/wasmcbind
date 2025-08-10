#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaKeyAlgorithm, KeyAlgorithm);

unsigned long RsaKeyAlgorithm_modulusLength(const RsaKeyAlgorithm *self);

void RsaKeyAlgorithm_set_modulusLength(RsaKeyAlgorithm* self, unsigned long value);

jb_Any RsaKeyAlgorithm_publicExponent(const RsaKeyAlgorithm *self);

void RsaKeyAlgorithm_set_publicExponent(RsaKeyAlgorithm* self, jb_Any * value);

RsaKeyAlgorithm RsaKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
