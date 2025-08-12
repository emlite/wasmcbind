#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ReadableStreamDefaultController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController)
 */
DECLARE_EMLITE_TYPE(ReadableStreamDefaultController, em_Val);

/**
 * @brief Gets the `desiredSize` property. 
*/
double ReadableStreamDefaultController_desiredSize(const ReadableStreamDefaultController *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined ReadableStreamDefaultController_close(ReadableStreamDefaultController* self );

/**
 * @brief Calls the `enqueue` method. 
*/
jb_Undefined ReadableStreamDefaultController_enqueue0(ReadableStreamDefaultController* self );

/**
 * @brief Calls the `enqueue` method. 
*/
jb_Undefined ReadableStreamDefaultController_enqueue1(ReadableStreamDefaultController* self , jb_Any * chunk);

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined ReadableStreamDefaultController_error0(ReadableStreamDefaultController* self );

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined ReadableStreamDefaultController_error1(ReadableStreamDefaultController* self , jb_Any * e);

#ifdef __cplusplus
}
#endif
