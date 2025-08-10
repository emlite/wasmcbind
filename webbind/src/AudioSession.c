#include <webbind/AudioSession.h>

DEFINE_EMLITE_TYPE(AudioSession, EventTarget);


AudioSessionType AudioSession_type(const AudioSession *self) {
    return em_Val_as(AudioSessionType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


void AudioSession_set_type(AudioSession* self, AudioSessionType * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AudioSessionState AudioSession_state(const AudioSession *self) {
    return em_Val_as(AudioSessionState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


jb_Any AudioSession_onstatechange(const AudioSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void AudioSession_set_onstatechange(AudioSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}

