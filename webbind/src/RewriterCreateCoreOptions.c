#include <webbind/RewriterCreateCoreOptions.h>

DEFINE_EMLITE_TYPE(RewriterCreateCoreOptions, em_Val);


RewriterTone RewriterCreateCoreOptions_tone(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterTone, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tone")));
}


void RewriterCreateCoreOptions_set_tone(RewriterCreateCoreOptions* self, RewriterTone * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tone"), em_Val_from(value));
}


RewriterFormat RewriterCreateCoreOptions_format(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void RewriterCreateCoreOptions_set_format(RewriterCreateCoreOptions* self, RewriterFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


RewriterLength RewriterCreateCoreOptions_length(const RewriterCreateCoreOptions *self) {
    return em_Val_as(RewriterLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void RewriterCreateCoreOptions_set_length(RewriterCreateCoreOptions* self, RewriterLength * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


jb_Array RewriterCreateCoreOptions_expectedInputLanguages(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


void RewriterCreateCoreOptions_set_expectedInputLanguages(RewriterCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages"), em_Val_from(value));
}


jb_Array RewriterCreateCoreOptions_expectedContextLanguages(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages")));
}


void RewriterCreateCoreOptions_set_expectedContextLanguages(RewriterCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedContextLanguages"), em_Val_from(value));
}


jb_String RewriterCreateCoreOptions_outputLanguage(const RewriterCreateCoreOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("outputLanguage")));
}


void RewriterCreateCoreOptions_set_outputLanguage(RewriterCreateCoreOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("outputLanguage"), em_Val_from(value));
}


RewriterCreateCoreOptions RewriterCreateCoreOptions_new() {
    em_Val obj = em_Val_object();
    return RewriterCreateCoreOptions_from_val(&obj);
}

