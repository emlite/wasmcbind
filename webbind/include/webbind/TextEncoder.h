#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult;


/**
 * @brief Interface TextEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder)
 */
DECLARE_EMLITE_TYPE(TextEncoder, em_Val);

/**
 * @brief Creates a new `TextEncoder` object. 
*/
TextEncoder TextEncoder_new();

/**
 * @brief Calls the `encode` method. 
*/
jb_Uint8Array TextEncoder_encode0(TextEncoder* self );

/**
 * @brief Calls the `encode` method. 
*/
jb_Uint8Array TextEncoder_encode1(TextEncoder* self , jb_String * input);

/**
 * @brief Calls the `encodeInto` method. 
*/
TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , jb_String * source, jb_Uint8Array * destination);

/**
 * @brief Gets the `encoding` property. 
*/
jb_String TextEncoder_encoding(const TextEncoder *self);

#ifdef __cplusplus
}
#endif
