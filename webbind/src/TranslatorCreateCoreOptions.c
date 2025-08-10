#include <webbind/TranslatorCreateCoreOptions.h>

DEFINE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);


jb_String TranslatorCreateCoreOptions_sourceLanguage(const TranslatorCreateCoreOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceLanguage")));
}


void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sourceLanguage"), em_Val_from(value));
}


jb_String TranslatorCreateCoreOptions_targetLanguage(const TranslatorCreateCoreOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetLanguage")));
}


void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("targetLanguage"), em_Val_from(value));
}


TranslatorCreateCoreOptions TranslatorCreateCoreOptions_new() {
    em_Val obj = em_Val_object();
    return TranslatorCreateCoreOptions_from_val(&obj);
}

