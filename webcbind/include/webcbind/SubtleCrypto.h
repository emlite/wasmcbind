#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CryptoKey CryptoKey;


/**
 * @brief Interface SubtleCrypto
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto)
 */
DECLARE_EMLITE_TYPE(SubtleCrypto, em_Val);

/**
 * @brief Calls the `encrypt` method. 
*/
jb_Promise SubtleCrypto_encrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

/**
 * @brief Calls the `decrypt` method. 
*/
jb_Promise SubtleCrypto_decrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

/**
 * @brief Calls the `sign` method. 
*/
jb_Promise SubtleCrypto_sign(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

/**
 * @brief Calls the `verify` method. 
*/
jb_Promise SubtleCrypto_verify(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * signature, jb_Any * data);

/**
 * @brief Calls the `digest` method. 
*/
jb_Promise SubtleCrypto_digest(SubtleCrypto* self , jb_Any * algorithm, jb_Any * data);

/**
 * @brief Calls the `generateKey` method. 
*/
jb_Promise SubtleCrypto_generateKey(SubtleCrypto* self , jb_Any * algorithm, bool extractable, jb_Array * keyUsages);

/**
 * @brief Calls the `deriveKey` method. 
*/
jb_Promise SubtleCrypto_deriveKey(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, jb_Any * derivedKeyType, bool extractable, jb_Array * keyUsages);

/**
 * @brief Calls the `deriveBits` method. 
*/
jb_Promise SubtleCrypto_deriveBits0(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey);

/**
 * @brief Calls the `deriveBits` method. 
*/
jb_Promise SubtleCrypto_deriveBits1(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, unsigned long length);

/**
 * @brief Calls the `importKey` method. 
*/
jb_Promise SubtleCrypto_importKey(SubtleCrypto* self , KeyFormat * format, jb_Any * keyData, jb_Any * algorithm, bool extractable, jb_Array * keyUsages);

/**
 * @brief Calls the `exportKey` method. 
*/
jb_Promise SubtleCrypto_exportKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key);

/**
 * @brief Calls the `wrapKey` method. 
*/
jb_Promise SubtleCrypto_wrapKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key, CryptoKey * wrappingKey, jb_Any * wrapAlgorithm);

/**
 * @brief Calls the `unwrapKey` method. 
*/
jb_Promise SubtleCrypto_unwrapKey(SubtleCrypto* self , KeyFormat * format, jb_Any * wrappedKey, CryptoKey * unwrappingKey, jb_Any * unwrapAlgorithm, jb_Any * unwrappedKeyAlgorithm, bool extractable, jb_Array * keyUsages);

#ifdef __cplusplus
}
#endif
