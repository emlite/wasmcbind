#include <webbind/SpeechRecognitionAlternative.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionAlternative, em_Val);


jb_DOMString SpeechRecognitionAlternative_transcript(const SpeechRecognitionAlternative *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transcript")));
}


float SpeechRecognitionAlternative_confidence(const SpeechRecognitionAlternative *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("confidence")));
}

