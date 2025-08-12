#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CommandEventInit CommandEventInit;
typedef struct Element Element;


/**
 * @brief Interface CommandEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent)
 */
DECLARE_EMLITE_TYPE(CommandEvent, Event);

/**
 * @brief Creates a new `CommandEvent` object. 
*/
CommandEvent CommandEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CommandEvent` object. 
*/
CommandEvent CommandEvent_new1(jb_String * type, CommandEventInit * eventInitDict);

/**
 * @brief Gets the `source` property. 
*/
Element CommandEvent_source(const CommandEvent *self);

/**
 * @brief Gets the `command` property. 
*/
jb_String CommandEvent_command(const CommandEvent *self);

#ifdef __cplusplus
}
#endif
