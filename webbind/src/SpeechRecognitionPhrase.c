#include <webbind/SpeechRecognitionPhrase.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);


SpeechRecognitionPhrase SpeechRecognitionPhrase_new0(jb_String * phrase) {
        em_Val vv = em_Val_new(em_Val_global("SpeechRecognitionPhrase") , em_Val_from(phrase));
        return SpeechRecognitionPhrase_from_val(&vv);
      }


SpeechRecognitionPhrase SpeechRecognitionPhrase_new1(jb_String * phrase, float boost) {
        em_Val vv = em_Val_new(em_Val_global("SpeechRecognitionPhrase") , em_Val_from(phrase), em_Val_from(boost));
        return SpeechRecognitionPhrase_from_val(&vv);
      }


jb_String SpeechRecognitionPhrase_phrase(const SpeechRecognitionPhrase *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phrase")));
}


float SpeechRecognitionPhrase_boost(const SpeechRecognitionPhrase *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boost")));
}

