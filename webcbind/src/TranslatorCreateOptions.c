#include <webcbind/TranslatorCreateOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(TranslatorCreateOptions, TranslatorCreateCoreOptions);


AbortSignal TranslatorCreateOptions_signal(const TranslatorCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(TranslatorCreateCoreOptions_as_val(self->inner), em_Val_from("signal")));
}


void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, AbortSignal * value) {
    em_Val_set(TranslatorCreateCoreOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function TranslatorCreateOptions_monitor(const TranslatorCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(TranslatorCreateCoreOptions_as_val(self->inner), em_Val_from("monitor")));
}


void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, jb_Function * value) {
    em_Val_set(TranslatorCreateCoreOptions_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


TranslatorCreateOptions TranslatorCreateOptions_new() {
    em_Val obj = em_Val_object();
    return TranslatorCreateOptions_from_val(&obj);
}

