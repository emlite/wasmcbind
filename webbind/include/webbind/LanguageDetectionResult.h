#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LanguageDetectionResult, em_Val);

jb_String LanguageDetectionResult_detectedLanguage(const LanguageDetectionResult *self);

void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, jb_String * value);

double LanguageDetectionResult_confidence(const LanguageDetectionResult *self);

void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value);

LanguageDetectionResult LanguageDetectionResult_new();

#ifdef __cplusplus
}
#endif
