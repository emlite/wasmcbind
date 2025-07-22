#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  em_Val inner;
} DecompressionStream;


DECLARE_EMLITE_TYPE(DecompressionStream, em_Val);

DecompressionStream DecompressionStream_new(const CompressionFormat* format);

ReadableStream DecompressionStream_readable( const DecompressionStream *self);

WritableStream DecompressionStream_writable( const DecompressionStream *self);
