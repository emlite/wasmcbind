#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);

SummarizerType SummarizerCreateCoreOptions_type(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, SummarizerType * value);

SummarizerFormat SummarizerCreateCoreOptions_format(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, SummarizerFormat * value);

SummarizerLength SummarizerCreateCoreOptions_length(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, SummarizerLength * value);

jb_Array SummarizerCreateCoreOptions_expectedInputLanguages(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

jb_Array SummarizerCreateCoreOptions_expectedContextLanguages(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, jb_Array * value);

jb_String SummarizerCreateCoreOptions_outputLanguage(const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, jb_String * value);

SummarizerCreateCoreOptions SummarizerCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
