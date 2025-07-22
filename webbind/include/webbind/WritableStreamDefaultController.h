#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} WritableStreamDefaultController;


DECLARE_EMLITE_TYPE(WritableStreamDefaultController, em_Val);

AbortSignal WritableStreamDefaultController_signal( const WritableStreamDefaultController *self);

jb_Undefined WritableStreamDefaultController_error(WritableStreamDefaultController* self );

jb_Undefined WritableStreamDefaultController_error(WritableStreamDefaultController* self , const jb_Any* e);
