#include <webbind/SpeechGrammar.h>

DEFINE_EMLITE_TYPE(SpeechGrammar, em_Val);


jb_String SpeechGrammar_src(const SpeechGrammar *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


void SpeechGrammar_set_src(SpeechGrammar* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


float SpeechGrammar_weight(const SpeechGrammar *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void SpeechGrammar_set_weight(SpeechGrammar* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}

