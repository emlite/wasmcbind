#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AbortController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TaskControllerInit TaskControllerInit;


/**
 * @brief Interface TaskController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TaskController)
 */
DECLARE_EMLITE_TYPE(TaskController, AbortController);

/**
 * @brief Creates a new `TaskController` object. 
*/
TaskController TaskController_new0();

/**
 * @brief Creates a new `TaskController` object. 
*/
TaskController TaskController_new1(TaskControllerInit * init);

/**
 * @brief Calls the `setPriority` method. 
*/
jb_Undefined TaskController_setPriority(TaskController* self , TaskPriority * priority);

#ifdef __cplusplus
}
#endif
