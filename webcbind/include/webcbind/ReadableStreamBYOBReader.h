#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamReadResult ReadableStreamReadResult;
typedef struct ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions;


/**
 * @brief Interface ReadableStreamBYOBReader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader)
 */
DECLARE_EMLITE_TYPE(ReadableStreamBYOBReader, em_Val);

/**
 * @brief Creates a new `ReadableStreamBYOBReader` object. 
*/
ReadableStreamBYOBReader ReadableStreamBYOBReader_new(ReadableStream * stream);

/**
 * @brief Calls the `read` method. 
*/
jb_Promise ReadableStreamBYOBReader_read0(ReadableStreamBYOBReader* self , jb_Any * view);

/**
 * @brief Calls the `read` method. 
*/
jb_Promise ReadableStreamBYOBReader_read1(ReadableStreamBYOBReader* self , jb_Any * view, ReadableStreamBYOBReaderReadOptions * options);

/**
 * @brief Calls the `releaseLock` method. 
*/
jb_Undefined ReadableStreamBYOBReader_releaseLock(ReadableStreamBYOBReader* self );

/**
 * @brief Gets the `closed` property. 
*/
jb_Promise ReadableStreamBYOBReader_closed(const ReadableStreamBYOBReader *self);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStreamBYOBReader_cancel0(ReadableStreamBYOBReader* self );

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStreamBYOBReader_cancel1(ReadableStreamBYOBReader* self , jb_Any * reason);

#ifdef __cplusplus
}
#endif
