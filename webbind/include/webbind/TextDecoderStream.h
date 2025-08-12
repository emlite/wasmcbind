#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextDecoderOptions TextDecoderOptions;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface TextDecoderStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream)
 */
DECLARE_EMLITE_TYPE(TextDecoderStream, em_Val);

/**
 * @brief Creates a new `TextDecoderStream` object. 
*/
TextDecoderStream TextDecoderStream_new0();

/**
 * @brief Creates a new `TextDecoderStream` object. 
*/
TextDecoderStream TextDecoderStream_new1(jb_String * label);

/**
 * @brief Creates a new `TextDecoderStream` object. 
*/
TextDecoderStream TextDecoderStream_new2(jb_String * label, TextDecoderOptions * options);

/**
 * @brief Gets the `encoding` property. 
*/
jb_String TextDecoderStream_encoding(const TextDecoderStream *self);

/**
 * @brief Gets the `fatal` property. 
*/
bool TextDecoderStream_fatal(const TextDecoderStream *self);

/**
 * @brief Gets the `ignoreBOM` property. 
*/
bool TextDecoderStream_ignoreBOM(const TextDecoderStream *self);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream TextDecoderStream_readable(const TextDecoderStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream TextDecoderStream_writable(const TextDecoderStream *self);

#ifdef __cplusplus
}
#endif
