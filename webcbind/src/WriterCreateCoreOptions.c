#include <webcbind/WriterCreateCoreOptions.h>

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


WriterCreateCoreOptions WriterCreateCoreOptions_new() {
    em_Val obj = em_Val_object();
    return WriterCreateCoreOptions_from_val(&obj);
}

