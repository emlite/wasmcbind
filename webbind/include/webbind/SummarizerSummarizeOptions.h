#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);

AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, AbortSignal * value);

jb_String SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, jb_String * value);

SummarizerSummarizeOptions SummarizerSummarizeOptions_new();

#ifdef __cplusplus
}
#endif
