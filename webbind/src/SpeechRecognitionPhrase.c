#include <webbind/SpeechRecognitionPhrase.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);


SpeechRecognitionPhrase SpeechRecognitionPhrase_new(const jb_DOMString* phrase) : em_Val(em_Val_global("SpeechRecognitionPhrase").new_(em_Val_from(phrase))) {
        return SpeechRecognitionPhrase(em_Val_new(em_Val_global("SpeechRecognitionPhrase", em_Val_from(phrase)));
      }


SpeechRecognitionPhrase SpeechRecognitionPhrase_new(const jb_DOMString* phrase, float boost) : em_Val(em_Val_global("SpeechRecognitionPhrase").new_(em_Val_from(phrase), em_Val_from(boost))) {
        return SpeechRecognitionPhrase(em_Val_new(em_Val_global("SpeechRecognitionPhrase", em_Val_from(phrase), em_Val_from(boost)));
      }


jb_DOMString SpeechRecognitionPhrase_phrase(const SpeechRecognitionPhrase *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "phrase"));
}


float SpeechRecognitionPhrase_boost(const SpeechRecognitionPhrase *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "boost"));
}

