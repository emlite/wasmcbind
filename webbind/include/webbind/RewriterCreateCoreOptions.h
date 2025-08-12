#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RewriterCreateCoreOptions */
DECLARE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);

/** @brief Getter of the tone property */
RewriterTone RewriterCreateCoreOptions_tone(const RewriterCreateCoreOptions *self);

/** @brief Setter of the tone property */
void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, RewriterTone * value);

/** @brief Getter of the format property */
RewriterFormat RewriterCreateCoreOptions_format(const RewriterCreateCoreOptions *self);

/** @brief Setter of the format property */
void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, RewriterFormat * value);

/** @brief Getter of the length property */
RewriterLength RewriterCreateCoreOptions_length(const RewriterCreateCoreOptions *self);

/** @brief Setter of the length property */
void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, RewriterLength * value);

/** @brief Getter of the expectedInputLanguages property */
jb_Array RewriterCreateCoreOptions_expectedInputLanguages(const RewriterCreateCoreOptions *self);

/** @brief Setter of the expectedInputLanguages property */
void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the expectedContextLanguages property */
jb_Array RewriterCreateCoreOptions_expectedContextLanguages(const RewriterCreateCoreOptions *self);

/** @brief Setter of the expectedContextLanguages property */
void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the outputLanguage property */
jb_String RewriterCreateCoreOptions_outputLanguage(const RewriterCreateCoreOptions *self);

/** @brief Setter of the outputLanguage property */
void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, jb_String * value);

/** @brief Constructor of the RewriterCreateCoreOptions dictionary type */
RewriterCreateCoreOptions RewriterCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
