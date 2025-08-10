#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HmacImportParams, Algorithm);

jb_Any HmacImportParams_hash(const HmacImportParams *self);

void HmacImportParams_set_hash(HmacImportParams* self, jb_Any * value);

unsigned long HmacImportParams_length(const HmacImportParams *self);

void HmacImportParams_set_length(HmacImportParams* self, unsigned long value);

HmacImportParams HmacImportParams_new();

#ifdef __cplusplus
}
#endif
