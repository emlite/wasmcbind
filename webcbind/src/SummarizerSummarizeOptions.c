#include <webcbind/SummarizerSummarizeOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(SummarizerSummarizeOptions, em_Val);


AbortSignal SummarizerSummarizeOptions_signal(const SummarizerSummarizeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SummarizerSummarizeOptions_set_signal(SummarizerSummarizeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_String SummarizerSummarizeOptions_context(const SummarizerSummarizeOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void SummarizerSummarizeOptions_set_context(SummarizerSummarizeOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


SummarizerSummarizeOptions SummarizerSummarizeOptions_new() {
    em_Val obj = em_Val_object();
    return SummarizerSummarizeOptions_from_val(&obj);
}

