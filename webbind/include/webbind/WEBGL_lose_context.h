#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_lose_context;


DECLARE_EMLITE_TYPE(WEBGL_lose_context, em_Val);

jb_Undefined WEBGL_lose_context_loseContext(WEBGL_lose_context* self );

jb_Undefined WEBGL_lose_context_restoreContext(WEBGL_lose_context* self );
