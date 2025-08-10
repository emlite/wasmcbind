#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions;
typedef struct ReadableWritablePair ReadableWritablePair;
typedef struct StreamPipeOptions StreamPipeOptions;
typedef struct WritableStream WritableStream;

DECLARE_EMLITE_TYPE(ReadableStream, em_Val);

ReadableStream ReadableStream_new0();

ReadableStream ReadableStream_new1(jb_Object * underlyingSource);

ReadableStream ReadableStream_new2(jb_Object * underlyingSource, QueuingStrategy * strategy);

ReadableStream ReadableStream_from(ReadableStream* self , jb_Any * asyncIterable);

bool ReadableStream_locked(const ReadableStream *self);

jb_Promise ReadableStream_cancel0(ReadableStream* self );

jb_Promise ReadableStream_cancel1(ReadableStream* self , jb_Any * reason);

jb_Any ReadableStream_getReader0(ReadableStream* self );

jb_Any ReadableStream_getReader1(ReadableStream* self , ReadableStreamGetReaderOptions * options);

ReadableStream ReadableStream_pipeThrough0(ReadableStream* self , ReadableWritablePair * transform);

ReadableStream ReadableStream_pipeThrough1(ReadableStream* self , ReadableWritablePair * transform, StreamPipeOptions * options);

jb_Promise ReadableStream_pipeTo0(ReadableStream* self , WritableStream * destination);

jb_Promise ReadableStream_pipeTo1(ReadableStream* self , WritableStream * destination, StreamPipeOptions * options);

jb_Array ReadableStream_tee(ReadableStream* self );

#ifdef __cplusplus
}
#endif
