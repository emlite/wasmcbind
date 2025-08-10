#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SummarizerCreateOptions SummarizerCreateOptions;
typedef struct SummarizerCreateCoreOptions SummarizerCreateCoreOptions;
typedef struct SummarizerSummarizeOptions SummarizerSummarizeOptions;
typedef struct ReadableStream ReadableStream;

DECLARE_EMLITE_TYPE(Summarizer, em_Val);

jb_Promise Summarizer_create0(Summarizer* self );

jb_Promise Summarizer_create1(Summarizer* self , SummarizerCreateOptions * options);

jb_Promise Summarizer_availability0(Summarizer* self );

jb_Promise Summarizer_availability1(Summarizer* self , SummarizerCreateCoreOptions * options);

jb_Promise Summarizer_summarize0(Summarizer* self , jb_String * input);

jb_Promise Summarizer_summarize1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

ReadableStream Summarizer_summarizeStreaming0(Summarizer* self , jb_String * input);

ReadableStream Summarizer_summarizeStreaming1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

jb_String Summarizer_sharedContext(const Summarizer *self);

SummarizerType Summarizer_type(const Summarizer *self);

SummarizerFormat Summarizer_format(const Summarizer *self);

SummarizerLength Summarizer_length(const Summarizer *self);

jb_Array Summarizer_expectedInputLanguages(const Summarizer *self);

jb_Array Summarizer_expectedContextLanguages(const Summarizer *self);

jb_String Summarizer_outputLanguage(const Summarizer *self);

jb_Promise Summarizer_measureInputUsage0(Summarizer* self , jb_String * input);

jb_Promise Summarizer_measureInputUsage1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

double Summarizer_inputQuota(const Summarizer *self);

jb_Undefined Summarizer_destroy(Summarizer* self );

#ifdef __cplusplus
}
#endif
