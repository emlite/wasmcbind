#include <webbind/RemotePlayback.h>

DEFINE_EMLITE_TYPE(RemotePlayback, EventTarget);


jb_Promise RemotePlayback_watchAvailability(RemotePlayback* self , jb_Function * callback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAvailability", em_Val_from(callback)));
}


jb_Promise RemotePlayback_cancelWatchAvailability0(RemotePlayback* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "cancelWatchAvailability"));
}


jb_Promise RemotePlayback_cancelWatchAvailability1(RemotePlayback* self , long id) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "cancelWatchAvailability", em_Val_from(id)));
}


RemotePlaybackState RemotePlayback_state(const RemotePlayback *self) {
    return em_Val_as(RemotePlaybackState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


jb_Any RemotePlayback_onconnecting(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnecting")));
}


void RemotePlayback_set_onconnecting(RemotePlayback* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnecting"), em_Val_from(value));
}


jb_Any RemotePlayback_onconnect(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void RemotePlayback_set_onconnect(RemotePlayback* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any RemotePlayback_ondisconnect(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondisconnect")));
}


void RemotePlayback_set_ondisconnect(RemotePlayback* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondisconnect"), em_Val_from(value));
}


jb_Promise RemotePlayback_prompt(RemotePlayback* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "prompt"));
}

