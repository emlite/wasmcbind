#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;


/**
 * @brief Interface WritableStreamDefaultController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultController)
 */
DECLARE_EMLITE_TYPE(WritableStreamDefaultController, em_Val);

/**
 * @brief Gets the `signal` property. 
*/
AbortSignal WritableStreamDefaultController_signal(const WritableStreamDefaultController *self);

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined WritableStreamDefaultController_error0(WritableStreamDefaultController* self );

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined WritableStreamDefaultController_error1(WritableStreamDefaultController* self , jb_Any * e);

#ifdef __cplusplus
}
#endif
