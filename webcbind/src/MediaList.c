#include <webcbind/MediaList.h>

DEFINE_EMLITE_TYPE(MediaList, em_Val);


jb_String MediaList_mediaText(const MediaList *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaText")));
}


void MediaList_set_mediaText(MediaList* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaText"), em_Val_from(value));
}


unsigned long MediaList_length(const MediaList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_String MediaList_item(MediaList* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_Undefined MediaList_appendMedium(MediaList* self , jb_String * medium) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "appendMedium", em_Val_from(medium)));
}


jb_Undefined MediaList_deleteMedium(MediaList* self , jb_String * medium) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteMedium", em_Val_from(medium)));
}

