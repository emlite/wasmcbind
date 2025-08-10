#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SummarizerCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(SummarizerCreateOptions, SummarizerCreateCoreOptions);

AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, AbortSignal * value);

jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, jb_Function * value);

jb_String SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, jb_String * value);

SummarizerCreateOptions SummarizerCreateOptions_new();

#ifdef __cplusplus
}
#endif
