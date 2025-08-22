#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamReadResult ReadableStreamReadResult;


/**
 * @brief Interface ReadableStreamDefaultReader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader)
 */
DECLARE_EMLITE_TYPE(ReadableStreamDefaultReader, em_Val);

/**
 * @brief Creates a new `ReadableStreamDefaultReader` object. 
*/
ReadableStreamDefaultReader ReadableStreamDefaultReader_new(ReadableStream * stream);

/**
 * @brief Calls the `read` method. 
*/
jb_Promise ReadableStreamDefaultReader_read(ReadableStreamDefaultReader* self );

/**
 * @brief Calls the `releaseLock` method. 
*/
jb_Undefined ReadableStreamDefaultReader_releaseLock(ReadableStreamDefaultReader* self );

/**
 * @brief Gets the `closed` property. 
*/
jb_Promise ReadableStreamDefaultReader_closed(const ReadableStreamDefaultReader *self);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStreamDefaultReader_cancel0(ReadableStreamDefaultReader* self );

/**
 * @brief Calls the `cancel` method. 
*/
jb_Promise ReadableStreamDefaultReader_cancel1(ReadableStreamDefaultReader* self , jb_Any * reason);

#ifdef __cplusplus
}
#endif
