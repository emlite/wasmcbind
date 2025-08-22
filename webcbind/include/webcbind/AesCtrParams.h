#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesCtrParams */
DECLARE_EMLITE_TYPE(AesCtrParams, Algorithm);

/** @brief Getter of the counter property */
jb_Any AesCtrParams_counter(const AesCtrParams *self);

/** @brief Setter of the counter property */
void AesCtrParams_set_counter(AesCtrParams* self, jb_Any * value);

/** @brief Getter of the length property */
unsigned char AesCtrParams_length(const AesCtrParams *self);

/** @brief Setter of the length property */
void AesCtrParams_set_length(AesCtrParams* self, unsigned char value);

/** @brief Constructor of the AesCtrParams dictionary type */
AesCtrParams AesCtrParams_new();

#ifdef __cplusplus
}
#endif
