#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "LanguageDetectorCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(LanguageDetectorCreateOptions, LanguageDetectorCreateCoreOptions);

AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, AbortSignal * value);

jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, jb_Function * value);

LanguageDetectorCreateOptions LanguageDetectorCreateOptions_new();

#ifdef __cplusplus
}
#endif
