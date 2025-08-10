#include <webbind/VideoTrackList.h>

#include <webbind/VideoTrack.h>

DEFINE_EMLITE_TYPE(VideoTrackList, EventTarget);


unsigned long VideoTrackList_length(const VideoTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("length")));
}


VideoTrack VideoTrackList_getTrackById(VideoTrackList* self , jb_String * id) {
    return em_Val_as(VideoTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(id)));
}


long VideoTrackList_selectedIndex(const VideoTrackList *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("selectedIndex")));
}


jb_Any VideoTrackList_onchange(const VideoTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void VideoTrackList_set_onchange(VideoTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}


jb_Any VideoTrackList_onaddtrack(const VideoTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaddtrack")));
}


void VideoTrackList_set_onaddtrack(VideoTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaddtrack"), em_Val_from(value));
}


jb_Any VideoTrackList_onremovetrack(const VideoTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremovetrack")));
}


void VideoTrackList_set_onremovetrack(VideoTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremovetrack"), em_Val_from(value));
}

