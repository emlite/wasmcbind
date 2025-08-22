#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "LanguageDetectorCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type LanguageDetectorCreateOptions */
DECLARE_EMLITE_TYPE(LanguageDetectorCreateOptions, LanguageDetectorCreateCoreOptions);

/** @brief Getter of the signal property */
AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self);

/** @brief Setter of the signal property */
void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, AbortSignal * value);

/** @brief Getter of the monitor property */
jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self);

/** @brief Setter of the monitor property */
void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, jb_Function * value);

/** @brief Constructor of the LanguageDetectorCreateOptions dictionary type */
LanguageDetectorCreateOptions LanguageDetectorCreateOptions_new();

#ifdef __cplusplus
}
#endif
