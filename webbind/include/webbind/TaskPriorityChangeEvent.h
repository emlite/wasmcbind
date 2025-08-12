#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskPriorityChangeEventInit TaskPriorityChangeEventInit;


/**
 * @brief Interface TaskPriorityChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent)
 */
DECLARE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);

/**
 * @brief Creates a new `TaskPriorityChangeEvent` object. 
*/
TaskPriorityChangeEvent TaskPriorityChangeEvent_new(jb_String * type, TaskPriorityChangeEventInit * priorityChangeEventInitDict);

/**
 * @brief Gets the `previousPriority` property. 
*/
TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self);

#ifdef __cplusplus
}
#endif
