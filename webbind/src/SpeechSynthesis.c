#include <webbind/SpeechSynthesis.h>
#include <webbind/SpeechSynthesisUtterance.h>
#include <webbind/SpeechSynthesisVoice.h>


DEFINE_EMLITE_TYPE(SpeechSynthesis, EventTarget);


bool SpeechSynthesis_pending(const SpeechSynthesis *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "pending"));
}


bool SpeechSynthesis_speaking(const SpeechSynthesis *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "speaking"));
}


bool SpeechSynthesis_paused(const SpeechSynthesis *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "paused"));
}


jb_Any SpeechSynthesis_onvoiceschanged(const SpeechSynthesis *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onvoiceschanged"));
}


void SpeechSynthesis_set_onvoiceschanged(SpeechSynthesis* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onvoiceschanged", value);
}


jb_Undefined SpeechSynthesis_speak(SpeechSynthesis* self , const SpeechSynthesisUtterance* utterance) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "speak", em_Val_from(utterance)));
}


jb_Undefined SpeechSynthesis_cancel(SpeechSynthesis* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancel"));
}


jb_Undefined SpeechSynthesis_pause(SpeechSynthesis* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pause"));
}


jb_Undefined SpeechSynthesis_resume(SpeechSynthesis* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resume"));
}


jb_Sequence SpeechSynthesis_getVoices(SpeechSynthesis* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getVoices"));
}

