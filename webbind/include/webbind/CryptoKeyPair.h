#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CryptoKey CryptoKey;

DECLARE_EMLITE_TYPE(CryptoKeyPair, em_Val);

CryptoKey CryptoKeyPair_publicKey(const CryptoKeyPair *self);

void CryptoKeyPair_set_publicKey(CryptoKeyPair* self, CryptoKey * value);

CryptoKey CryptoKeyPair_privateKey(const CryptoKeyPair *self);

void CryptoKeyPair_set_privateKey(CryptoKeyPair* self, CryptoKey * value);

CryptoKeyPair CryptoKeyPair_new();

#ifdef __cplusplus
}
#endif
