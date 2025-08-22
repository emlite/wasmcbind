#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WorkerOptions WorkerOptions;
typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface Worker
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Worker)
 */
DECLARE_EMLITE_TYPE(Worker, EventTarget);

/**
 * @brief Creates a new `Worker` object. 
*/
Worker Worker_new0(jb_Any * scriptURL);

/**
 * @brief Creates a new `Worker` object. 
*/
Worker Worker_new1(jb_Any * scriptURL, WorkerOptions * options);

/**
 * @brief Calls the `terminate` method. 
*/
jb_Undefined Worker_terminate(Worker* self );

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Worker_postMessage0(Worker* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Worker_postMessage1(Worker* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any Worker_onerror(const Worker *self);

/**
 * @brief Sets the `onerror` property. 
*/
void Worker_set_onerror(Worker* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any Worker_onmessage(const Worker *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void Worker_set_onmessage(Worker* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any Worker_onmessageerror(const Worker *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void Worker_set_onmessageerror(Worker* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
