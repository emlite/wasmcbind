#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextDecoderOptions TextDecoderOptions;
typedef struct TextDecodeOptions TextDecodeOptions;

DECLARE_EMLITE_TYPE(TextDecoder, em_Val);

TextDecoder TextDecoder_new0();

TextDecoder TextDecoder_new1(jb_String * label);

TextDecoder TextDecoder_new2(jb_String * label, TextDecoderOptions * options);

jb_String TextDecoder_decode0(TextDecoder* self );

jb_String TextDecoder_decode1(TextDecoder* self , jb_Any * input);

jb_String TextDecoder_decode2(TextDecoder* self , jb_Any * input, TextDecodeOptions * options);

jb_String TextDecoder_encoding(const TextDecoder *self);

bool TextDecoder_fatal(const TextDecoder *self);

bool TextDecoder_ignoreBOM(const TextDecoder *self);

#ifdef __cplusplus
}
#endif
