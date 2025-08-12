#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaKeyAlgorithm */
DECLARE_EMLITE_TYPE(RsaKeyAlgorithm, KeyAlgorithm);

/** @brief Getter of the modulusLength property */
unsigned long RsaKeyAlgorithm_modulusLength(const RsaKeyAlgorithm *self);

/** @brief Setter of the modulusLength property */
void RsaKeyAlgorithm_set_modulusLength(RsaKeyAlgorithm* self, unsigned long value);

/** @brief Getter of the publicExponent property */
jb_Any RsaKeyAlgorithm_publicExponent(const RsaKeyAlgorithm *self);

/** @brief Setter of the publicExponent property */
void RsaKeyAlgorithm_set_publicExponent(RsaKeyAlgorithm* self, jb_Any * value);

/** @brief Constructor of the RsaKeyAlgorithm dictionary type */
RsaKeyAlgorithm RsaKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
