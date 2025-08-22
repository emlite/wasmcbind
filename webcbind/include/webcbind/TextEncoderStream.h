#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface TextEncoderStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream)
 */
DECLARE_EMLITE_TYPE(TextEncoderStream, em_Val);

/**
 * @brief Creates a new `TextEncoderStream` object. 
*/
TextEncoderStream TextEncoderStream_new();

/**
 * @brief Gets the `encoding` property. 
*/
jb_String TextEncoderStream_encoding(const TextEncoderStream *self);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream TextEncoderStream_readable(const TextEncoderStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream TextEncoderStream_writable(const TextEncoderStream *self);

#ifdef __cplusplus
}
#endif
