#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SchedulerPostTaskOptions SchedulerPostTaskOptions;


/**
 * @brief Interface Scheduler
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Scheduler)
 */
DECLARE_EMLITE_TYPE(Scheduler, em_Val);

/**
 * @brief Calls the `postTask` method. 
*/
jb_Promise Scheduler_postTask0(Scheduler* self , jb_Function * callback);

/**
 * @brief Calls the `postTask` method. 
*/
jb_Promise Scheduler_postTask1(Scheduler* self , jb_Function * callback, SchedulerPostTaskOptions * options);

/**
 * @brief Calls the `yield` method. 
*/
jb_Promise Scheduler_yield(Scheduler* self );

#ifdef __cplusplus
}
#endif
