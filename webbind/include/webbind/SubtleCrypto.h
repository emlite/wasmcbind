#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CryptoKey CryptoKey;


typedef struct {
  em_Val inner;
} SubtleCrypto;


DECLARE_EMLITE_TYPE(SubtleCrypto, em_Val);

jb_Promise SubtleCrypto_encrypt(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* key, const jb_Any* data);

jb_Promise SubtleCrypto_decrypt(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* key, const jb_Any* data);

jb_Promise SubtleCrypto_sign(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* key, const jb_Any* data);

jb_Promise SubtleCrypto_verify(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* key, const jb_Any* signature, const jb_Any* data);

jb_Promise SubtleCrypto_digest(SubtleCrypto* self , const jb_Any* algorithm, const jb_Any* data);

jb_Promise SubtleCrypto_generateKey(SubtleCrypto* self , const jb_Any* algorithm, bool extractable, const jb_Sequence* keyUsages);

jb_Promise SubtleCrypto_deriveKey(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* baseKey, const jb_Any* derivedKeyType, bool extractable, const jb_Sequence* keyUsages);

jb_Promise SubtleCrypto_deriveBits(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* baseKey);

jb_Promise SubtleCrypto_deriveBits(SubtleCrypto* self , const jb_Any* algorithm, const CryptoKey* baseKey, unsigned long length);

jb_Promise SubtleCrypto_importKey(SubtleCrypto* self , const KeyFormat* format, const jb_Any* keyData, const jb_Any* algorithm, bool extractable, const jb_Sequence* keyUsages);

jb_Promise SubtleCrypto_exportKey(SubtleCrypto* self , const KeyFormat* format, const CryptoKey* key);

jb_Promise SubtleCrypto_wrapKey(SubtleCrypto* self , const KeyFormat* format, const CryptoKey* key, const CryptoKey* wrappingKey, const jb_Any* wrapAlgorithm);

jb_Promise SubtleCrypto_unwrapKey(SubtleCrypto* self , const KeyFormat* format, const jb_Any* wrappedKey, const CryptoKey* unwrappingKey, const jb_Any* unwrapAlgorithm, const jb_Any* unwrappedKeyAlgorithm, bool extractable, const jb_Sequence* keyUsages);
