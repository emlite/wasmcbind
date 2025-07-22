#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ReadableStreamDefaultReader.h"
#include "enums.h"

typedef struct ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions;


typedef struct {
  em_Val inner;
} ReadableStreamBYOBReaderReadOptions;


DECLARE_EMLITE_TYPE(ReadableStreamBYOBReaderReadOptions, em_Val);

long long ReadableStreamBYOBReaderReadOptions_min( const ReadableStreamBYOBReaderReadOptions *self);

void ReadableStreamBYOBReaderReadOptions_set_min(ReadableStreamBYOBReaderReadOptions* self, long long value);
typedef struct {
  em_Val inner;
} ReadableStreamBYOBReader;


DECLARE_EMLITE_TYPE(ReadableStreamBYOBReader, em_Val);

ReadableStreamBYOBReader ReadableStreamBYOBReader_new(const ReadableStream* stream);

jb_Promise ReadableStreamBYOBReader_read(ReadableStreamBYOBReader* self , const jb_Any* view);

jb_Promise ReadableStreamBYOBReader_read(ReadableStreamBYOBReader* self , const jb_Any* view, const ReadableStreamBYOBReaderReadOptions* options);

jb_Undefined ReadableStreamBYOBReader_releaseLock(ReadableStreamBYOBReader* self );

jb_Promise ReadableStreamBYOBReader_closed( const ReadableStreamBYOBReader *self);

jb_Promise ReadableStreamBYOBReader_cancel(ReadableStreamBYOBReader* self );

jb_Promise ReadableStreamBYOBReader_cancel(ReadableStreamBYOBReader* self , const jb_Any* reason);
