#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;


/**
 * @brief Interface AbortController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AbortController)
 */
DECLARE_EMLITE_TYPE(AbortController, em_Val);

/**
 * @brief Creates a new `AbortController` object. 
*/
AbortController AbortController_new();

/**
 * @brief Gets the `signal` property. 
*/
AbortSignal AbortController_signal(const AbortController *self);

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined AbortController_abort0(AbortController* self );

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined AbortController_abort1(AbortController* self , jb_Any * reason);

#ifdef __cplusplus
}
#endif
