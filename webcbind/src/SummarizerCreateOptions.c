#include <webcbind/SummarizerCreateOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(SummarizerCreateOptions, SummarizerCreateCoreOptions);


AbortSignal SummarizerCreateOptions_signal(const SummarizerCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("signal")));
}


void SummarizerCreateOptions_set_signal(SummarizerCreateOptions* self, AbortSignal * value) {
    em_Val_set(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function SummarizerCreateOptions_monitor(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("monitor")));
}


void SummarizerCreateOptions_set_monitor(SummarizerCreateOptions* self, jb_Function * value) {
    em_Val_set(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}


jb_String SummarizerCreateOptions_sharedContext(const SummarizerCreateOptions *self) {
    return em_Val_as(jb_String, em_Val_get(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext")));
}


void SummarizerCreateOptions_set_sharedContext(SummarizerCreateOptions* self, jb_String * value) {
    em_Val_set(SummarizerCreateCoreOptions_as_val(self->inner), em_Val_from("sharedContext"), em_Val_from(value));
}


SummarizerCreateOptions SummarizerCreateOptions_new() {
    em_Val obj = em_Val_object();
    return SummarizerCreateOptions_from_val(&obj);
}

