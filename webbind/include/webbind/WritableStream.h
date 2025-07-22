#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WritableStreamDefaultWriter WritableStreamDefaultWriter;


typedef struct {
  em_Val inner;
} WritableStream;


DECLARE_EMLITE_TYPE(WritableStream, em_Val);

WritableStream WritableStream_new();

WritableStream WritableStream_new(const jb_Object* underlyingSink);

WritableStream WritableStream_new(const jb_Object* underlyingSink, const jb_Any* strategy);

bool WritableStream_locked( const WritableStream *self);

jb_Promise WritableStream_abort(WritableStream* self );

jb_Promise WritableStream_abort(WritableStream* self , const jb_Any* reason);

jb_Promise WritableStream_close(WritableStream* self );

WritableStreamDefaultWriter WritableStream_getWriter(WritableStream* self );
