#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TextFormatInit */
DECLARE_EMLITE_TYPE(TextFormatInit, em_Val);

/** @brief Getter of the rangeStart property */
unsigned long TextFormatInit_rangeStart(const TextFormatInit *self);

/** @brief Setter of the rangeStart property */
void TextFormatInit_set_rangeStart(TextFormatInit* self, unsigned long value);

/** @brief Getter of the rangeEnd property */
unsigned long TextFormatInit_rangeEnd(const TextFormatInit *self);

/** @brief Setter of the rangeEnd property */
void TextFormatInit_set_rangeEnd(TextFormatInit* self, unsigned long value);

/** @brief Getter of the underlineStyle property */
UnderlineStyle TextFormatInit_underlineStyle(const TextFormatInit *self);

/** @brief Setter of the underlineStyle property */
void TextFormatInit_set_underlineStyle(TextFormatInit* self, UnderlineStyle * value);

/** @brief Getter of the underlineThickness property */
UnderlineThickness TextFormatInit_underlineThickness(const TextFormatInit *self);

/** @brief Setter of the underlineThickness property */
void TextFormatInit_set_underlineThickness(TextFormatInit* self, UnderlineThickness * value);

/** @brief Constructor of the TextFormatInit dictionary type */
TextFormatInit TextFormatInit_new();

#ifdef __cplusplus
}
#endif
