#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HmacImportParams */
DECLARE_EMLITE_TYPE(HmacImportParams, Algorithm);

/** @brief Getter of the hash property */
jb_Any HmacImportParams_hash(const HmacImportParams *self);

/** @brief Setter of the hash property */
void HmacImportParams_set_hash(HmacImportParams* self, jb_Any * value);

/** @brief Getter of the length property */
unsigned long HmacImportParams_length(const HmacImportParams *self);

/** @brief Setter of the length property */
void HmacImportParams_set_length(HmacImportParams* self, unsigned long value);

/** @brief Constructor of the HmacImportParams dictionary type */
HmacImportParams HmacImportParams_new();

#ifdef __cplusplus
}
#endif
