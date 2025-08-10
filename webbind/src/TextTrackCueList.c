#include <webbind/TextTrackCueList.h>

#include <webbind/TextTrackCue.h>

DEFINE_EMLITE_TYPE(TextTrackCueList, em_Val);


unsigned long TextTrackCueList_length(const TextTrackCueList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


TextTrackCue TextTrackCueList_getCueById(TextTrackCueList* self , jb_String * id) {
    return em_Val_as(TextTrackCue, em_Val_call(em_Val_as_val(self->inner), "getCueById", em_Val_from(id)));
}

