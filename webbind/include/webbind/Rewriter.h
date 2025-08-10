#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RewriterCreateOptions RewriterCreateOptions;
typedef struct RewriterCreateCoreOptions RewriterCreateCoreOptions;
typedef struct RewriterRewriteOptions RewriterRewriteOptions;
typedef struct ReadableStream ReadableStream;

DECLARE_EMLITE_TYPE(Rewriter, em_Val);

jb_Promise Rewriter_create0(Rewriter* self );

jb_Promise Rewriter_create1(Rewriter* self , RewriterCreateOptions * options);

jb_Promise Rewriter_availability0(Rewriter* self );

jb_Promise Rewriter_availability1(Rewriter* self , RewriterCreateCoreOptions * options);

jb_Promise Rewriter_rewrite0(Rewriter* self , jb_String * input);

jb_Promise Rewriter_rewrite1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

ReadableStream Rewriter_rewriteStreaming0(Rewriter* self , jb_String * input);

ReadableStream Rewriter_rewriteStreaming1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

jb_String Rewriter_sharedContext(const Rewriter *self);

RewriterTone Rewriter_tone(const Rewriter *self);

RewriterFormat Rewriter_format(const Rewriter *self);

RewriterLength Rewriter_length(const Rewriter *self);

jb_Array Rewriter_expectedInputLanguages(const Rewriter *self);

jb_Array Rewriter_expectedContextLanguages(const Rewriter *self);

jb_String Rewriter_outputLanguage(const Rewriter *self);

jb_Promise Rewriter_measureInputUsage0(Rewriter* self , jb_String * input);

jb_Promise Rewriter_measureInputUsage1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

double Rewriter_inputQuota(const Rewriter *self);

jb_Undefined Rewriter_destroy(Rewriter* self );

#ifdef __cplusplus
}
#endif
