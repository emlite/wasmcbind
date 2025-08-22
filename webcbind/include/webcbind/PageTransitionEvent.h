#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PageTransitionEventInit PageTransitionEventInit;


/**
 * @brief Interface PageTransitionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent)
 */
DECLARE_EMLITE_TYPE(PageTransitionEvent, Event);

/**
 * @brief Creates a new `PageTransitionEvent` object. 
*/
PageTransitionEvent PageTransitionEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PageTransitionEvent` object. 
*/
PageTransitionEvent PageTransitionEvent_new1(jb_String * type, PageTransitionEventInit * eventInitDict);

/**
 * @brief Gets the `persisted` property. 
*/
bool PageTransitionEvent_persisted(const PageTransitionEvent *self);

#ifdef __cplusplus
}
#endif
