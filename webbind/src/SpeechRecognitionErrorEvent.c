#include <webbind/SpeechRecognitionErrorEvent.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);


SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SpeechRecognitionErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SpeechRecognitionErrorEvent(em_Val_new(em_Val_global("SpeechRecognitionErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error(const SpeechRecognitionErrorEvent *self) {
    return em_Val_as(SpeechRecognitionErrorCode, em_Val_get(Event_as_val(self->inner), "error"));
}


jb_DOMString SpeechRecognitionErrorEvent_message(const SpeechRecognitionErrorEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "message"));
}

