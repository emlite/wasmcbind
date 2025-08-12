#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStreamBYOBRequest ReadableStreamBYOBRequest;


/**
 * @brief Interface ReadableByteStreamController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController)
 */
DECLARE_EMLITE_TYPE(ReadableByteStreamController, em_Val);

/**
 * @brief Gets the `byobRequest` property. 
*/
ReadableStreamBYOBRequest ReadableByteStreamController_byobRequest(const ReadableByteStreamController *self);

/**
 * @brief Gets the `desiredSize` property. 
*/
double ReadableByteStreamController_desiredSize(const ReadableByteStreamController *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined ReadableByteStreamController_close(ReadableByteStreamController* self );

/**
 * @brief Calls the `enqueue` method. 
*/
jb_Undefined ReadableByteStreamController_enqueue(ReadableByteStreamController* self , jb_Any * chunk);

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined ReadableByteStreamController_error0(ReadableByteStreamController* self );

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined ReadableByteStreamController_error1(ReadableByteStreamController* self , jb_Any * e);

#ifdef __cplusplus
}
#endif
