#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormatInit TextFormatInit;

DECLARE_EMLITE_TYPE(TextFormat, em_Val);

TextFormat TextFormat_new0();

TextFormat TextFormat_new1(TextFormatInit * options);

unsigned long TextFormat_rangeStart(const TextFormat *self);

unsigned long TextFormat_rangeEnd(const TextFormat *self);

UnderlineStyle TextFormat_underlineStyle(const TextFormat *self);

UnderlineThickness TextFormat_underlineThickness(const TextFormat *self);

#ifdef __cplusplus
}
#endif
