#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Summarizer Summarizer;
typedef struct SummarizerCreateOptions SummarizerCreateOptions;
typedef struct SummarizerCreateCoreOptions SummarizerCreateCoreOptions;
typedef struct SummarizerSummarizeOptions SummarizerSummarizeOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} SummarizerCreateOptions;


DECLARE_EMLITE_TYPE(SummarizerCreateOptions, em_Val);

AbortSignal SummarizerCreateOptions_signal( const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, const AbortSignal* value);

jb_Function SummarizerCreateOptions_monitor( const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, const jb_Function* value);

jb_DOMString SummarizerCreateOptions_sharedContext( const SummarizerCreateOptions *self);

void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} SummarizerCreateCoreOptions;


DECLARE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);

SummarizerType SummarizerCreateCoreOptions_type( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, const SummarizerType* value);

SummarizerFormat SummarizerCreateCoreOptions_format( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, const SummarizerFormat* value);

SummarizerLength SummarizerCreateCoreOptions_length( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, const SummarizerLength* value);

jb_Sequence SummarizerCreateCoreOptions_expectedInputLanguages( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, const jb_Sequence* value);

jb_Sequence SummarizerCreateCoreOptions_expectedContextLanguages( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, const jb_Sequence* value);

jb_DOMString SummarizerCreateCoreOptions_outputLanguage( const SummarizerCreateCoreOptions *self);

void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} SummarizerSummarizeOptions;


DECLARE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);

AbortSignal SummarizerSummarizeOptions_signal( const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, const AbortSignal* value);

jb_DOMString SummarizerSummarizeOptions_context( const SummarizerSummarizeOptions *self);

void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} Summarizer;


DECLARE_EMLITE_TYPE(Summarizer, em_Val);

jb_Promise Summarizer_create(Summarizer* self );

jb_Promise Summarizer_create(Summarizer* self , const SummarizerCreateOptions* options);

jb_Promise Summarizer_availability(Summarizer* self );

jb_Promise Summarizer_availability(Summarizer* self , const SummarizerCreateCoreOptions* options);

jb_Promise Summarizer_summarize(Summarizer* self , const jb_DOMString* input);

jb_Promise Summarizer_summarize(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options);

ReadableStream Summarizer_summarizeStreaming(Summarizer* self , const jb_DOMString* input);

ReadableStream Summarizer_summarizeStreaming(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options);

jb_DOMString Summarizer_sharedContext( const Summarizer *self);

SummarizerType Summarizer_type( const Summarizer *self);

SummarizerFormat Summarizer_format( const Summarizer *self);

SummarizerLength Summarizer_length( const Summarizer *self);

jb_FrozenArray Summarizer_expectedInputLanguages( const Summarizer *self);

jb_FrozenArray Summarizer_expectedContextLanguages( const Summarizer *self);

jb_DOMString Summarizer_outputLanguage( const Summarizer *self);

jb_Promise Summarizer_measureInputUsage(Summarizer* self , const jb_DOMString* input);

jb_Promise Summarizer_measureInputUsage(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options);

double Summarizer_inputQuota( const Summarizer *self);

jb_Undefined Summarizer_destroy(Summarizer* self );
