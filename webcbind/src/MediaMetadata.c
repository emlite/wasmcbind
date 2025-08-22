#include <webcbind/MediaMetadata.h>

#include <webcbind/MediaMetadataInit.h>
#include <webcbind/ChapterInformation.h>

DEFINE_EMLITE_TYPE(MediaMetadata, em_Val);


MediaMetadata MediaMetadata_new0() {
        em_Val vv = em_Val_new(em_Val_global("MediaMetadata") );
        return MediaMetadata_from_val(&vv);
      }


MediaMetadata MediaMetadata_new1(MediaMetadataInit * init) {
        em_Val vv = em_Val_new(em_Val_global("MediaMetadata") , em_Val_from(init));
        return MediaMetadata_from_val(&vv);
      }


jb_String MediaMetadata_title(const MediaMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void MediaMetadata_set_title(MediaMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String MediaMetadata_artist(const MediaMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artist")));
}


void MediaMetadata_set_artist(MediaMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artist"), em_Val_from(value));
}


jb_String MediaMetadata_album(const MediaMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("album")));
}


void MediaMetadata_set_album(MediaMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("album"), em_Val_from(value));
}


jb_Array MediaMetadata_artwork(const MediaMetadata *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}


void MediaMetadata_set_artwork(MediaMetadata* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artwork"), em_Val_from(value));
}


jb_Array MediaMetadata_chapterInfo(const MediaMetadata *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("chapterInfo")));
}

