#include <webbind/MediaSession.h>
#include <webbind/MediaMetadata.h>


DEFINE_EMLITE_TYPE(MediaPositionState, em_Val);


double MediaPositionState_duration(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


void MediaPositionState_set_duration(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "duration", value);
}


double MediaPositionState_playbackRate(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "playbackRate"));
}


void MediaPositionState_set_playbackRate(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "playbackRate", value);
}


double MediaPositionState_position(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "position"));
}


void MediaPositionState_set_position(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "position", value);
}

DEFINE_EMLITE_TYPE(MediaSession, em_Val);


MediaMetadata MediaSession_metadata(const MediaSession *self) {
    return em_Val_as(MediaMetadata, em_Val_get(em_Val_as_val(self->inner), "metadata"));
}


void MediaSession_set_metadata(MediaSession* self, const MediaMetadata* value) {
    em_Val_set(em_Val_as_val(self->inner), "metadata", value);
}


MediaSessionPlaybackState MediaSession_playbackState(const MediaSession *self) {
    return em_Val_as(MediaSessionPlaybackState, em_Val_get(em_Val_as_val(self->inner), "playbackState"));
}


void MediaSession_set_playbackState(MediaSession* self, const MediaSessionPlaybackState* value) {
    em_Val_set(em_Val_as_val(self->inner), "playbackState", value);
}


jb_Undefined MediaSession_setActionHandler(MediaSession* self , const MediaSessionAction* action, const jb_Function* handler) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setActionHandler", em_Val_from(action), em_Val_from(handler)));
}


jb_Undefined MediaSession_setPositionState(MediaSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPositionState"));
}


jb_Undefined MediaSession_setPositionState(MediaSession* self , const MediaPositionState* state) {
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

