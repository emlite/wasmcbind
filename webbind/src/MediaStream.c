#include <webbind/MediaStream.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaStream, EventTarget);


MediaStream MediaStream_new(jb_Array * tracks) {
        em_Val vv = em_Val_new(em_Val_global("MediaStream") , em_Val_from(tracks));
        return MediaStream_from_val(&vv);
      }


jb_String MediaStream_id(const MediaStream *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_Array MediaStream_getAudioTracks(MediaStream* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getAudioTracks"));
}


jb_Array MediaStream_getVideoTracks(MediaStream* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getVideoTracks"));
}


jb_Array MediaStream_getTracks(MediaStream* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getTracks"));
}


MediaStreamTrack MediaStream_getTrackById(MediaStream* self , jb_String * trackId) {
    return em_Val_as(MediaStreamTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(trackId)));
}


jb_Undefined MediaStream_addTrack(MediaStream* self , MediaStreamTrack * track) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addTrack", em_Val_from(track)));
}


jb_Undefined MediaStream_removeTrack(MediaStream* self , MediaStreamTrack * track) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeTrack", em_Val_from(track)));
}


MediaStream MediaStream_clone(MediaStream* self ) {
    return em_Val_as(MediaStream, em_Val_call(EventTarget_as_val(self->inner), "clone"));
}


bool MediaStream_active(const MediaStream *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("active")));
}


jb_Any MediaStream_onaddtrack(const MediaStream *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaddtrack")));
}


void MediaStream_set_onaddtrack(MediaStream* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaddtrack"), em_Val_from(value));
}


jb_Any MediaStream_onremovetrack(const MediaStream *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremovetrack")));
}


void MediaStream_set_onremovetrack(MediaStream* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremovetrack"), em_Val_from(value));
}

