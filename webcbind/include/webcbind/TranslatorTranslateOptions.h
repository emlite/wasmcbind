#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type TranslatorTranslateOptions */
DECLARE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal TranslatorTranslateOptions_signal(const TranslatorTranslateOptions *self);

/** @brief Setter of the signal property */
void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, AbortSignal * value);

/** @brief Constructor of the TranslatorTranslateOptions dictionary type */
TranslatorTranslateOptions TranslatorTranslateOptions_new();

#ifdef __cplusplus
}
#endif
