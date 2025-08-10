#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLContextEventInit WebGLContextEventInit;

DECLARE_EMLITE_TYPE(WebGLContextEvent, Event);

WebGLContextEvent WebGLContextEvent_new0(jb_String * type);

WebGLContextEvent WebGLContextEvent_new1(jb_String * type, WebGLContextEventInit * eventInit);

jb_String WebGLContextEvent_statusMessage(const WebGLContextEvent *self);

#ifdef __cplusplus
}
#endif
