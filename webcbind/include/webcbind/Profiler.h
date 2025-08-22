#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ProfilerInitOptions ProfilerInitOptions;
typedef struct ProfilerTrace ProfilerTrace;


/**
 * @brief Interface Profiler
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Profiler)
 */
DECLARE_EMLITE_TYPE(Profiler, EventTarget);

/**
 * @brief Gets the `sampleInterval` property. 
*/
jb_Any Profiler_sampleInterval(const Profiler *self);

/**
 * @brief Gets the `stopped` property. 
*/
bool Profiler_stopped(const Profiler *self);

/**
 * @brief Creates a new `Profiler` object. 
*/
Profiler Profiler_new(ProfilerInitOptions * options);

/**
 * @brief Calls the `stop` method. 
*/
jb_Promise Profiler_stop(Profiler* self );

#ifdef __cplusplus
}
#endif
