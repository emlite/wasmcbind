#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLContextEventInit WebGLContextEventInit;


/**
 * @brief Interface WebGLContextEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLContextEvent)
 */
DECLARE_EMLITE_TYPE(WebGLContextEvent, Event);

/**
 * @brief Creates a new `WebGLContextEvent` object. 
*/
WebGLContextEvent WebGLContextEvent_new0(jb_String * type);

/**
 * @brief Creates a new `WebGLContextEvent` object. 
*/
WebGLContextEvent WebGLContextEvent_new1(jb_String * type, WebGLContextEventInit * eventInit);

/**
 * @brief Gets the `statusMessage` property. 
*/
jb_String WebGLContextEvent_statusMessage(const WebGLContextEvent *self);

#ifdef __cplusplus
}
#endif
