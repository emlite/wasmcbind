#include <webbind/SpeechSynthesisUtterance.h>
#include <webbind/SpeechSynthesisVoice.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisUtterance, EventTarget);


SpeechSynthesisUtterance SpeechSynthesisUtterance_new() : EventTarget(em_Val_global("SpeechSynthesisUtterance").new_()) {
        return SpeechSynthesisUtterance(em_Val_new(em_Val_global("SpeechSynthesisUtterance", ));
      }


SpeechSynthesisUtterance SpeechSynthesisUtterance_new(const jb_DOMString* text) : EventTarget(em_Val_global("SpeechSynthesisUtterance").new_(em_Val_from(text))) {
        return SpeechSynthesisUtterance(em_Val_new(em_Val_global("SpeechSynthesisUtterance", em_Val_from(text)));
      }


jb_DOMString SpeechSynthesisUtterance_text(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "text"));
}


void SpeechSynthesisUtterance_set_text(SpeechSynthesisUtterance* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "text", value);
}


jb_DOMString SpeechSynthesisUtterance_lang(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "lang"));
}


void SpeechSynthesisUtterance_set_lang(SpeechSynthesisUtterance* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "lang", value);
}


SpeechSynthesisVoice SpeechSynthesisUtterance_voice(const SpeechSynthesisUtterance *self) {
    return em_Val_as(SpeechSynthesisVoice, em_Val_get(EventTarget_as_val(self->inner), "voice"));
}


void SpeechSynthesisUtterance_set_voice(SpeechSynthesisUtterance* self, const SpeechSynthesisVoice* value) {
    em_Val_set(EventTarget_as_val(self->inner), "voice", value);
}


float SpeechSynthesisUtterance_volume(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), "volume"));
}


void SpeechSynthesisUtterance_set_volume(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), "volume", value);
}


float SpeechSynthesisUtterance_rate(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), "rate"));
}


void SpeechSynthesisUtterance_set_rate(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), "rate", value);
}


float SpeechSynthesisUtterance_pitch(const SpeechSynthesisUtterance *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), "pitch"));
}


void SpeechSynthesisUtterance_set_pitch(SpeechSynthesisUtterance* self, float value) {
    em_Val_set(EventTarget_as_val(self->inner), "pitch", value);
}


jb_Any SpeechSynthesisUtterance_onstart(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstart"));
}


void SpeechSynthesisUtterance_set_onstart(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstart", value);
}


jb_Any SpeechSynthesisUtterance_onend(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onend"));
}


void SpeechSynthesisUtterance_set_onend(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onend", value);
}


jb_Any SpeechSynthesisUtterance_onerror(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void SpeechSynthesisUtterance_set_onerror(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any SpeechSynthesisUtterance_onpause(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onpause"));
}


void SpeechSynthesisUtterance_set_onpause(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onpause", value);
}


jb_Any SpeechSynthesisUtterance_onresume(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onresume"));
}


void SpeechSynthesisUtterance_set_onresume(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onresume", value);
}


jb_Any SpeechSynthesisUtterance_onmark(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmark"));
}


void SpeechSynthesisUtterance_set_onmark(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmark", value);
}


jb_Any SpeechSynthesisUtterance_onboundary(const SpeechSynthesisUtterance *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onboundary"));
}


void SpeechSynthesisUtterance_set_onboundary(SpeechSynthesisUtterance* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onboundary", value);
}

