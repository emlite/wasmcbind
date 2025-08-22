#include <webcbind/SummarizerCreateCoreOptions.h>

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


SummarizerCreateCoreOptions SummarizerCreateCoreOptions_new() {
    em_Val obj = em_Val_object();
    return SummarizerCreateCoreOptions_from_val(&obj);
}

