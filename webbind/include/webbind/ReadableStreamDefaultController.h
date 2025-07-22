#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ReadableStreamDefaultController;


DECLARE_EMLITE_TYPE(ReadableStreamDefaultController, em_Val);

double ReadableStreamDefaultController_desiredSize( const ReadableStreamDefaultController *self);

jb_Undefined ReadableStreamDefaultController_close(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_enqueue(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_enqueue(ReadableStreamDefaultController* self , const jb_Any* chunk);

jb_Undefined ReadableStreamDefaultController_error(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_error(ReadableStreamDefaultController* self , const jb_Any* e);
