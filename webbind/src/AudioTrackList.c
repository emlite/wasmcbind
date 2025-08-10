#include <webbind/AudioTrackList.h>

#include <webbind/AudioTrack.h>

DEFINE_EMLITE_TYPE(AudioTrackList, EventTarget);


unsigned long AudioTrackList_length(const AudioTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("length")));
}


AudioTrack AudioTrackList_getTrackById(AudioTrackList* self , jb_String * id) {
    return em_Val_as(AudioTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(id)));
}


jb_Any AudioTrackList_onchange(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void AudioTrackList_set_onchange(AudioTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}


jb_Any AudioTrackList_onaddtrack(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaddtrack")));
}


void AudioTrackList_set_onaddtrack(AudioTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaddtrack"), em_Val_from(value));
}


jb_Any AudioTrackList_onremovetrack(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremovetrack")));
}


void AudioTrackList_set_onremovetrack(AudioTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremovetrack"), em_Val_from(value));
}

