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
 * @brief Interface CompressionStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CompressionStream)
 */
DECLARE_EMLITE_TYPE(CompressionStream, em_Val);

/**
 * @brief Creates a new `CompressionStream` object. 
*/
CompressionStream CompressionStream_new(CompressionFormat * format);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream CompressionStream_readable(const CompressionStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream CompressionStream_writable(const CompressionStream *self);

#ifdef __cplusplus
}
#endif
