#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TranslatorCreateCoreOptions */
DECLARE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);

/** @brief Getter of the sourceLanguage property */
jb_String TranslatorCreateCoreOptions_sourceLanguage(const TranslatorCreateCoreOptions *self);

/** @brief Setter of the sourceLanguage property */
void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, jb_String * value);

/** @brief Getter of the targetLanguage property */
jb_String TranslatorCreateCoreOptions_targetLanguage(const TranslatorCreateCoreOptions *self);

/** @brief Setter of the targetLanguage property */
void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, jb_String * value);

/** @brief Constructor of the TranslatorCreateCoreOptions dictionary type */
TranslatorCreateCoreOptions TranslatorCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
