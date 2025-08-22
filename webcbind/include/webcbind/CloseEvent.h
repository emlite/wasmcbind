#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CloseEventInit CloseEventInit;


/**
 * @brief Interface CloseEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent)
 */
DECLARE_EMLITE_TYPE(CloseEvent, Event);

/**
 * @brief Creates a new `CloseEvent` object. 
*/
CloseEvent CloseEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CloseEvent` object. 
*/
CloseEvent CloseEvent_new1(jb_String * type, CloseEventInit * eventInitDict);

/**
 * @brief Gets the `wasClean` property. 
*/
bool CloseEvent_wasClean(const CloseEvent *self);

/**
 * @brief Gets the `code` property. 
*/
unsigned short CloseEvent_code(const CloseEvent *self);

/**
 * @brief Gets the `reason` property. 
*/
jb_String CloseEvent_reason(const CloseEvent *self);

#ifdef __cplusplus
}
#endif
