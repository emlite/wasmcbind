#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);

jb_String TranslatorCreateCoreOptions_sourceLanguage(const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, jb_String * value);

jb_String TranslatorCreateCoreOptions_targetLanguage(const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, jb_String * value);

TranslatorCreateCoreOptions TranslatorCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
