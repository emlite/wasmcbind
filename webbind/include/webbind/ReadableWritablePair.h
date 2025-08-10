#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;

DECLARE_EMLITE_TYPE(ReadableWritablePair, em_Val);

ReadableStream ReadableWritablePair_readable(const ReadableWritablePair *self);

void ReadableWritablePair_set_readable(ReadableWritablePair* self, ReadableStream * value);

WritableStream ReadableWritablePair_writable(const ReadableWritablePair *self);

void ReadableWritablePair_set_writable(ReadableWritablePair* self, WritableStream * value);

ReadableWritablePair ReadableWritablePair_new();

#ifdef __cplusplus
}
#endif
