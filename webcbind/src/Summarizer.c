#include <webcbind/Summarizer.h>

#include <webcbind/SummarizerCreateOptions.h>
#include <webcbind/SummarizerCreateCoreOptions.h>
#include <webcbind/SummarizerSummarizeOptions.h>
#include <webcbind/ReadableStream.h>

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

