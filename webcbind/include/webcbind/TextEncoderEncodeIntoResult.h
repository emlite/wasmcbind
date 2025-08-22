#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TextEncoderEncodeIntoResult */
DECLARE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);

/** @brief Getter of the read property */
long long TextEncoderEncodeIntoResult_read(const TextEncoderEncodeIntoResult *self);

/** @brief Setter of the read property */
void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value);

/** @brief Getter of the written property */
long long TextEncoderEncodeIntoResult_written(const TextEncoderEncodeIntoResult *self);

/** @brief Setter of the written property */
void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value);

/** @brief Constructor of the TextEncoderEncodeIntoResult dictionary type */
TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult_new();

#ifdef __cplusplus
}
#endif
