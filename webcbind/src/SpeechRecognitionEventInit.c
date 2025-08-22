#include <webcbind/SpeechRecognitionEventInit.h>

#include <webcbind/SpeechRecognitionResultList.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionEventInit, EventInit);


unsigned long SpeechRecognitionEventInit_resultIndex(const SpeechRecognitionEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("resultIndex")));
}


void SpeechRecognitionEventInit_set_resultIndex(SpeechRecognitionEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("resultIndex"), em_Val_from(value));
}


SpeechRecognitionResultList SpeechRecognitionEventInit_results(const SpeechRecognitionEventInit *self) {
    return em_Val_as(SpeechRecognitionResultList, em_Val_get(EventInit_as_val(self->inner), em_Val_from("results")));
}


void SpeechRecognitionEventInit_set_results(SpeechRecognitionEventInit* self, SpeechRecognitionResultList * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("results"), em_Val_from(value));
}


SpeechRecognitionEventInit SpeechRecognitionEventInit_new() {
    em_Val obj = em_Val_object();
    return SpeechRecognitionEventInit_from_val(&obj);
}

