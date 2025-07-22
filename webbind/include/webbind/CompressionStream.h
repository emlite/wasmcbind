#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  em_Val inner;
} CompressionStream;


DECLARE_EMLITE_TYPE(CompressionStream, em_Val);

CompressionStream CompressionStream_new(const CompressionFormat* format);

ReadableStream CompressionStream_readable( const CompressionStream *self);

WritableStream CompressionStream_writable( const CompressionStream *self);
