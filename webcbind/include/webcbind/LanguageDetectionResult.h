#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LanguageDetectionResult */
DECLARE_EMLITE_TYPE(LanguageDetectionResult, em_Val);

/** @brief Getter of the detectedLanguage property */
jb_String LanguageDetectionResult_detectedLanguage(const LanguageDetectionResult *self);

/** @brief Setter of the detectedLanguage property */
void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, jb_String * value);

/** @brief Getter of the confidence property */
double LanguageDetectionResult_confidence(const LanguageDetectionResult *self);

/** @brief Setter of the confidence property */
void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value);

/** @brief Constructor of the LanguageDetectionResult dictionary type */
LanguageDetectionResult LanguageDetectionResult_new();

#ifdef __cplusplus
}
#endif
