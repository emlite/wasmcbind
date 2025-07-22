#include <webbind/SpeechSynthesisVoice.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisVoice, em_Val);


jb_DOMString SpeechSynthesisVoice_voiceURI(const SpeechSynthesisVoice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("voiceURI")));
}


jb_DOMString SpeechSynthesisVoice_name(const SpeechSynthesisVoice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_DOMString SpeechSynthesisVoice_lang(const SpeechSynthesisVoice *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


bool SpeechSynthesisVoice_localService(const SpeechSynthesisVoice *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("localService")));
}


bool SpeechSynthesisVoice_default_(const SpeechSynthesisVoice *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("default")));
}

