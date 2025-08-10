#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TextUpdateEventInit, EventInit);

unsigned long TextUpdateEventInit_updateRangeStart(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_updateRangeStart(TextUpdateEventInit* self, unsigned long value);

unsigned long TextUpdateEventInit_updateRangeEnd(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_updateRangeEnd(TextUpdateEventInit* self, unsigned long value);

jb_String TextUpdateEventInit_text(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_text(TextUpdateEventInit* self, jb_String * value);

unsigned long TextUpdateEventInit_selectionStart(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_selectionStart(TextUpdateEventInit* self, unsigned long value);

unsigned long TextUpdateEventInit_selectionEnd(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_selectionEnd(TextUpdateEventInit* self, unsigned long value);

unsigned long TextUpdateEventInit_compositionStart(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_compositionStart(TextUpdateEventInit* self, unsigned long value);

unsigned long TextUpdateEventInit_compositionEnd(const TextUpdateEventInit *self);

void TextUpdateEventInit_set_compositionEnd(TextUpdateEventInit* self, unsigned long value);

TextUpdateEventInit TextUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
