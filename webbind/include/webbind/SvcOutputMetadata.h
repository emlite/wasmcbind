#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SvcOutputMetadata, em_Val);

unsigned long SvcOutputMetadata_temporalLayerId(const SvcOutputMetadata *self);

void SvcOutputMetadata_set_temporalLayerId(SvcOutputMetadata* self, unsigned long value);

SvcOutputMetadata SvcOutputMetadata_new();

#ifdef __cplusplus
}
#endif
