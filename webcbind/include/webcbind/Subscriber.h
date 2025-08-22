#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;


/**
 * @brief Interface Subscriber
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber)
 */
DECLARE_EMLITE_TYPE(Subscriber, em_Val);

/**
 * @brief Calls the `next` method. 
*/
jb_Undefined Subscriber_next(Subscriber* self , jb_Any * value);

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined Subscriber_error(Subscriber* self , jb_Any * error);

/**
 * @brief Calls the `complete` method. 
*/
jb_Undefined Subscriber_complete(Subscriber* self );

/**
 * @brief Calls the `addTeardown` method. 
*/
jb_Undefined Subscriber_addTeardown(Subscriber* self , jb_Function * teardown);

/**
 * @brief Gets the `active` property. 
*/
bool Subscriber_active(const Subscriber *self);

/**
 * @brief Gets the `signal` property. 
*/
AbortSignal Subscriber_signal(const Subscriber *self);

#ifdef __cplusplus
}
#endif
