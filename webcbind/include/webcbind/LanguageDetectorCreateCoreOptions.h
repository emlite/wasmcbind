#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LanguageDetectorCreateCoreOptions */
DECLARE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);

/** @brief Getter of the expectedInputLanguages property */
jb_Array LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self);

/** @brief Setter of the expectedInputLanguages property */
void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, jb_Array * value);

/** @brief Constructor of the LanguageDetectorCreateCoreOptions dictionary type */
LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
