#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentIndexEventInit ContentIndexEventInit;


/**
 * @brief Interface ContentIndexEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent)
 */
DECLARE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);

/**
 * @brief Creates a new `ContentIndexEvent` object. 
*/
ContentIndexEvent ContentIndexEvent_new(jb_String * type, ContentIndexEventInit * init);

/**
 * @brief Gets the `id` property. 
*/
jb_String ContentIndexEvent_id(const ContentIndexEvent *self);

#ifdef __cplusplus
}
#endif
