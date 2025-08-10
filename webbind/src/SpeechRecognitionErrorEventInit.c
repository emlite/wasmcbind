#include <webbind/SpeechRecognitionErrorEventInit.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionErrorEventInit, EventInit);


SpeechRecognitionErrorCode SpeechRecognitionErrorEventInit_error(const SpeechRecognitionErrorEventInit *self) {
    return em_Val_as(SpeechRecognitionErrorCode, em_Val_get(EventInit_as_val(self->inner), em_Val_from("error")));
}


void SpeechRecognitionErrorEventInit_set_error(SpeechRecognitionErrorEventInit* self, SpeechRecognitionErrorCode * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_String SpeechRecognitionErrorEventInit_message(const SpeechRecognitionErrorEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("message")));
}


void SpeechRecognitionErrorEventInit_set_message(SpeechRecognitionErrorEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return SpeechRecognitionErrorEventInit_from_val(&obj);
}

