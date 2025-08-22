#include <webcbind/SpeechSynthesisErrorEventInit.h>

DEFINE_EMLITE_TYPE(SpeechSynthesisErrorEventInit, SpeechSynthesisEventInit);


SpeechSynthesisErrorCode SpeechSynthesisErrorEventInit_error(const SpeechSynthesisErrorEventInit *self) {
    return em_Val_as(SpeechSynthesisErrorCode, em_Val_get(SpeechSynthesisEventInit_as_val(self->inner), em_Val_from("error")));
}


void SpeechSynthesisErrorEventInit_set_error(SpeechSynthesisErrorEventInit* self, SpeechSynthesisErrorCode * value) {
    em_Val_set(SpeechSynthesisEventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return SpeechSynthesisErrorEventInit_from_val(&obj);
}

