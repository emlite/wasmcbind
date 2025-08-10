#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TextDecoderOptions, em_Val);

bool TextDecoderOptions_fatal(const TextDecoderOptions *self);

void TextDecoderOptions_set_fatal(TextDecoderOptions* self, bool value);

bool TextDecoderOptions_ignoreBOM(const TextDecoderOptions *self);

void TextDecoderOptions_set_ignoreBOM(TextDecoderOptions* self, bool value);

TextDecoderOptions TextDecoderOptions_new();

#ifdef __cplusplus
}
#endif
