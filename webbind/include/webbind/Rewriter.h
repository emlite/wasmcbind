#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Rewriter Rewriter;
typedef struct RewriterCreateOptions RewriterCreateOptions;
typedef struct RewriterCreateCoreOptions RewriterCreateCoreOptions;
typedef struct RewriterRewriteOptions RewriterRewriteOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} RewriterCreateOptions;


DECLARE_EMLITE_TYPE(RewriterCreateOptions, em_Val);

AbortSignal RewriterCreateOptions_signal( const RewriterCreateOptions *self);

void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, const AbortSignal* value);

jb_Function RewriterCreateOptions_monitor( const RewriterCreateOptions *self);

void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, const jb_Function* value);

jb_DOMString RewriterCreateOptions_sharedContext( const RewriterCreateOptions *self);

void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RewriterCreateCoreOptions;


DECLARE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);

RewriterTone RewriterCreateCoreOptions_tone( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, const RewriterTone* value);

RewriterFormat RewriterCreateCoreOptions_format( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, const RewriterFormat* value);

RewriterLength RewriterCreateCoreOptions_length( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, const RewriterLength* value);

jb_Sequence RewriterCreateCoreOptions_expectedInputLanguages( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, const jb_Sequence* value);

jb_Sequence RewriterCreateCoreOptions_expectedContextLanguages( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, const jb_Sequence* value);

jb_DOMString RewriterCreateCoreOptions_outputLanguage( const RewriterCreateCoreOptions *self);

void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RewriterRewriteOptions;


DECLARE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);

jb_DOMString RewriterRewriteOptions_context( const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, const jb_DOMString* value);

AbortSignal RewriterRewriteOptions_signal( const RewriterRewriteOptions *self);

void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} Rewriter;


DECLARE_EMLITE_TYPE(Rewriter, em_Val);

jb_Promise Rewriter_create(Rewriter* self );

jb_Promise Rewriter_create(Rewriter* self , const RewriterCreateOptions* options);

jb_Promise Rewriter_availability(Rewriter* self );

jb_Promise Rewriter_availability(Rewriter* self , const RewriterCreateCoreOptions* options);

jb_Promise Rewriter_rewrite(Rewriter* self , const jb_DOMString* input);

jb_Promise Rewriter_rewrite(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options);

ReadableStream Rewriter_rewriteStreaming(Rewriter* self , const jb_DOMString* input);

ReadableStream Rewriter_rewriteStreaming(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options);

jb_DOMString Rewriter_sharedContext( const Rewriter *self);

RewriterTone Rewriter_tone( const Rewriter *self);

RewriterFormat Rewriter_format( const Rewriter *self);

RewriterLength Rewriter_length( const Rewriter *self);

jb_FrozenArray Rewriter_expectedInputLanguages( const Rewriter *self);

jb_FrozenArray Rewriter_expectedContextLanguages( const Rewriter *self);

jb_DOMString Rewriter_outputLanguage( const Rewriter *self);

jb_Promise Rewriter_measureInputUsage(Rewriter* self , const jb_DOMString* input);

jb_Promise Rewriter_measureInputUsage(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options);

double Rewriter_inputQuota( const Rewriter *self);

jb_Undefined Rewriter_destroy(Rewriter* self );
