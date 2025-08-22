#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;


/**
 * @brief Interface SharedWorker
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorker)
 */
DECLARE_EMLITE_TYPE(SharedWorker, EventTarget);

/**
 * @brief Creates a new `SharedWorker` object. 
*/
SharedWorker SharedWorker_new0(jb_Any * scriptURL);

/**
 * @brief Creates a new `SharedWorker` object. 
*/
SharedWorker SharedWorker_new1(jb_Any * scriptURL, jb_Any * options);

/**
 * @brief Gets the `port` property. 
*/
MessagePort SharedWorker_port(const SharedWorker *self);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any SharedWorker_onerror(const SharedWorker *self);

/**
 * @brief Sets the `onerror` property. 
*/
void SharedWorker_set_onerror(SharedWorker* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
