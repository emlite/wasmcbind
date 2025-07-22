#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} AbortController;


DECLARE_EMLITE_TYPE(AbortController, em_Val);

AbortController AbortController_new();

AbortSignal AbortController_signal( const AbortController *self);

jb_Undefined AbortController_abort(AbortController* self );

jb_Undefined AbortController_abort(AbortController* self , const jb_Any* reason);
