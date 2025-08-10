#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);

WriterTone WriterCreateCoreOptions_tone(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, WriterTone * value);

WriterFormat WriterCreateCoreOptions_format(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, WriterFormat * value);

WriterLength WriterCreateCoreOptions_length(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, WriterLength * value);

jb_Array WriterCreateCoreOptions_expectedInputLanguages(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, jb_Array * value);

jb_Array WriterCreateCoreOptions_expectedContextLanguages(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, jb_Array * value);

jb_String WriterCreateCoreOptions_outputLanguage(const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, jb_String * value);

WriterCreateCoreOptions WriterCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
