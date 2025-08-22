#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PageRevealEventInit PageRevealEventInit;
typedef struct ViewTransition ViewTransition;


/**
 * @brief Interface PageRevealEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PageRevealEvent)
 */
DECLARE_EMLITE_TYPE(PageRevealEvent, Event);

/**
 * @brief Creates a new `PageRevealEvent` object. 
*/
PageRevealEvent PageRevealEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PageRevealEvent` object. 
*/
PageRevealEvent PageRevealEvent_new1(jb_String * type, PageRevealEventInit * eventInitDict);

/**
 * @brief Gets the `viewTransition` property. 
*/
ViewTransition PageRevealEvent_viewTransition(const PageRevealEvent *self);

#ifdef __cplusplus
}
#endif
