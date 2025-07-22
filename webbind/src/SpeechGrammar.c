#include <webbind/SpeechGrammar.h>


DEFINE_EMLITE_TYPE(SpeechGrammar, em_Val);


jb_DOMString SpeechGrammar_src(const SpeechGrammar *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "src"));
}


void SpeechGrammar_set_src(SpeechGrammar* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "src", value);
}


float SpeechGrammar_weight(const SpeechGrammar *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "weight"));
}


void SpeechGrammar_set_weight(SpeechGrammar* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "weight", value);
}

