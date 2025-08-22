#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TextUpdateEventInit */
DECLARE_EMLITE_TYPE(TextUpdateEventInit, EventInit);

/** @brief Getter of the updateRangeStart property */
unsigned long TextUpdateEventInit_updateRangeStart(const TextUpdateEventInit *self);

/** @brief Setter of the updateRangeStart property */
void TextUpdateEventInit_set_updateRangeStart(TextUpdateEventInit* self, unsigned long value);

/** @brief Getter of the updateRangeEnd property */
unsigned long TextUpdateEventInit_updateRangeEnd(const TextUpdateEventInit *self);

/** @brief Setter of the updateRangeEnd property */
void TextUpdateEventInit_set_updateRangeEnd(TextUpdateEventInit* self, unsigned long value);

/** @brief Getter of the text property */
jb_String TextUpdateEventInit_text(const TextUpdateEventInit *self);

/** @brief Setter of the text property */
void TextUpdateEventInit_set_text(TextUpdateEventInit* self, jb_String * value);

/** @brief Getter of the selectionStart property */
unsigned long TextUpdateEventInit_selectionStart(const TextUpdateEventInit *self);

/** @brief Setter of the selectionStart property */
void TextUpdateEventInit_set_selectionStart(TextUpdateEventInit* self, unsigned long value);

/** @brief Getter of the selectionEnd property */
unsigned long TextUpdateEventInit_selectionEnd(const TextUpdateEventInit *self);

/** @brief Setter of the selectionEnd property */
void TextUpdateEventInit_set_selectionEnd(TextUpdateEventInit* self, unsigned long value);

/** @brief Getter of the compositionStart property */
unsigned long TextUpdateEventInit_compositionStart(const TextUpdateEventInit *self);

/** @brief Setter of the compositionStart property */
void TextUpdateEventInit_set_compositionStart(TextUpdateEventInit* self, unsigned long value);

/** @brief Getter of the compositionEnd property */
unsigned long TextUpdateEventInit_compositionEnd(const TextUpdateEventInit *self);

/** @brief Setter of the compositionEnd property */
void TextUpdateEventInit_set_compositionEnd(TextUpdateEventInit* self, unsigned long value);

/** @brief Constructor of the TextUpdateEventInit dictionary type */
TextUpdateEventInit TextUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
