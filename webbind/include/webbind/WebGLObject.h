#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(WebGLObject, em_Val);

jb_USVString WebGLObject_label( const WebGLObject *self);

void WebGLObject_set_label(WebGLObject* self, jb_USVString * value);
