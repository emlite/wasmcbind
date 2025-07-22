#include <webbind/Summarizer.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(SummarizerCreateOptions, em_Val);


AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "monitor"));
}


void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "monitor", value);
}


jb_DOMString SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sharedContext", value);
}

DEFINE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);


SummarizerType SummarizerCreateCoreOptions_type(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, const SummarizerType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


SummarizerFormat SummarizerCreateCoreOptions_format(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, const SummarizerFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


SummarizerLength SummarizerCreateCoreOptions_length(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, const SummarizerLength* value) {
    em_Val_set(em_Val_as_val(self->inner), "length", value);
}


jb_Sequence SummarizerCreateCoreOptions_expectedInputLanguages(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedInputLanguages", value);
}


jb_Sequence SummarizerCreateCoreOptions_expectedContextLanguages(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedContextLanguages", value);
}


jb_DOMString SummarizerCreateCoreOptions_outputLanguage(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputLanguage", value);
}

DEFINE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);


AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_DOMString SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "context"));
}


void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "context", value);
}

DEFINE_EMLITE_TYPE(Summarizer, em_Val);


jb_Promise Summarizer_create(Summarizer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "create"));
}


jb_Promise Summarizer_create(Summarizer* self , const SummarizerCreateOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "create", em_Val_from(options)));
}


jb_Promise Summarizer_availability(Summarizer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "availability"));
}


jb_Promise Summarizer_availability(Summarizer* self , const SummarizerCreateCoreOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "availability", em_Val_from(options)));
}


jb_Promise Summarizer_summarize(Summarizer* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "summarize", em_Val_from(input)));
}


jb_Promise Summarizer_summarize(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "summarize", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Summarizer_summarizeStreaming(Summarizer* self , const jb_DOMString* input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "summarizeStreaming", em_Val_from(input)));
}


ReadableStream Summarizer_summarizeStreaming(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "summarizeStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString Summarizer_sharedContext(const Summarizer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


SummarizerType Summarizer_type(const Summarizer *self) {
    return em_Val_as(SummarizerType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


SummarizerFormat Summarizer_format(const Summarizer *self) {
    return em_Val_as(SummarizerFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


SummarizerLength Summarizer_length(const Summarizer *self) {
    return em_Val_as(SummarizerLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


jb_FrozenArray Summarizer_expectedInputLanguages(const Summarizer *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


jb_FrozenArray Summarizer_expectedContextLanguages(const Summarizer *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


jb_DOMString Summarizer_outputLanguage(const Summarizer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


jb_Promise Summarizer_measureInputUsage(Summarizer* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Summarizer_measureInputUsage(Summarizer* self , const jb_DOMString* input, const SummarizerSummarizeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Summarizer_inputQuota(const Summarizer *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inputQuota"));
}


jb_Undefined Summarizer_destroy(Summarizer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

