#include <webbind/ImageTrackList.h>
#include <webbind/ImageTrack.h>


DEFINE_EMLITE_TYPE(ImageTrackList, em_Val);


jb_Promise ImageTrackList_ready(const ImageTrackList *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "ready"));
}


unsigned long ImageTrackList_length(const ImageTrackList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


long ImageTrackList_selectedIndex(const ImageTrackList *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "selectedIndex"));
}


ImageTrack ImageTrackList_selectedTrack(const ImageTrackList *self) {
    return em_Val_as(ImageTrack, em_Val_get(em_Val_as_val(self->inner), "selectedTrack"));
}

