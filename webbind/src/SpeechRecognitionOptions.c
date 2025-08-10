#include <webbind/SpeechRecognitionOptions.h>

DEFINE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);


jb_Array SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("langs")));
}


void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("langs"), em_Val_from(value));
}


bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("processLocally")));
}


void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("processLocally"), em_Val_from(value));
}


SpeechRecognitionOptions SpeechRecognitionOptions_new() {
    em_Val obj = em_Val_object();
    return SpeechRecognitionOptions_from_val(&obj);
}

