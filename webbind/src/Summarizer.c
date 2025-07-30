#include <webbind/Summarizer.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(SummarizerCreateOptions, em_Val);


AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("monitor")));
}


void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


jb_String SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sharedContext")));
}


void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sharedContext"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SummarizerCreateCoreOptions, em_Val);


SummarizerType SummarizerCreateCoreOptions_type(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void SummarizerCreateCoreOptions_set_type(SummarizerCreateCoreOptions* self, SummarizerType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


SummarizerFormat SummarizerCreateCoreOptions_format(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void SummarizerCreateCoreOptions_set_format(SummarizerCreateCoreOptions* self, SummarizerFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


SummarizerLength SummarizerCreateCoreOptions_length(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(SummarizerLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void SummarizerCreateCoreOptions_set_length(SummarizerCreateCoreOptions* self, SummarizerLength * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


jb_Array SummarizerCreateCoreOptions_expectedInputLanguages(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


void SummarizerCreateCoreOptions_set_expectedInputLanguages(SummarizerCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages"), em_Val_from(value));
}


jb_Array SummarizerCreateCoreOptions_expectedContextLanguages(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


void SummarizerCreateCoreOptions_set_expectedContextLanguages(SummarizerCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages"), em_Val_from(value));
}


jb_String SummarizerCreateCoreOptions_outputLanguage(const SummarizerCreateCoreOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


void SummarizerCreateCoreOptions_set_outputLanguage(SummarizerCreateCoreOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputLanguage"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);


AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_String SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Summarizer, em_Val);


jb_Promise Summarizer_create0(Summarizer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "create"));
}


jb_Promise Summarizer_create1(Summarizer* self , SummarizerCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "create", em_Val_from(options)));
}


jb_Promise Summarizer_availability0(Summarizer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "availability"));
}


jb_Promise Summarizer_availability1(Summarizer* self , SummarizerCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("summarizer"), "availability", em_Val_from(options)));
}


jb_Promise Summarizer_summarize0(Summarizer* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "summarize", em_Val_from(input)));
}


jb_Promise Summarizer_summarize1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "summarize", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Summarizer_summarizeStreaming0(Summarizer* self , jb_String * input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "summarizeStreaming", em_Val_from(input)));
}


ReadableStream Summarizer_summarizeStreaming1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "summarizeStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_String Summarizer_sharedContext(const Summarizer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sharedContext")));
}


SummarizerType Summarizer_type(const Summarizer *self) {
    return em_Val_as(SummarizerType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


SummarizerFormat Summarizer_format(const Summarizer *self) {
    return em_Val_as(SummarizerFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


SummarizerLength Summarizer_length(const Summarizer *self) {
    return em_Val_as(SummarizerLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_Array Summarizer_expectedInputLanguages(const Summarizer *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


jb_Array Summarizer_expectedContextLanguages(const Summarizer *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


jb_String Summarizer_outputLanguage(const Summarizer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


jb_Promise Summarizer_measureInputUsage0(Summarizer* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Summarizer_measureInputUsage1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Summarizer_inputQuota(const Summarizer *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined Summarizer_destroy(Summarizer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

