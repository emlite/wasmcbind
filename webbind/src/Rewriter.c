#include <webbind/Rewriter.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(RewriterCreateOptions, em_Val);


AbortSignal RewriterCreateOptions_signal(const RewriterCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void RewriterCreateOptions_set_signal(RewriterCreateOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_Function RewriterCreateOptions_monitor(const RewriterCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "monitor"));
}


void RewriterCreateOptions_set_monitor(RewriterCreateOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "monitor", value);
}


jb_DOMString RewriterCreateOptions_sharedContext(const RewriterCreateOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


void RewriterCreateOptions_set_sharedContext(RewriterCreateOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sharedContext", value);
}

DEFINE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);


RewriterTone RewriterCreateCoreOptions_tone(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterTone, em_Val_get(em_Val_as_val(self->inner), "tone"));
}


void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, const RewriterTone* value) {
    em_Val_set(em_Val_as_val(self->inner), "tone", value);
}


RewriterFormat RewriterCreateCoreOptions_format(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, const RewriterFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


RewriterLength RewriterCreateCoreOptions_length(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, const RewriterLength* value) {
    em_Val_set(em_Val_as_val(self->inner), "length", value);
}


jb_Sequence RewriterCreateCoreOptions_expectedInputLanguages(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedInputLanguages", value);
}


jb_Sequence RewriterCreateCoreOptions_expectedContextLanguages(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedContextLanguages", value);
}


jb_DOMString RewriterCreateCoreOptions_outputLanguage(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputLanguage", value);
}

DEFINE_EMLITE_TYPE(RewriterRewriteOptions, em_Val);


jb_DOMString RewriterRewriteOptions_context(const RewriterRewriteOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "context"));
}


void RewriterRewriteOptions_set_context(RewriterRewriteOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "context", value);
}


AbortSignal RewriterRewriteOptions_signal(const RewriterRewriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void RewriterRewriteOptions_set_signal(RewriterRewriteOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(Rewriter, em_Val);


jb_Promise Rewriter_create(Rewriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "create"));
}


jb_Promise Rewriter_create(Rewriter* self , const RewriterCreateOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "create", em_Val_from(options)));
}


jb_Promise Rewriter_availability(Rewriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "availability"));
}


jb_Promise Rewriter_availability(Rewriter* self , const RewriterCreateCoreOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "availability", em_Val_from(options)));
}


jb_Promise Rewriter_rewrite(Rewriter* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "rewrite", em_Val_from(input)));
}


jb_Promise Rewriter_rewrite(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "rewrite", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Rewriter_rewriteStreaming(Rewriter* self , const jb_DOMString* input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "rewriteStreaming", em_Val_from(input)));
}


ReadableStream Rewriter_rewriteStreaming(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "rewriteStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString Rewriter_sharedContext(const Rewriter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


RewriterTone Rewriter_tone(const Rewriter *self) {
    return em_Val_as(RewriterTone, em_Val_get(em_Val_as_val(self->inner), "tone"));
}


RewriterFormat Rewriter_format(const Rewriter *self) {
    return em_Val_as(RewriterFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


RewriterLength Rewriter_length(const Rewriter *self) {
    return em_Val_as(RewriterLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


jb_FrozenArray Rewriter_expectedInputLanguages(const Rewriter *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


jb_FrozenArray Rewriter_expectedContextLanguages(const Rewriter *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


jb_DOMString Rewriter_outputLanguage(const Rewriter *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


jb_Promise Rewriter_measureInputUsage(Rewriter* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Rewriter_measureInputUsage(Rewriter* self , const jb_DOMString* input, const RewriterRewriteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Rewriter_inputQuota(const Rewriter *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inputQuota"));
}


jb_Undefined Rewriter_destroy(Rewriter* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

