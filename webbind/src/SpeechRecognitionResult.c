#include <webbind/SpeechRecognitionResult.h>

#include <webbind/SpeechRecognitionAlternative.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionResult, em_Val);


unsigned long SpeechRecognitionResult_length(const SpeechRecognitionResult *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


SpeechRecognitionAlternative SpeechRecognitionResult_item(SpeechRecognitionResult* self , unsigned long index) {
    return em_Val_as(SpeechRecognitionAlternative, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


bool SpeechRecognitionResult_isFinal(const SpeechRecognitionResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isFinal")));
}

