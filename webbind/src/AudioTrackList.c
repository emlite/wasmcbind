#include <webbind/AudioTrackList.h>
#include <webbind/AudioTrack.h>


DEFINE_EMLITE_TYPE(AudioTrackList, EventTarget);


unsigned long AudioTrackList_length(const AudioTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "length"));
}


AudioTrack AudioTrackList_getTrackById(AudioTrackList* self , const jb_DOMString* id) {
    return em_Val_as(AudioTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(id)));
}


jb_Any AudioTrackList_onchange(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void AudioTrackList_set_onchange(AudioTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}


jb_Any AudioTrackList_onaddtrack(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaddtrack"));
}


void AudioTrackList_set_onaddtrack(AudioTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaddtrack", value);
}


jb_Any AudioTrackList_onremovetrack(const AudioTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onremovetrack"));
}


void AudioTrackList_set_onremovetrack(AudioTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onremovetrack", value);
}

