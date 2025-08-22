#include <webcbind/LanguageDetectorCreateOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(LanguageDetectorCreateOptions, LanguageDetectorCreateCoreOptions);


AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(LanguageDetectorCreateCoreOptions_as_val(self->inner), em_Val_from("signal")));
}


void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, AbortSignal * value) {
    em_Val_set(LanguageDetectorCreateCoreOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(LanguageDetectorCreateCoreOptions_as_val(self->inner), em_Val_from("monitor")));
}


void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, jb_Function * value) {
    em_Val_set(LanguageDetectorCreateCoreOptions_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


LanguageDetectorCreateOptions LanguageDetectorCreateOptions_new() {
    em_Val obj = em_Val_object();
    return LanguageDetectorCreateOptions_from_val(&obj);
}

