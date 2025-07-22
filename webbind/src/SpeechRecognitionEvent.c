#include <webbind/SpeechRecognitionEvent.h>
#include <webbind/SpeechRecognitionResultList.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionEvent, Event);


SpeechRecognitionEvent SpeechRecognitionEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SpeechRecognitionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SpeechRecognitionEvent_from_val(&vv);
      }


unsigned long SpeechRecognitionEvent_resultIndex(const SpeechRecognitionEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("resultIndex")));
}


SpeechRecognitionResultList SpeechRecognitionEvent_results(const SpeechRecognitionEvent *self) {
    return em_Val_as(SpeechRecognitionResultList, em_Val_get(Event_as_val(self->inner), em_Val_from("results")));
}

