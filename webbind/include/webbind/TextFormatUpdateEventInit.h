#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormat TextFormat;

/** @brief Dictionary type TextFormatUpdateEventInit */
DECLARE_EMLITE_TYPE(TextFormatUpdateEventInit, EventInit);

/** @brief Getter of the textFormats property */
jb_Array TextFormatUpdateEventInit_textFormats(const TextFormatUpdateEventInit *self);

/** @brief Setter of the textFormats property */
void TextFormatUpdateEventInit_set_textFormats(TextFormatUpdateEventInit* self, jb_Array * value);

/** @brief Constructor of the TextFormatUpdateEventInit dictionary type */
TextFormatUpdateEventInit TextFormatUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
