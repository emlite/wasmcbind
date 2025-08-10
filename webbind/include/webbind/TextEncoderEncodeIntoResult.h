#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);

long long TextEncoderEncodeIntoResult_read(const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value);

long long TextEncoderEncodeIntoResult_written(const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value);

TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult_new();

#ifdef __cplusplus
}
#endif
