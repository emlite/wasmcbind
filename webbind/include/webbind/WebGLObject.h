#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WebGLObject;


DECLARE_EMLITE_TYPE(WebGLObject, em_Val);

jb_USVString WebGLObject_label( const WebGLObject *self);

void WebGLObject_set_label(WebGLObject* self, const jb_USVString* value);
