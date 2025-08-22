#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TextDecoderOptions */
DECLARE_EMLITE_TYPE(TextDecoderOptions, em_Val);

/** @brief Getter of the fatal property */
bool TextDecoderOptions_fatal(const TextDecoderOptions *self);

/** @brief Setter of the fatal property */
void TextDecoderOptions_set_fatal(TextDecoderOptions* self, bool value);

/** @brief Getter of the ignoreBOM property */
bool TextDecoderOptions_ignoreBOM(const TextDecoderOptions *self);

/** @brief Setter of the ignoreBOM property */
void TextDecoderOptions_set_ignoreBOM(TextDecoderOptions* self, bool value);

/** @brief Constructor of the TextDecoderOptions dictionary type */
TextDecoderOptions TextDecoderOptions_new();

#ifdef __cplusplus
}
#endif
