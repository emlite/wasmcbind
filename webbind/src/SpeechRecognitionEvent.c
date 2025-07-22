#include <webbind/SpeechRecognitionEvent.h>
#include <webbind/SpeechRecognitionResultList.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionEvent, Event);


SpeechRecognitionEvent SpeechRecognitionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SpeechRecognitionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SpeechRecognitionEvent(em_Val_new(em_Val_global("SpeechRecognitionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


unsigned long SpeechRecognitionEvent_resultIndex(const SpeechRecognitionEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "resultIndex"));
}


SpeechRecognitionResultList SpeechRecognitionEvent_results(const SpeechRecognitionEvent *self) {
    return em_Val_as(SpeechRecognitionResultList, em_Val_get(Event_as_val(self->inner), "results"));
}

