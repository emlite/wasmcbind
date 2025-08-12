#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WriterCreateCoreOptions */
DECLARE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);

/** @brief Getter of the tone property */
WriterTone WriterCreateCoreOptions_tone(const WriterCreateCoreOptions *self);

/** @brief Setter of the tone property */
void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, WriterTone * value);

/** @brief Getter of the format property */
WriterFormat WriterCreateCoreOptions_format(const WriterCreateCoreOptions *self);

/** @brief Setter of the format property */
void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, WriterFormat * value);

/** @brief Getter of the length property */
WriterLength WriterCreateCoreOptions_length(const WriterCreateCoreOptions *self);

/** @brief Setter of the length property */
void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, WriterLength * value);

/** @brief Getter of the expectedInputLanguages property */
jb_Array WriterCreateCoreOptions_expectedInputLanguages(const WriterCreateCoreOptions *self);

/** @brief Setter of the expectedInputLanguages property */
void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the expectedContextLanguages property */
jb_Array WriterCreateCoreOptions_expectedContextLanguages(const WriterCreateCoreOptions *self);

/** @brief Setter of the expectedContextLanguages property */
void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, jb_Array * value);

/** @brief Getter of the outputLanguage property */
jb_String WriterCreateCoreOptions_outputLanguage(const WriterCreateCoreOptions *self);

/** @brief Setter of the outputLanguage property */
void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, jb_String * value);

/** @brief Constructor of the WriterCreateCoreOptions dictionary type */
WriterCreateCoreOptions WriterCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
