#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesKeyAlgorithm */
DECLARE_EMLITE_TYPE(AesKeyAlgorithm, KeyAlgorithm);

/** @brief Getter of the length property */
unsigned short AesKeyAlgorithm_length(const AesKeyAlgorithm *self);

/** @brief Setter of the length property */
void AesKeyAlgorithm_set_length(AesKeyAlgorithm* self, unsigned short value);

/** @brief Constructor of the AesKeyAlgorithm dictionary type */
AesKeyAlgorithm AesKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
