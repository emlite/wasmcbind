#include <webbind/Writer.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(WriterCreateOptions, em_Val);


AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void WriterCreateOptions_set_signal(WriterCreateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("monitor")));
}


void WriterCreateOptions_set_monitor(WriterCreateOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


jb_String WriterCreateOptions_sharedContext(const WriterCreateOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sharedContext")));
}


void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sharedContext"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);


WriterTone WriterCreateCoreOptions_tone(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterTone, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tone")));
}


void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, WriterTone * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tone"), em_Val_from(value));
}


WriterFormat WriterCreateCoreOptions_format(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, WriterFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


WriterLength WriterCreateCoreOptions_length(const WriterCreateCoreOptions *self) {
    return em_Val_as(WriterLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, WriterLength * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


jb_Array WriterCreateCoreOptions_expectedInputLanguages(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages"), em_Val_from(value));
}


jb_Array WriterCreateCoreOptions_expectedContextLanguages(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages"), em_Val_from(value));
}


jb_String WriterCreateCoreOptions_outputLanguage(const WriterCreateCoreOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputLanguage"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WriterWriteOptions, em_Val);


jb_String WriterWriteOptions_context(const WriterWriteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void WriterWriteOptions_set_context(WriterWriteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


AbortSignal WriterWriteOptions_signal(const WriterWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void WriterWriteOptions_set_signal(WriterWriteOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Writer, em_Val);


jb_Promise Writer_create0(Writer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "create"));
}


jb_Promise Writer_create1(Writer* self , WriterCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "create", em_Val_from(options)));
}


jb_Promise Writer_availability0(Writer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "availability"));
}


jb_Promise Writer_availability1(Writer* self , WriterCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("writer"), "availability", em_Val_from(options)));
}


jb_Promise Writer_write0(Writer* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(input)));
}


jb_Promise Writer_write1(Writer* self , jb_String * input, WriterWriteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Writer_writeStreaming0(Writer* self , jb_String * input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "writeStreaming", em_Val_from(input)));
}


ReadableStream Writer_writeStreaming1(Writer* self , jb_String * input, WriterWriteOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "writeStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_String Writer_sharedContext(const Writer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sharedContext")));
}


WriterTone Writer_tone(const Writer *self) {
    return em_Val_as(WriterTone, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tone")));
}


WriterFormat Writer_format(const Writer *self) {
    return em_Val_as(WriterFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


WriterLength Writer_length(const Writer *self) {
    return em_Val_as(WriterLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_Array Writer_expectedInputLanguages(const Writer *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


jb_Array Writer_expectedContextLanguages(const Writer *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


jb_String Writer_outputLanguage(const Writer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


jb_Promise Writer_measureInputUsage0(Writer* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Writer_measureInputUsage1(Writer* self , jb_String * input, WriterWriteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Writer_inputQuota(const Writer *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined Writer_destroy(Writer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

