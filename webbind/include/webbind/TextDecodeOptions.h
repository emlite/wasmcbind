#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TextDecodeOptions */
DECLARE_EMLITE_TYPE(TextDecodeOptions, em_Val);

/** @brief Getter of the stream property */
bool TextDecodeOptions_stream(const TextDecodeOptions *self);

/** @brief Setter of the stream property */
void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value);

/** @brief Constructor of the TextDecodeOptions dictionary type */
TextDecodeOptions TextDecodeOptions_new();

#ifdef __cplusplus
}
#endif
