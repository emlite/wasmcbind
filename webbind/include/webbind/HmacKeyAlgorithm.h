#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HmacKeyAlgorithm, KeyAlgorithm);

KeyAlgorithm HmacKeyAlgorithm_hash(const HmacKeyAlgorithm *self);

void HmacKeyAlgorithm_set_hash(HmacKeyAlgorithm* self, KeyAlgorithm * value);

unsigned long HmacKeyAlgorithm_length(const HmacKeyAlgorithm *self);

void HmacKeyAlgorithm_set_length(HmacKeyAlgorithm* self, unsigned long value);

HmacKeyAlgorithm HmacKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
