#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions;
typedef struct ReadableWritablePair ReadableWritablePair;
typedef struct StreamPipeOptions StreamPipeOptions;
typedef struct WritableStream WritableStream;


/**
 * @brief Interface ReadableStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream)
 */
DECLARE_EMLITE_TYPE(ReadableStream, em_Val);

/**
 * @brief Creates a new `ReadableStream` object. 
*/
ReadableStream ReadableStream_new0();

/**
 * @brief Creates a new `ReadableStream` object. 
*/
ReadableStream ReadableStream_new1(jb_Object * underlyingSource);

/**
 * @brief Creates a new `ReadableStream` object. 
*/
ReadableStream ReadableStream_new2(jb_Object * underlyingSource, QueuingStrategy * strategy);

/**
 * @brief Calls the `from` method. 
*/
ReadableStream ReadableStream_from(ReadableStream* self , jb_Any * asyncIterable);

/**
 * @brief Gets the `locked` property. 
*/
bool ReadableStream_locked(const ReadableStream *self);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStream_cancel0(ReadableStream* self );

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStream_cancel1(ReadableStream* self , jb_Any * reason);

/**
 * @brief Calls the `getReader` method. 
*/
jb_Any ReadableStream_getReader0(ReadableStream* self );

/**
 * @brief Calls the `getReader` method. 
*/
jb_Any ReadableStream_getReader1(ReadableStream* self , ReadableStreamGetReaderOptions * options);

/**
 * @brief Calls the `pipeThrough` method. 
*/
ReadableStream ReadableStream_pipeThrough0(ReadableStream* self , ReadableWritablePair * transform);

/**
 * @brief Calls the `pipeThrough` method. 
*/
ReadableStream ReadableStream_pipeThrough1(ReadableStream* self , ReadableWritablePair * transform, StreamPipeOptions * options);

/**
 * @brief Calls the `pipeTo` method. 
*/
jb_Promise ReadableStream_pipeTo0(ReadableStream* self , WritableStream * destination);

/**
 * @brief Calls the `pipeTo` method. 
*/
jb_Promise ReadableStream_pipeTo1(ReadableStream* self , WritableStream * destination, StreamPipeOptions * options);

/**
 * @brief Calls the `tee` method. 
*/
jb_Array ReadableStream_tee(ReadableStream* self );

#ifdef __cplusplus
}
#endif
