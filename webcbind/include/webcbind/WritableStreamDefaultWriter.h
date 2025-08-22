#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WritableStream WritableStream;


/**
 * @brief Interface WritableStreamDefaultWriter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter)
 */
DECLARE_EMLITE_TYPE(WritableStreamDefaultWriter, em_Val);

/**
 * @brief Creates a new `WritableStreamDefaultWriter` object. 
*/
WritableStreamDefaultWriter WritableStreamDefaultWriter_new(WritableStream * stream);

/**
 * @brief Gets the `closed` property. 
*/
jb_Promise WritableStreamDefaultWriter_closed(const WritableStreamDefaultWriter *self);

/**
 * @brief Gets the `desiredSize` property. 
*/
double WritableStreamDefaultWriter_desiredSize(const WritableStreamDefaultWriter *self);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise WritableStreamDefaultWriter_ready(const WritableStreamDefaultWriter *self);

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise WritableStreamDefaultWriter_abort0(WritableStreamDefaultWriter* self );

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise WritableStreamDefaultWriter_abort1(WritableStreamDefaultWriter* self , jb_Any * reason);

/**
 * @brief Calls the `close` method. 
*/
jb_Promise WritableStreamDefaultWriter_close(WritableStreamDefaultWriter* self );

/**
 * @brief Calls the `releaseLock` method. 
*/
jb_Undefined WritableStreamDefaultWriter_releaseLock(WritableStreamDefaultWriter* self );

/**
 * @brief Calls the `write` method. 
*/
jb_Promise WritableStreamDefaultWriter_write0(WritableStreamDefaultWriter* self );

/**
 * @brief Calls the `write` method. 
*/
jb_Promise WritableStreamDefaultWriter_write1(WritableStreamDefaultWriter* self , jb_Any * chunk);

#ifdef __cplusplus
}
#endif
