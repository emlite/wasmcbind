#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult;


typedef struct {
  em_Val inner;
} TextEncoderEncodeIntoResult;


DECLARE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);

long long TextEncoderEncodeIntoResult_read( const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value);

long long TextEncoderEncodeIntoResult_written( const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value);
typedef struct {
  em_Val inner;
} TextEncoder;


DECLARE_EMLITE_TYPE(TextEncoder, em_Val);

TextEncoder TextEncoder_new();

jb_Uint8Array TextEncoder_encode(TextEncoder* self );

jb_Uint8Array TextEncoder_encode(TextEncoder* self , const jb_USVString* input);

TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , const jb_USVString* source, const jb_Uint8Array* destination);

jb_DOMString TextEncoder_encoding( const TextEncoder *self);
