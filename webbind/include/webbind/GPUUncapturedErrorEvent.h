#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit;
typedef struct GPUError GPUError;


/**
 * @brief Interface GPUUncapturedErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUUncapturedErrorEvent)
 */
DECLARE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);

/**
 * @brief Creates a new `GPUUncapturedErrorEvent` object. 
*/
GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(jb_String * type, GPUUncapturedErrorEventInit * gpuUncapturedErrorEventInitDict);

/**
 * @brief Gets the `error` property. 
*/
GPUError GPUUncapturedErrorEvent_error(const GPUUncapturedErrorEvent *self);

#ifdef __cplusplus
}
#endif
