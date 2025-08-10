#include <webbind/Rewriter.h>

#include <webbind/RewriterCreateOptions.h>
#include <webbind/RewriterCreateCoreOptions.h>
#include <webbind/RewriterRewriteOptions.h>
#include <webbind/ReadableStream.h>

DEFINE_EMLITE_TYPE(Rewriter, em_Val);


jb_Promise Rewriter_create0(Rewriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "create"));
}


jb_Promise Rewriter_create1(Rewriter* self , RewriterCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "create", em_Val_from(options)));
}


jb_Promise Rewriter_availability0(Rewriter* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "availability"));
}


jb_Promise Rewriter_availability1(Rewriter* self , RewriterCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rewriter"), "availability", em_Val_from(options)));
}


jb_Promise Rewriter_rewrite0(Rewriter* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "rewrite", em_Val_from(input)));
}


jb_Promise Rewriter_rewrite1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "rewrite", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Rewriter_rewriteStreaming0(Rewriter* self , jb_String * input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "rewriteStreaming", em_Val_from(input)));
}


ReadableStream Rewriter_rewriteStreaming1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "rewriteStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_String Rewriter_sharedContext(const Rewriter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sharedContext")));
}


RewriterTone Rewriter_tone(const Rewriter *self) {
    return em_Val_as(RewriterTone, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tone")));
}


RewriterFormat Rewriter_format(const Rewriter *self) {
    return em_Val_as(RewriterFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


RewriterLength Rewriter_length(const Rewriter *self) {
    return em_Val_as(RewriterLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_Array Rewriter_expectedInputLanguages(const Rewriter *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


jb_Array Rewriter_expectedContextLanguages(const Rewriter *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


jb_String Rewriter_outputLanguage(const Rewriter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


jb_Promise Rewriter_measureInputUsage0(Rewriter* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Rewriter_measureInputUsage1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Rewriter_inputQuota(const Rewriter *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined Rewriter_destroy(Rewriter* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

