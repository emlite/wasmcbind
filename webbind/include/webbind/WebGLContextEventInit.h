#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebGLContextEventInit, EventInit);

jb_String WebGLContextEventInit_statusMessage(const WebGLContextEventInit *self);

void WebGLContextEventInit_set_statusMessage(WebGLContextEventInit* self, jb_String * value);

WebGLContextEventInit WebGLContextEventInit_new();

#ifdef __cplusplus
}
#endif
