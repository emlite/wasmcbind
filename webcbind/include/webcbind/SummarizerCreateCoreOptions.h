#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SummarizerCreateCoreOptions */
DECLARE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);

/** @brief Getter of the type property */
SummarizerType SummarizerCreateCoreOptions_type(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the type property */
void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, SummarizerType * value);

/** @brief Getter of the format property */
SummarizerFormat SummarizerCreateCoreOptions_format(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the format property */
void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, SummarizerFormat * value);

/** @brief Getter of the length property */
SummarizerLength SummarizerCreateCoreOptions_length(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the length property */
void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, SummarizerLength * value);

/** @brief Getter of the expectedInputLanguages property */
jb_Array SummarizerCreateCoreOptions_expectedInputLanguages(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the expectedInputLanguages property */
void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the expectedContextLanguages property */
jb_Array SummarizerCreateCoreOptions_expectedContextLanguages(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the expectedContextLanguages property */
void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the outputLanguage property */
jb_String SummarizerCreateCoreOptions_outputLanguage(const SummarizerCreateCoreOptions *self);

/** @brief Setter of the outputLanguage property */
void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, jb_String * value);

/** @brief Constructor of the SummarizerCreateCoreOptions dictionary type */
SummarizerCreateCoreOptions SummarizerCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
