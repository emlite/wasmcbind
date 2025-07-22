#include <webbind/Writer.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(WriterCreateOptions, em_Val);


AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void WriterCreateOptions_set_signal(WriterCreateOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "monitor"));
}


void WriterCreateOptions_set_monitor(WriterCreateOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "monitor", value);
}


jb_DOMString WriterCreateOptions_sharedContext(const WriterCreateOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sharedContext", value);
}

DEFINE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);


WriterTone WriterCreateCoreOptions_tone(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterTone, em_Val_get(em_Val_as_val(self->inner), "tone"));
}


void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, const WriterTone* value) {
    em_Val_set(em_Val_as_val(self->inner), "tone", value);
}


WriterFormat WriterCreateCoreOptions_format(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, const WriterFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


WriterLength WriterCreateCoreOptions_length(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, const WriterLength* value) {
    em_Val_set(em_Val_as_val(self->inner), "length", value);
}


jb_Sequence WriterCreateCoreOptions_expectedInputLanguages(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedInputLanguages", value);
}


jb_Sequence WriterCreateCoreOptions_expectedContextLanguages(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedContextLanguages", value);
}


jb_DOMString WriterCreateCoreOptions_outputLanguage(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "outputLanguage", value);
}

DEFINE_EMLITE_TYPE(WriterWriteOptions, em_Val);


jb_DOMString WriterWriteOptions_context(const WriterWriteOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "context"));
}


void WriterWriteOptions_set_context(WriterWriteOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "context", value);
}


AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void WriterWriteOptions_set_signal(WriterWriteOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(Writer, em_Val);


jb_Promise Writer_create(Writer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "create"));
}


jb_Promise Writer_create(Writer* self , const WriterCreateOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "create", em_Val_from(options)));
}


jb_Promise Writer_availability(Writer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "availability"));
}


jb_Promise Writer_availability(Writer* self , const WriterCreateCoreOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "availability", em_Val_from(options)));
}


jb_Promise Writer_write(Writer* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(input)));
}


jb_Promise Writer_write(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Writer_writeStreaming(Writer* self , const jb_DOMString* input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "writeStreaming", em_Val_from(input)));
}


ReadableStream Writer_writeStreaming(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "writeStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString Writer_sharedContext(const Writer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sharedContext"));
}


WriterTone Writer_tone(const Writer *self) {
    return em_Val_as(WriterTone, em_Val_get(em_Val_as_val(self->inner), "tone"));
}


WriterFormat Writer_format(const Writer *self) {
    return em_Val_as(WriterFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


WriterLength Writer_length(const Writer *self) {
    return em_Val_as(WriterLength, em_Val_get(em_Val_as_val(self->inner), "length"));
}


jb_FrozenArray Writer_expectedInputLanguages(const Writer *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


jb_FrozenArray Writer_expectedContextLanguages(const Writer *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedContextLanguages"));
}


jb_DOMString Writer_outputLanguage(const Writer *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "outputLanguage"));
}


jb_Promise Writer_measureInputUsage(Writer* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Writer_measureInputUsage(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Writer_inputQuota(const Writer *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inputQuota"));
}


jb_Undefined Writer_destroy(Writer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

