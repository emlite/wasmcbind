#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WritableStream WritableStream;


typedef struct {
  em_Val inner;
} WritableStreamDefaultWriter;


DECLARE_EMLITE_TYPE(WritableStreamDefaultWriter, em_Val);

WritableStreamDefaultWriter WritableStreamDefaultWriter_new(const WritableStream* stream);

jb_Promise WritableStreamDefaultWriter_closed( const WritableStreamDefaultWriter *self);

double WritableStreamDefaultWriter_desiredSize( const WritableStreamDefaultWriter *self);

jb_Promise WritableStreamDefaultWriter_ready( const WritableStreamDefaultWriter *self);

jb_Promise WritableStreamDefaultWriter_abort(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_abort(WritableStreamDefaultWriter* self , const jb_Any* reason);

jb_Promise WritableStreamDefaultWriter_close(WritableStreamDefaultWriter* self );

jb_Undefined WritableStreamDefaultWriter_releaseLock(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_write(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_write(WritableStreamDefaultWriter* self , const jb_Any* chunk);
