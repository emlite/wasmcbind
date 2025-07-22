#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} WebGLContextEvent;


DECLARE_EMLITE_TYPE(WebGLContextEvent, Event);

WebGLContextEvent WebGLContextEvent_new(const jb_DOMString* type);

WebGLContextEvent WebGLContextEvent_new(const jb_DOMString* type, const jb_Any* eventInit);

jb_DOMString WebGLContextEvent_statusMessage( const WebGLContextEvent *self);
