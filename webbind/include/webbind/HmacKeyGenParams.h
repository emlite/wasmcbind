#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HmacKeyGenParams, Algorithm);

jb_Any HmacKeyGenParams_hash(const HmacKeyGenParams *self);

void HmacKeyGenParams_set_hash(HmacKeyGenParams* self, jb_Any * value);

unsigned long HmacKeyGenParams_length(const HmacKeyGenParams *self);

void HmacKeyGenParams_set_length(HmacKeyGenParams* self, unsigned long value);

HmacKeyGenParams HmacKeyGenParams_new();

#ifdef __cplusplus
}
#endif
