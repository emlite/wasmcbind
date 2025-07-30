#include <webbind/SpeechSynthesisUtterance.h>
#include <webbind/SpeechSynthesisVoice.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisUtterance, EventTarget);


SpeechSynthesisUtterance SpeechSynthesisUtterance_new0() {
        em_Val vv = em_Val_new(em_Val_global("SpeechSynthesisUtterance") );
        return SpeechSynthesisUtterance_from_val(&vv);
      }


SpeechSynthesisUtterance SpeechSynthesisUtterance_new1(jb_String * text) {
        em_Val vv = em_Val_new(em_Val_global("SpeechSynthesisUtterance") , em_Val_from(text));
        return SpeechSynthesisUtterance_from_val(&vv);
      }


jb_String SpeechSynthesisUtterance_text(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("text")));
}


void SpeechSynthesisUtterance_set_text(SpeechSynthesisUtterance* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_String SpeechSynthesisUtterance_lang(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("lang")));
}


void SpeechSynthesisUtterance_set_lang(SpeechSynthesisUtterance* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


SpeechSynthesisVoice SpeechSynthesisUtterance_voice(const SpeechSynthesisUtterance *self) {
    return em_Val_as(SpeechSynthesisVoice, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("voice")));
}


void SpeechSynthesisUtterance_set_voice(SpeechSynthesisUtterance* self, SpeechSynthesisVoice * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("voice"), em_Val_from(value));
}


float SpeechSynthesisUtterance_volume(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("volume")));
}


void SpeechSynthesisUtterance_set_volume(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("volume"), em_Val_from(value));
}


float SpeechSynthesisUtterance_rate(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("rate")));
}


void SpeechSynthesisUtterance_set_rate(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("rate"), em_Val_from(value));
}


float SpeechSynthesisUtterance_pitch(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pitch")));
}


void SpeechSynthesisUtterance_set_pitch(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("pitch"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onstart(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstart")));
}


void SpeechSynthesisUtterance_set_onstart(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstart"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onend(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onend")));
}


void SpeechSynthesisUtterance_set_onend(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onend"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onerror(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void SpeechSynthesisUtterance_set_onerror(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onpause(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onpause")));
}


void SpeechSynthesisUtterance_set_onpause(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onpause"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onresume(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresume")));
}


void SpeechSynthesisUtterance_set_onresume(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresume"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onmark(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmark")));
}


void SpeechSynthesisUtterance_set_onmark(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmark"), em_Val_from(value));
}


jb_Any SpeechSynthesisUtterance_onboundary(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onboundary")));
}


void SpeechSynthesisUtterance_set_onboundary(SpeechSynthesisUtterance* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onboundary"), em_Val_from(value));
}

