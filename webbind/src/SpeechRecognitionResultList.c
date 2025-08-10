#include <webbind/SpeechRecognitionResultList.h>

#include <webbind/SpeechRecognitionResult.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionResultList, em_Val);


unsigned long SpeechRecognitionResultList_length(const SpeechRecognitionResultList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


SpeechRecognitionResult SpeechRecognitionResultList_item(SpeechRecognitionResultList* self , unsigned long index) {
    return em_Val_as(SpeechRecognitionResult, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}

