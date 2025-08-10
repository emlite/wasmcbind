#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);

AbortSignal TranslatorTranslateOptions_signal(const TranslatorTranslateOptions *self);

void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, AbortSignal * value);

TranslatorTranslateOptions TranslatorTranslateOptions_new();

#ifdef __cplusplus
}
#endif
