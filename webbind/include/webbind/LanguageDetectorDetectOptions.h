#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type LanguageDetectorDetectOptions */
DECLARE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self);

/** @brief Setter of the signal property */
void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, AbortSignal * value);

/** @brief Constructor of the LanguageDetectorDetectOptions dictionary type */
LanguageDetectorDetectOptions LanguageDetectorDetectOptions_new();

#ifdef __cplusplus
}
#endif
