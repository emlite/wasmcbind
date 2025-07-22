#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(WebGLContextEvent, Event);

WebGLContextEvent WebGLContextEvent_new0(jb_DOMString * type);

WebGLContextEvent WebGLContextEvent_new1(jb_DOMString * type, jb_Any * eventInit);

jb_DOMString WebGLContextEvent_statusMessage( const WebGLContextEvent *self);
