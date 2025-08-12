#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchEventInit BackgroundFetchEventInit;
typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;


/**
 * @brief Interface BackgroundFetchEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchEvent)
 */
DECLARE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);

/**
 * @brief Creates a new `BackgroundFetchEvent` object. 
*/
BackgroundFetchEvent BackgroundFetchEvent_new(jb_String * type, BackgroundFetchEventInit * init);

/**
 * @brief Gets the `registration` property. 
*/
BackgroundFetchRegistration BackgroundFetchEvent_registration(const BackgroundFetchEvent *self);

#ifdef __cplusplus
}
#endif
