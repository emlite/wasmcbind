#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CryptoKey CryptoKey;

DECLARE_EMLITE_TYPE(EcdhKeyDeriveParams, Algorithm);

CryptoKey EcdhKeyDeriveParams_public_(const EcdhKeyDeriveParams *self);

void EcdhKeyDeriveParams_set_public_(EcdhKeyDeriveParams* self, CryptoKey * value);

EcdhKeyDeriveParams EcdhKeyDeriveParams_new();

#ifdef __cplusplus
}
#endif
