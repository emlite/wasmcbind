#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TextFormatInit, em_Val);

unsigned long TextFormatInit_rangeStart(const TextFormatInit *self);

void TextFormatInit_set_rangeStart(TextFormatInit* self, unsigned long value);

unsigned long TextFormatInit_rangeEnd(const TextFormatInit *self);

void TextFormatInit_set_rangeEnd(TextFormatInit* self, unsigned long value);

UnderlineStyle TextFormatInit_underlineStyle(const TextFormatInit *self);

void TextFormatInit_set_underlineStyle(TextFormatInit* self, UnderlineStyle * value);

UnderlineThickness TextFormatInit_underlineThickness(const TextFormatInit *self);

void TextFormatInit_set_underlineThickness(TextFormatInit* self, UnderlineThickness * value);

TextFormatInit TextFormatInit_new();

#ifdef __cplusplus
}
#endif
