#include <webbind/MediaStream.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaStream, EventTarget);


MediaStream MediaStream_new(const jb_Sequence* tracks) : EventTarget(em_Val_global("MediaStream").new_(em_Val_from(tracks))) {
        return MediaStream(em_Val_new(em_Val_global("MediaStream", em_Val_from(tracks)));
      }


jb_DOMString MediaStream_id(const MediaStream *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_Sequence MediaStream_getAudioTracks(MediaStream* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getAudioTracks"));
}


jb_Sequence MediaStream_getVideoTracks(MediaStream* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getVideoTracks"));
}


jb_Sequence MediaStream_getTracks(MediaStream* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getTracks"));
}


MediaStreamTrack MediaStream_getTrackById(MediaStream* self , const jb_DOMString* trackId) {
    return em_Val_as(MediaStreamTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(trackId)));
}


jb_Undefined MediaStream_addTrack(MediaStream* self , const MediaStreamTrack* track) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addTrack", em_Val_from(track)));
}


jb_Undefined MediaStream_removeTrack(MediaStream* self , const MediaStreamTrack* track) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeTrack", em_Val_from(track)));
}


MediaStream MediaStream_clone(MediaStream* self ) {
    return em_Val_as(MediaStream, em_Val_call(EventTarget_as_val(self->inner), "clone"));
}


bool MediaStream_active(const MediaStream *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "active"));
}


jb_Any MediaStream_onaddtrack(const MediaStream *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaddtrack"));
}


void MediaStream_set_onaddtrack(MediaStream* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaddtrack", value);
}


jb_Any MediaStream_onremovetrack(const MediaStream *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onremovetrack"));
}


void MediaStream_set_onremovetrack(MediaStream* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onremovetrack", value);
}

