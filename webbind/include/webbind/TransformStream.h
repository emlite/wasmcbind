#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  em_Val inner;
} TransformStream;


DECLARE_EMLITE_TYPE(TransformStream, em_Val);

TransformStream TransformStream_new();

TransformStream TransformStream_new(const jb_Object* transformer);

TransformStream TransformStream_new(const jb_Object* transformer, const jb_Any* writableStrategy);

TransformStream TransformStream_new(const jb_Object* transformer, const jb_Any* writableStrategy, const jb_Any* readableStrategy);

ReadableStream TransformStream_readable( const TransformStream *self);

WritableStream TransformStream_writable( const TransformStream *self);
