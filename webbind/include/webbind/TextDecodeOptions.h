#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TextDecodeOptions, em_Val);

bool TextDecodeOptions_stream(const TextDecodeOptions *self);

void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value);

TextDecodeOptions TextDecodeOptions_new();

#ifdef __cplusplus
}
#endif
