#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type SchedulerPostTaskOptions */
DECLARE_EMLITE_TYPE(SchedulerPostTaskOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal SchedulerPostTaskOptions_signal(const SchedulerPostTaskOptions *self);

/** @brief Setter of the signal property */
void SchedulerPostTaskOptions_set_signal(SchedulerPostTaskOptions* self, AbortSignal * value);

/** @brief Getter of the priority property */
TaskPriority SchedulerPostTaskOptions_priority(const SchedulerPostTaskOptions *self);

/** @brief Setter of the priority property */
void SchedulerPostTaskOptions_set_priority(SchedulerPostTaskOptions* self, TaskPriority * value);

/** @brief Getter of the delay property */
long long SchedulerPostTaskOptions_delay(const SchedulerPostTaskOptions *self);

/** @brief Setter of the delay property */
void SchedulerPostTaskOptions_set_delay(SchedulerPostTaskOptions* self, long long value);

/** @brief Constructor of the SchedulerPostTaskOptions dictionary type */
SchedulerPostTaskOptions SchedulerPostTaskOptions_new();

#ifdef __cplusplus
}
#endif
