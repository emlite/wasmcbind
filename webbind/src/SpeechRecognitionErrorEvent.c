#include <webbind/SpeechRecognitionErrorEvent.h>

#include <webbind/SpeechRecognitionErrorEventInit.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);


SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(jb_String * type, SpeechRecognitionErrorEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SpeechRecognitionErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SpeechRecognitionErrorEvent_from_val(&vv);
      }


SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error(const SpeechRecognitionErrorEvent *self) {
    return em_Val_as(SpeechRecognitionErrorCode, em_Val_get(Event_as_val(self->inner), em_Val_from("error")));
}


jb_String SpeechRecognitionErrorEvent_message(const SpeechRecognitionErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("message")));
}

