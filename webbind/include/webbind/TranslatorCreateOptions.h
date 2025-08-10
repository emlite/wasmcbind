#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "TranslatorCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(TranslatorCreateOptions, TranslatorCreateCoreOptions);

AbortSignal TranslatorCreateOptions_signal(const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, AbortSignal * value);

jb_Function TranslatorCreateOptions_monitor(const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, jb_Function * value);

TranslatorCreateOptions TranslatorCreateOptions_new();

#ifdef __cplusplus
}
#endif
