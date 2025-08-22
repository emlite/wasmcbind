#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaHashedImportParams */
DECLARE_EMLITE_TYPE(RsaHashedImportParams, Algorithm);

/** @brief Getter of the hash property */
jb_Any RsaHashedImportParams_hash(const RsaHashedImportParams *self);

/** @brief Setter of the hash property */
void RsaHashedImportParams_set_hash(RsaHashedImportParams* self, jb_Any * value);

/** @brief Constructor of the RsaHashedImportParams dictionary type */
RsaHashedImportParams RsaHashedImportParams_new();

#ifdef __cplusplus
}
#endif
