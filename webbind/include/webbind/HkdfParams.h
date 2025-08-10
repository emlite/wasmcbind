#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HkdfParams, Algorithm);

jb_Any HkdfParams_hash(const HkdfParams *self);

void HkdfParams_set_hash(HkdfParams* self, jb_Any * value);

jb_Any HkdfParams_salt(const HkdfParams *self);

void HkdfParams_set_salt(HkdfParams* self, jb_Any * value);

jb_Any HkdfParams_info(const HkdfParams *self);

void HkdfParams_set_info(HkdfParams* self, jb_Any * value);

HkdfParams HkdfParams_new();

#ifdef __cplusplus
}
#endif
