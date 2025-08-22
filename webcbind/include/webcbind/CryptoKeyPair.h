#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CryptoKey CryptoKey;

/** @brief Dictionary type CryptoKeyPair */
DECLARE_EMLITE_TYPE(CryptoKeyPair, em_Val);

/** @brief Getter of the publicKey property */
CryptoKey CryptoKeyPair_publicKey(const CryptoKeyPair *self);

/** @brief Setter of the publicKey property */
void CryptoKeyPair_set_publicKey(CryptoKeyPair* self, CryptoKey * value);

/** @brief Getter of the privateKey property */
CryptoKey CryptoKeyPair_privateKey(const CryptoKeyPair *self);

/** @brief Setter of the privateKey property */
void CryptoKeyPair_set_privateKey(CryptoKeyPair* self, CryptoKey * value);

/** @brief Constructor of the CryptoKeyPair dictionary type */
CryptoKeyPair CryptoKeyPair_new();

#ifdef __cplusplus
}
#endif
