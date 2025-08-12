#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HmacKeyAlgorithm */
DECLARE_EMLITE_TYPE(HmacKeyAlgorithm, KeyAlgorithm);

/** @brief Getter of the hash property */
KeyAlgorithm HmacKeyAlgorithm_hash(const HmacKeyAlgorithm *self);

/** @brief Setter of the hash property */
void HmacKeyAlgorithm_set_hash(HmacKeyAlgorithm* self, KeyAlgorithm * value);

/** @brief Getter of the length property */
unsigned long HmacKeyAlgorithm_length(const HmacKeyAlgorithm *self);

/** @brief Setter of the length property */
void HmacKeyAlgorithm_set_length(HmacKeyAlgorithm* self, unsigned long value);

/** @brief Constructor of the HmacKeyAlgorithm dictionary type */
HmacKeyAlgorithm HmacKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
