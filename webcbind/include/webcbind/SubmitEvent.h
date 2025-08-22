#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SubmitEventInit SubmitEventInit;
typedef struct HTMLElement HTMLElement;


/**
 * @brief Interface SubmitEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SubmitEvent)
 */
DECLARE_EMLITE_TYPE(SubmitEvent, Event);

/**
 * @brief Creates a new `SubmitEvent` object. 
*/
SubmitEvent SubmitEvent_new0(jb_String * type);

/**
 * @brief Creates a new `SubmitEvent` object. 
*/
SubmitEvent SubmitEvent_new1(jb_String * type, SubmitEventInit * eventInitDict);

/**
 * @brief Gets the `submitter` property. 
*/
HTMLElement SubmitEvent_submitter(const SubmitEvent *self);

#ifdef __cplusplus
}
#endif
