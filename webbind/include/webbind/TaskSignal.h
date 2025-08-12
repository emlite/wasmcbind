#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbortSignal.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskSignalAnyInit TaskSignalAnyInit;


/**
 * @brief Interface TaskSignal
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TaskSignal)
 */
DECLARE_EMLITE_TYPE(TaskSignal, AbortSignal);

/**
 * @brief Calls the `any` method. 
*/
TaskSignal TaskSignal_any0(TaskSignal* self , jb_Array * signals);

/**
 * @brief Calls the `any` method. 
*/
TaskSignal TaskSignal_any1(TaskSignal* self , jb_Array * signals, TaskSignalAnyInit * init);

/**
 * @brief Gets the `priority` property. 
*/
TaskPriority TaskSignal_priority(const TaskSignal *self);

/**
 * @brief Gets the `onprioritychange` property. 
*/
jb_Any TaskSignal_onprioritychange(const TaskSignal *self);

/**
 * @brief Sets the `onprioritychange` property. 
*/
void TaskSignal_set_onprioritychange(TaskSignal* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
