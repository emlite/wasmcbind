#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ToggleEventInit ToggleEventInit;
typedef struct Element Element;


/**
 * @brief Interface ToggleEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ToggleEvent)
 */
DECLARE_EMLITE_TYPE(ToggleEvent, Event);

/**
 * @brief Creates a new `ToggleEvent` object. 
*/
ToggleEvent ToggleEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ToggleEvent` object. 
*/
ToggleEvent ToggleEvent_new1(jb_String * type, ToggleEventInit * eventInitDict);

/**
 * @brief Gets the `oldState` property. 
*/
jb_String ToggleEvent_oldState(const ToggleEvent *self);

/**
 * @brief Gets the `newState` property. 
*/
jb_String ToggleEvent_newState(const ToggleEvent *self);

/**
 * @brief Gets the `source` property. 
*/
Element ToggleEvent_source(const ToggleEvent *self);

#ifdef __cplusplus
}
#endif
