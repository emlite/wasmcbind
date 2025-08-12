#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RsaKeyAlgorithm.h"
#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaHashedKeyAlgorithm */
DECLARE_EMLITE_TYPE(RsaHashedKeyAlgorithm, RsaKeyAlgorithm);

/** @brief Getter of the hash property */
KeyAlgorithm RsaHashedKeyAlgorithm_hash(const RsaHashedKeyAlgorithm *self);

/** @brief Setter of the hash property */
void RsaHashedKeyAlgorithm_set_hash(RsaHashedKeyAlgorithm* self, KeyAlgorithm * value);

/** @brief Constructor of the RsaHashedKeyAlgorithm dictionary type */
RsaHashedKeyAlgorithm RsaHashedKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
