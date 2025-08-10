#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);

AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self);

void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, AbortSignal * value);

LanguageDetectorDetectOptions LanguageDetectorDetectOptions_new();

#ifdef __cplusplus
}
#endif
