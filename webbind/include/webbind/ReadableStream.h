#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions;
typedef struct ReadableWritablePair ReadableWritablePair;
typedef struct StreamPipeOptions StreamPipeOptions;
typedef struct WritableStream WritableStream;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} ReadableStreamGetReaderOptions;


DECLARE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);

ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode( const ReadableStreamGetReaderOptions *self);

void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, const ReadableStreamReaderMode* value);
typedef struct {
  em_Val inner;
} ReadableWritablePair;


DECLARE_EMLITE_TYPE(ReadableWritablePair, em_Val);

ReadableStream ReadableWritablePair_readable( const ReadableWritablePair *self);

void ReadableWritablePair_set_readable(ReadableWritablePair* self, const ReadableStream* value);

WritableStream ReadableWritablePair_writable( const ReadableWritablePair *self);

void ReadableWritablePair_set_writable(ReadableWritablePair* self, const WritableStream* value);
typedef struct {
  em_Val inner;
} StreamPipeOptions;


DECLARE_EMLITE_TYPE(StreamPipeOptions, em_Val);

bool StreamPipeOptions_preventClose( const StreamPipeOptions *self);

void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventAbort( const StreamPipeOptions *self);

void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventCancel( const StreamPipeOptions *self);

void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value);

AbortSignal StreamPipeOptions_signal( const StreamPipeOptions *self);

void StreamPipeOptions_set_signal(StreamPipeOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} ReadableStream;


DECLARE_EMLITE_TYPE(ReadableStream, em_Val);

ReadableStream ReadableStream_new();

ReadableStream ReadableStream_new(const jb_Object* underlyingSource);

ReadableStream ReadableStream_new(const jb_Object* underlyingSource, const jb_Any* strategy);

ReadableStream ReadableStream_from(ReadableStream* self , const jb_Any* asyncIterable);

bool ReadableStream_locked( const ReadableStream *self);

jb_Promise ReadableStream_cancel(ReadableStream* self );

jb_Promise ReadableStream_cancel(ReadableStream* self , const jb_Any* reason);

jb_Any ReadableStream_getReader(ReadableStream* self );

jb_Any ReadableStream_getReader(ReadableStream* self , const ReadableStreamGetReaderOptions* options);

ReadableStream ReadableStream_pipeThrough(ReadableStream* self , const ReadableWritablePair* transform);

ReadableStream ReadableStream_pipeThrough(ReadableStream* self , const ReadableWritablePair* transform, const StreamPipeOptions* options);

jb_Promise ReadableStream_pipeTo(ReadableStream* self , const WritableStream* destination);

jb_Promise ReadableStream_pipeTo(ReadableStream* self , const WritableStream* destination, const StreamPipeOptions* options);

jb_Sequence ReadableStream_tee(ReadableStream* self );
