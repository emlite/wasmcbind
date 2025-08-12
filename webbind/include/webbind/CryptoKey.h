#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CryptoKey
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey)
 */
DECLARE_EMLITE_TYPE(CryptoKey, em_Val);

/**
 * @brief Gets the `type` property. 
*/
KeyType CryptoKey_type(const CryptoKey *self);

/**
 * @brief Gets the `extractable` property. 
*/
bool CryptoKey_extractable(const CryptoKey *self);

/**
 * @brief Gets the `algorithm` property. 
*/
jb_Object CryptoKey_algorithm(const CryptoKey *self);

/**
 * @brief Gets the `usages` property. 
*/
jb_Object CryptoKey_usages(const CryptoKey *self);

#ifdef __cplusplus
}
#endif
