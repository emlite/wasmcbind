#include <webbind/SpeechSynthesisEventInit.h>

#include <webbind/SpeechSynthesisUtterance.h>

DEFINE_EMLITE_TYPE(SpeechSynthesisEventInit, EventInit);


SpeechSynthesisUtterance SpeechSynthesisEventInit_utterance(const SpeechSynthesisEventInit *self) {
    return em_Val_as(SpeechSynthesisUtterance, em_Val_get(EventInit_as_val(self->inner), em_Val_from("utterance")));
}


void SpeechSynthesisEventInit_set_utterance(SpeechSynthesisEventInit* self, SpeechSynthesisUtterance * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("utterance"), em_Val_from(value));
}


unsigned long SpeechSynthesisEventInit_charIndex(const SpeechSynthesisEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("charIndex")));
}


void SpeechSynthesisEventInit_set_charIndex(SpeechSynthesisEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("charIndex"), em_Val_from(value));
}


unsigned long SpeechSynthesisEventInit_charLength(const SpeechSynthesisEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("charLength")));
}


void SpeechSynthesisEventInit_set_charLength(SpeechSynthesisEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("charLength"), em_Val_from(value));
}


float SpeechSynthesisEventInit_elapsedTime(const SpeechSynthesisEventInit *self) {
    return em_Val_as(float, em_Val_get(EventInit_as_val(self->inner), em_Val_from("elapsedTime")));
}


void SpeechSynthesisEventInit_set_elapsedTime(SpeechSynthesisEventInit* self, float value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("elapsedTime"), em_Val_from(value));
}


jb_String SpeechSynthesisEventInit_name(const SpeechSynthesisEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("name")));
}


void SpeechSynthesisEventInit_set_name(SpeechSynthesisEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


SpeechSynthesisEventInit SpeechSynthesisEventInit_new() {
    em_Val obj = em_Val_object();
    return SpeechSynthesisEventInit_from_val(&obj);
}

