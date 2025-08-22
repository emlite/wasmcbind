#include <webcbind/Writer.h>

#include <webcbind/WriterCreateOptions.h>
#include <webcbind/WriterCreateCoreOptions.h>
#include <webcbind/WriterWriteOptions.h>
#include <webcbind/ReadableStream.h>

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

