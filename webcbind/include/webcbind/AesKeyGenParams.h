#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesKeyGenParams */
DECLARE_EMLITE_TYPE(AesKeyGenParams, Algorithm);

/** @brief Getter of the length property */
unsigned short AesKeyGenParams_length(const AesKeyGenParams *self);

/** @brief Setter of the length property */
void AesKeyGenParams_set_length(AesKeyGenParams* self, unsigned short value);

/** @brief Constructor of the AesKeyGenParams dictionary type */
AesKeyGenParams AesKeyGenParams_new();

#ifdef __cplusplus
}
#endif
