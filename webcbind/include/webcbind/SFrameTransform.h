#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SFrameTransformOptions SFrameTransformOptions;
typedef struct CryptoKey CryptoKey;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface SFrameTransform
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform)
 */
DECLARE_EMLITE_TYPE(SFrameTransform, EventTarget);

/**
 * @brief Creates a new `SFrameTransform` object. 
*/
SFrameTransform SFrameTransform_new0();

/**
 * @brief Creates a new `SFrameTransform` object. 
*/
SFrameTransform SFrameTransform_new1(SFrameTransformOptions * options);

/**
 * @brief Calls the `setEncryptionKey` method. 
*/
jb_Promise SFrameTransform_setEncryptionKey0(SFrameTransform* self , CryptoKey * key);

/**
 * @brief Calls the `setEncryptionKey` method. 
*/
jb_Promise SFrameTransform_setEncryptionKey1(SFrameTransform* self , CryptoKey * key, jb_Any * keyID);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any SFrameTransform_onerror(const SFrameTransform *self);

/**
 * @brief Sets the `onerror` property. 
*/
void SFrameTransform_set_onerror(SFrameTransform* self, jb_Any * value);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream SFrameTransform_readable(const SFrameTransform *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream SFrameTransform_writable(const SFrameTransform *self);

#ifdef __cplusplus
}
#endif
