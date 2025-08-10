#include <webbind/MediaSession.h>

#include <webbind/MediaMetadata.h>
#include <webbind/MediaPositionState.h>

DEFINE_EMLITE_TYPE(MediaSession, em_Val);


MediaMetadata MediaSession_metadata(const MediaSession *self) {
    return em_Val_as(MediaMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void MediaSession_set_metadata(MediaSession* self, MediaMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


MediaSessionPlaybackState MediaSession_playbackState(const MediaSession *self) {
    return em_Val_as(MediaSessionPlaybackState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("playbackState")));
}


void MediaSession_set_playbackState(MediaSession* self, MediaSessionPlaybackState * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("playbackState"), em_Val_from(value));
}


jb_Undefined MediaSession_setActionHandler(MediaSession* self , MediaSessionAction * action, jb_Function * handler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setActionHandler", em_Val_from(action), em_Val_from(handler)));
}


jb_Undefined MediaSession_setPositionState0(MediaSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPositionState"));
}


jb_Undefined MediaSession_setPositionState1(MediaSession* self , MediaPositionState * state) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPositionState", em_Val_from(state)));
}


jb_Promise MediaSession_setMicrophoneActive(MediaSession* self , bool active) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setMicrophoneActive", em_Val_from(active)));
}


jb_Promise MediaSession_setCameraActive(MediaSession* self , bool active) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setCameraActive", em_Val_from(active)));
}


jb_Promise MediaSession_setScreenshareActive(MediaSession* self , bool active) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setScreenshareActive", em_Val_from(active)));
}

