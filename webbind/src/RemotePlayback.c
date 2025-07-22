#include <webbind/RemotePlayback.h>


DEFINE_EMLITE_TYPE(RemotePlayback, EventTarget);


jb_Promise RemotePlayback_watchAvailability(RemotePlayback* self , const jb_Function* callback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "watchAvailability", em_Val_from(callback)));
}


jb_Promise RemotePlayback_cancelWatchAvailability(RemotePlayback* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "cancelWatchAvailability"));
}


jb_Promise RemotePlayback_cancelWatchAvailability(RemotePlayback* self , long id) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "cancelWatchAvailability", em_Val_from(id)));
}


RemotePlaybackState RemotePlayback_state(const RemotePlayback *self) {
    return em_Val_as(RemotePlaybackState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_Any RemotePlayback_onconnecting(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnecting"));
}


void RemotePlayback_set_onconnecting(RemotePlayback* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnecting", value);
}


jb_Any RemotePlayback_onconnect(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnect"));
}


void RemotePlayback_set_onconnect(RemotePlayback* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnect", value);
}


jb_Any RemotePlayback_ondisconnect(const RemotePlayback *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondisconnect"));
}


void RemotePlayback_set_ondisconnect(RemotePlayback* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondisconnect", value);
}


jb_Promise RemotePlayback_prompt(RemotePlayback* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "prompt"));
}

