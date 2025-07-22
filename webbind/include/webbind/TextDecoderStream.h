#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  em_Val inner;
} TextDecoderStream;


DECLARE_EMLITE_TYPE(TextDecoderStream, em_Val);

TextDecoderStream TextDecoderStream_new();

TextDecoderStream TextDecoderStream_new(const jb_DOMString* label);

TextDecoderStream TextDecoderStream_new(const jb_DOMString* label, const jb_Any* options);

jb_DOMString TextDecoderStream_encoding( const TextDecoderStream *self);

bool TextDecoderStream_fatal( const TextDecoderStream *self);

bool TextDecoderStream_ignoreBOM( const TextDecoderStream *self);

ReadableStream TextDecoderStream_readable( const TextDecoderStream *self);

WritableStream TextDecoderStream_writable( const TextDecoderStream *self);
