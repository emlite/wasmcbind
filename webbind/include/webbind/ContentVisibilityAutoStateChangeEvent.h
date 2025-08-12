#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit;


/**
 * @brief Interface ContentVisibilityAutoStateChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ContentVisibilityAutoStateChangeEvent)
 */
DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);

/**
 * @brief Creates a new `ContentVisibilityAutoStateChangeEvent` object. 
*/
ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ContentVisibilityAutoStateChangeEvent` object. 
*/
ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new1(jb_String * type, ContentVisibilityAutoStateChangeEventInit * eventInitDict);

/**
 * @brief Gets the `skipped` property. 
*/
bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self);

#ifdef __cplusplus
}
#endif
