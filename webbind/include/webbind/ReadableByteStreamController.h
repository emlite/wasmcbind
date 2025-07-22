#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStreamBYOBRequest ReadableStreamBYOBRequest;


typedef struct {
  em_Val inner;
} ReadableByteStreamController;


DECLARE_EMLITE_TYPE(ReadableByteStreamController, em_Val);

ReadableStreamBYOBRequest ReadableByteStreamController_byobRequest( const ReadableByteStreamController *self);

double ReadableByteStreamController_desiredSize( const ReadableByteStreamController *self);

jb_Undefined ReadableByteStreamController_close(ReadableByteStreamController* self );

jb_Undefined ReadableByteStreamController_enqueue(ReadableByteStreamController* self , const jb_Any* chunk);

jb_Undefined ReadableByteStreamController_error(ReadableByteStreamController* self );

jb_Undefined ReadableByteStreamController_error(ReadableByteStreamController* self , const jb_Any* e);
