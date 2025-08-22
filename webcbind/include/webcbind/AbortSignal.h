#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AbortSignal
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal)
 */
DECLARE_EMLITE_TYPE(AbortSignal, EventTarget);

/**
 * @brief Calls the `abort` method. 
*/
AbortSignal AbortSignal_abort0(AbortSignal* self );

/**
 * @brief Calls the `abort` method. 
*/
AbortSignal AbortSignal_abort1(AbortSignal* self , jb_Any * reason);

/**
 * @brief Calls the `timeout` method. 
*/
AbortSignal AbortSignal_timeout(AbortSignal* self , long long milliseconds);

/**
 * @brief Calls the `any` method. 
*/
AbortSignal AbortSignal_any(AbortSignal* self , jb_Array * signals);

/**
 * @brief Gets the `aborted` property. 
*/
bool AbortSignal_aborted(const AbortSignal *self);

/**
 * @brief Gets the `reason` property. 
*/
jb_Any AbortSignal_reason(const AbortSignal *self);

/**
 * @brief Calls the `throwIfAborted` method. 
*/
jb_Undefined AbortSignal_throwIfAborted(AbortSignal* self );

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any AbortSignal_onabort(const AbortSignal *self);

/**
 * @brief Sets the `onabort` property. 
*/
void AbortSignal_set_onabort(AbortSignal* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
