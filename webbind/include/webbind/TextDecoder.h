#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TextDecodeOptions TextDecodeOptions;


typedef struct {
  em_Val inner;
} TextDecodeOptions;


DECLARE_EMLITE_TYPE(TextDecodeOptions, em_Val);

bool TextDecodeOptions_stream( const TextDecodeOptions *self);

void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value);
typedef struct {
  em_Val inner;
} TextDecoder;


DECLARE_EMLITE_TYPE(TextDecoder, em_Val);

TextDecoder TextDecoder_new();

TextDecoder TextDecoder_new(const jb_DOMString* label);

TextDecoder TextDecoder_new(const jb_DOMString* label, const jb_Any* options);

jb_USVString TextDecoder_decode(TextDecoder* self );

jb_USVString TextDecoder_decode(TextDecoder* self , const jb_Any* input);

jb_USVString TextDecoder_decode(TextDecoder* self , const jb_Any* input, const TextDecodeOptions* options);

jb_DOMString TextDecoder_encoding( const TextDecoder *self);

bool TextDecoder_fatal( const TextDecoder *self);

bool TextDecoder_ignoreBOM( const TextDecoder *self);
