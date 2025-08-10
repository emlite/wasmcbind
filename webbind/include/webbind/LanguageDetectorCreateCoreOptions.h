#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);

jb_Array LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self);

void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, jb_Array * value);

LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
