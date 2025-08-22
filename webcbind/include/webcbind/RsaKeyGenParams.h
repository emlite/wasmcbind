#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaKeyGenParams */
DECLARE_EMLITE_TYPE(RsaKeyGenParams, Algorithm);

/** @brief Getter of the modulusLength property */
unsigned long RsaKeyGenParams_modulusLength(const RsaKeyGenParams *self);

/** @brief Setter of the modulusLength property */
void RsaKeyGenParams_set_modulusLength(RsaKeyGenParams* self, unsigned long value);

/** @brief Getter of the publicExponent property */
jb_Any RsaKeyGenParams_publicExponent(const RsaKeyGenParams *self);

/** @brief Setter of the publicExponent property */
void RsaKeyGenParams_set_publicExponent(RsaKeyGenParams* self, jb_Any * value);

/** @brief Constructor of the RsaKeyGenParams dictionary type */
RsaKeyGenParams RsaKeyGenParams_new();

#ifdef __cplusplus
}
#endif
