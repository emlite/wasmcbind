#include <webbind/TextTrackList.h>
#include <webbind/TextTrack.h>


DEFINE_EMLITE_TYPE(TextTrackList, EventTarget);


unsigned long TextTrackList_length(const TextTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "length"));
}


TextTrack TextTrackList_getTrackById(TextTrackList* self , const jb_DOMString* id) {
    return em_Val_as(TextTrack, em_Val_call(EventTarget_as_val(self->inner), "getTrackById", em_Val_from(id)));
}


jb_Any TextTrackList_onchange(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void TextTrackList_set_onchange(TextTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}


jb_Any TextTrackList_onaddtrack(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaddtrack"));
}


void TextTrackList_set_onaddtrack(TextTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaddtrack", value);
}


jb_Any TextTrackList_onremovetrack(const TextTrackList *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onremovetrack"));
}


void TextTrackList_set_onremovetrack(TextTrackList* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onremovetrack", value);
}

