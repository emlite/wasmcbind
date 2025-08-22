#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesGcmParams */
DECLARE_EMLITE_TYPE(AesGcmParams, Algorithm);

/** @brief Getter of the iv property */
jb_Any AesGcmParams_iv(const AesGcmParams *self);

/** @brief Setter of the iv property */
void AesGcmParams_set_iv(AesGcmParams* self, jb_Any * value);

/** @brief Getter of the additionalData property */
jb_Any AesGcmParams_additionalData(const AesGcmParams *self);

/** @brief Setter of the additionalData property */
void AesGcmParams_set_additionalData(AesGcmParams* self, jb_Any * value);

/** @brief Getter of the tagLength property */
unsigned char AesGcmParams_tagLength(const AesGcmParams *self);

/** @brief Setter of the tagLength property */
void AesGcmParams_set_tagLength(AesGcmParams* self, unsigned char value);

/** @brief Constructor of the AesGcmParams dictionary type */
AesGcmParams AesGcmParams_new();

#ifdef __cplusplus
}
#endif
