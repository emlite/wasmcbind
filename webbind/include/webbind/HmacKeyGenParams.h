#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HmacKeyGenParams */
DECLARE_EMLITE_TYPE(HmacKeyGenParams, Algorithm);

/** @brief Getter of the hash property */
jb_Any HmacKeyGenParams_hash(const HmacKeyGenParams *self);

/** @brief Setter of the hash property */
void HmacKeyGenParams_set_hash(HmacKeyGenParams* self, jb_Any * value);

/** @brief Getter of the length property */
unsigned long HmacKeyGenParams_length(const HmacKeyGenParams *self);

/** @brief Setter of the length property */
void HmacKeyGenParams_set_length(HmacKeyGenParams* self, unsigned long value);

/** @brief Constructor of the HmacKeyGenParams dictionary type */
HmacKeyGenParams HmacKeyGenParams_new();

#ifdef __cplusplus
}
#endif
