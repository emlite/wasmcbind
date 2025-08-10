#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaHashedImportParams, Algorithm);

jb_Any RsaHashedImportParams_hash(const RsaHashedImportParams *self);

void RsaHashedImportParams_set_hash(RsaHashedImportParams* self, jb_Any * value);

RsaHashedImportParams RsaHashedImportParams_new();

#ifdef __cplusplus
}
#endif
