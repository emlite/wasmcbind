#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CryptoKey CryptoKey;

/** @brief Dictionary type EcdhKeyDeriveParams */
DECLARE_EMLITE_TYPE(EcdhKeyDeriveParams, Algorithm);

/** @brief Getter of the public property */
CryptoKey EcdhKeyDeriveParams_public_(const EcdhKeyDeriveParams *self);

/** @brief Setter of the public property */
void EcdhKeyDeriveParams_set_public_(EcdhKeyDeriveParams* self, CryptoKey * value);

/** @brief Constructor of the EcdhKeyDeriveParams dictionary type */
EcdhKeyDeriveParams EcdhKeyDeriveParams_new();

#ifdef __cplusplus
}
#endif
