#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(WebGLActiveInfo, em_Val);

jb_Any WebGLActiveInfo_size( const WebGLActiveInfo *self);

jb_Any WebGLActiveInfo_type( const WebGLActiveInfo *self);

jb_DOMString WebGLActiveInfo_name( const WebGLActiveInfo *self);
