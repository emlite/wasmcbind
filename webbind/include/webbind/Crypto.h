#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SubtleCrypto SubtleCrypto;


/**
 * @brief Interface Crypto
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Crypto)
 */
DECLARE_EMLITE_TYPE(Crypto, em_Val);

/**
 * @brief Gets the `subtle` property. 
*/
SubtleCrypto Crypto_subtle(const Crypto *self);

/**
 * @brief Calls the `getRandomValues` method. 
*/
jb_Any Crypto_getRandomValues(Crypto* self , jb_Any * array);

/**
 * @brief Calls the `randomUUID` method. 
*/
jb_String Crypto_randomUUID(Crypto* self );

#ifdef __cplusplus
}
#endif
