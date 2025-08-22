#include <webcbind/LanguageDetectorCreateCoreOptions.h>

DEFINE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);


jb_Array LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages"), em_Val_from(value));
}


LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions_new() {
    em_Val obj = em_Val_object();
    return LanguageDetectorCreateCoreOptions_from_val(&obj);
}

