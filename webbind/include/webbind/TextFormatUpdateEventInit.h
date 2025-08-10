#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormat TextFormat;

DECLARE_EMLITE_TYPE(TextFormatUpdateEventInit, EventInit);

jb_Array TextFormatUpdateEventInit_textFormats(const TextFormatUpdateEventInit *self);

void TextFormatUpdateEventInit_set_textFormats(TextFormatUpdateEventInit* self, jb_Array * value);

TextFormatUpdateEventInit TextFormatUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
