#include <webcbind/LanguageDetectorDetectOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);


AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


LanguageDetectorDetectOptions LanguageDetectorDetectOptions_new() {
    em_Val obj = em_Val_object();
    return LanguageDetectorDetectOptions_from_val(&obj);
}

