#include <webcbind/TranslatorTranslateOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);


AbortSignal TranslatorTranslateOptions_signal(const TranslatorTranslateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


TranslatorTranslateOptions TranslatorTranslateOptions_new() {
    em_Val obj = em_Val_object();
    return TranslatorTranslateOptions_from_val(&obj);
}

