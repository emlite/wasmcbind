#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface TransformStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream)
 */
DECLARE_EMLITE_TYPE(TransformStream, em_Val);

/**
 * @brief Creates a new `TransformStream` object. 
*/
TransformStream TransformStream_new0();

/**
 * @brief Creates a new `TransformStream` object. 
*/
TransformStream TransformStream_new1(jb_Object * transformer);

/**
 * @brief Creates a new `TransformStream` object. 
*/
TransformStream TransformStream_new2(jb_Object * transformer, QueuingStrategy * writableStrategy);

/**
 * @brief Creates a new `TransformStream` object. 
*/
TransformStream TransformStream_new3(jb_Object * transformer, QueuingStrategy * writableStrategy, QueuingStrategy * readableStrategy);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream TransformStream_readable(const TransformStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream TransformStream_writable(const TransformStream *self);

#ifdef __cplusplus
}
#endif
