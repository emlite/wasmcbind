#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface DedicatedWorkerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope)
 */
DECLARE_EMLITE_TYPE(DedicatedWorkerGlobalScope, WorkerGlobalScope);

/**
 * @brief Gets the `name` property. 
*/
jb_String DedicatedWorkerGlobalScope_name(const DedicatedWorkerGlobalScope *self);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined DedicatedWorkerGlobalScope_postMessage0(DedicatedWorkerGlobalScope* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined DedicatedWorkerGlobalScope_postMessage1(DedicatedWorkerGlobalScope* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined DedicatedWorkerGlobalScope_close(DedicatedWorkerGlobalScope* self );

/**
 * @brief Gets the `onrtctransform` property. 
*/
jb_Any DedicatedWorkerGlobalScope_onrtctransform(const DedicatedWorkerGlobalScope *self);

/**
 * @brief Sets the `onrtctransform` property. 
*/
void DedicatedWorkerGlobalScope_set_onrtctransform(DedicatedWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Calls the `requestAnimationFrame` method. 
*/
unsigned long DedicatedWorkerGlobalScope_requestAnimationFrame(DedicatedWorkerGlobalScope* self , jb_Function * callback);

/**
 * @brief Calls the `cancelAnimationFrame` method. 
*/
jb_Undefined DedicatedWorkerGlobalScope_cancelAnimationFrame(DedicatedWorkerGlobalScope* self , unsigned long handle);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any DedicatedWorkerGlobalScope_onmessage(const DedicatedWorkerGlobalScope *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void DedicatedWorkerGlobalScope_set_onmessage(DedicatedWorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any DedicatedWorkerGlobalScope_onmessageerror(const DedicatedWorkerGlobalScope *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void DedicatedWorkerGlobalScope_set_onmessageerror(DedicatedWorkerGlobalScope* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
