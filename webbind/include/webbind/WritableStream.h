#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct WritableStreamDefaultWriter WritableStreamDefaultWriter;


/**
 * @brief Interface WritableStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream)
 */
DECLARE_EMLITE_TYPE(WritableStream, em_Val);

/**
 * @brief Creates a new `WritableStream` object. 
*/
WritableStream WritableStream_new0();

/**
 * @brief Creates a new `WritableStream` object. 
*/
WritableStream WritableStream_new1(jb_Object * underlyingSink);

/**
 * @brief Creates a new `WritableStream` object. 
*/
WritableStream WritableStream_new2(jb_Object * underlyingSink, QueuingStrategy * strategy);

/**
 * @brief Gets the `locked` property. 
*/
bool WritableStream_locked(const WritableStream *self);

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise WritableStream_abort0(WritableStream* self );

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise WritableStream_abort1(WritableStream* self , jb_Any * reason);

/**
 * @brief Calls the `close` method. 
*/
jb_Promise WritableStream_close(WritableStream* self );

/**
 * @brief Calls the `getWriter` method. 
*/
WritableStreamDefaultWriter WritableStream_getWriter(WritableStream* self );

#ifdef __cplusplus
}
#endif
