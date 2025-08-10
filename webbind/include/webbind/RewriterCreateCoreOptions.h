#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);

RewriterTone RewriterCreateCoreOptions_tone(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, RewriterTone * value);

RewriterFormat RewriterCreateCoreOptions_format(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, RewriterFormat * value);

RewriterLength RewriterCreateCoreOptions_length(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, RewriterLength * value);

jb_Array RewriterCreateCoreOptions_expectedInputLanguages(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

jb_Array RewriterCreateCoreOptions_expectedContextLanguages(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, jb_Array * value);

jb_String RewriterCreateCoreOptions_outputLanguage(const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, jb_String * value);

RewriterCreateCoreOptions RewriterCreateCoreOptions_new();

#ifdef __cplusplus
}
#endif
