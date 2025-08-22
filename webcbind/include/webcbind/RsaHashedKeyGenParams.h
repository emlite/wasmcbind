#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RsaKeyGenParams.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaHashedKeyGenParams */
DECLARE_EMLITE_TYPE(RsaHashedKeyGenParams, RsaKeyGenParams);

/** @brief Getter of the hash property */
jb_Any RsaHashedKeyGenParams_hash(const RsaHashedKeyGenParams *self);

/** @brief Setter of the hash property */
void RsaHashedKeyGenParams_set_hash(RsaHashedKeyGenParams* self, jb_Any * value);

/** @brief Constructor of the RsaHashedKeyGenParams dictionary type */
RsaHashedKeyGenParams RsaHashedKeyGenParams_new();

#ifdef __cplusplus
}
#endif
