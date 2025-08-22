#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextDecoderOptions TextDecoderOptions;
typedef struct TextDecodeOptions TextDecodeOptions;


/**
 * @brief Interface TextDecoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder)
 */
DECLARE_EMLITE_TYPE(TextDecoder, em_Val);

/**
 * @brief Creates a new `TextDecoder` object. 
*/
TextDecoder TextDecoder_new0();

/**
 * @brief Creates a new `TextDecoder` object. 
*/
TextDecoder TextDecoder_new1(jb_String * label);

/**
 * @brief Creates a new `TextDecoder` object. 
*/
TextDecoder TextDecoder_new2(jb_String * label, TextDecoderOptions * options);

/**
 * @brief Calls the `decode` method. 
*/
jb_String TextDecoder_decode0(TextDecoder* self );

/**
 * @brief Calls the `decode` method. 
*/
jb_String TextDecoder_decode1(TextDecoder* self , jb_Any * input);

/**
 * @brief Calls the `decode` method. 
*/
jb_String TextDecoder_decode2(TextDecoder* self , jb_Any * input, TextDecodeOptions * options);

/**
 * @brief Gets the `encoding` property. 
*/
jb_String TextDecoder_encoding(const TextDecoder *self);

/**
 * @brief Gets the `fatal` property. 
*/
bool TextDecoder_fatal(const TextDecoder *self);

/**
 * @brief Gets the `ignoreBOM` property. 
*/
bool TextDecoder_ignoreBOM(const TextDecoder *self);

#ifdef __cplusplus
}
#endif
