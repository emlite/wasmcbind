#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface DecompressionStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream)
 */
DECLARE_EMLITE_TYPE(DecompressionStream, em_Val);

/**
 * @brief Creates a new `DecompressionStream` object. 
*/
DecompressionStream DecompressionStream_new(CompressionFormat * format);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream DecompressionStream_readable(const DecompressionStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream DecompressionStream_writable(const DecompressionStream *self);

#ifdef __cplusplus
}
#endif
