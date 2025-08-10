#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamReadResult ReadableStreamReadResult;

DECLARE_EMLITE_TYPE(ReadableStreamDefaultReader, em_Val);

ReadableStreamDefaultReader ReadableStreamDefaultReader_new(ReadableStream * stream);

jb_Promise ReadableStreamDefaultReader_read(ReadableStreamDefaultReader* self );

jb_Undefined ReadableStreamDefaultReader_releaseLock(ReadableStreamDefaultReader* self );

jb_Promise ReadableStreamDefaultReader_closed(const ReadableStreamDefaultReader *self);

jb_Promise ReadableStreamDefaultReader_cancel0(ReadableStreamDefaultReader* self );

jb_Promise ReadableStreamDefaultReader_cancel1(ReadableStreamDefaultReader* self , jb_Any * reason);

#ifdef __cplusplus
}
#endif
