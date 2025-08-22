#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SvcOutputMetadata */
DECLARE_EMLITE_TYPE(SvcOutputMetadata, em_Val);

/** @brief Getter of the temporalLayerId property */
unsigned long SvcOutputMetadata_temporalLayerId(const SvcOutputMetadata *self);

/** @brief Setter of the temporalLayerId property */
void SvcOutputMetadata_set_temporalLayerId(SvcOutputMetadata* self, unsigned long value);

/** @brief Constructor of the SvcOutputMetadata dictionary type */
SvcOutputMetadata SvcOutputMetadata_new();

#ifdef __cplusplus
}
#endif
