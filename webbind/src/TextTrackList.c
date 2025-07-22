#include <webbind/TextTrackList.h>
#include <webbind/TextTrack.h>


DEFINE_EMLITE_TYPE(TextTrackList, EventTarget);


unsigned long TextTrackList_length(const TextTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("length")));
}


TextTrack TextTrackList_getTrackById(TextTrackList* self , jb_DOMString * id) {
    return em_Val_as(TextTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(id)));
}


jb_Any TextTrackList_onchange(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void TextTrackList_set_onchange(TextTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}


jb_Any TextTrackList_onaddtrack(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaddtrack")));
}


void TextTrackList_set_onaddtrack(TextTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaddtrack"), em_Val_from(value));
}


jb_Any TextTrackList_onremovetrack(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onremovetrack")));
}


void TextTrackList_set_onremovetrack(TextTrackList* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onremovetrack"), em_Val_from(value));
}

