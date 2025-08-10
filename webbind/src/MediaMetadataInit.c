#include <webbind/MediaMetadataInit.h>

DEFINE_EMLITE_TYPE(MediaMetadataInit, em_Val);


jb_String MediaMetadataInit_title(const MediaMetadataInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void MediaMetadataInit_set_title(MediaMetadataInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String MediaMetadataInit_artist(const MediaMetadataInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artist")));
}


void MediaMetadataInit_set_artist(MediaMetadataInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artist"), em_Val_from(value));
}


jb_String MediaMetadataInit_album(const MediaMetadataInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("album")));
}


void MediaMetadataInit_set_album(MediaMetadataInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("album"), em_Val_from(value));
}


jb_Array MediaMetadataInit_artwork(const MediaMetadataInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}


void MediaMetadataInit_set_artwork(MediaMetadataInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artwork"), em_Val_from(value));
}


jb_Array MediaMetadataInit_chapterInfo(const MediaMetadataInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("chapterInfo")));
}


void MediaMetadataInit_set_chapterInfo(MediaMetadataInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("chapterInfo"), em_Val_from(value));
}


MediaMetadataInit MediaMetadataInit_new() {
    em_Val obj = em_Val_object();
    return MediaMetadataInit_from_val(&obj);
}

