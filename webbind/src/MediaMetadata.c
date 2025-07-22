#include <webbind/MediaMetadata.h>
#include <webbind/ChapterInformation.h>


DEFINE_EMLITE_TYPE(MediaMetadata, em_Val);


MediaMetadata MediaMetadata_new0() {
        em_Val vv = em_Val_new(em_Val_global("MediaMetadata") );
        return MediaMetadata_from_val(&vv);
      }


MediaMetadata MediaMetadata_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("MediaMetadata") , em_Val_from(init));
        return MediaMetadata_from_val(&vv);
      }


jb_DOMString MediaMetadata_title(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void MediaMetadata_set_title(MediaMetadata* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_DOMString MediaMetadata_artist(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artist")));
}


void MediaMetadata_set_artist(MediaMetadata* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artist"), em_Val_from(value));
}


jb_DOMString MediaMetadata_album(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("album")));
}


void MediaMetadata_set_album(MediaMetadata* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("album"), em_Val_from(value));
}


jb_FrozenArray MediaMetadata_artwork(const MediaMetadata *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}


void MediaMetadata_set_artwork(MediaMetadata* self, jb_FrozenArray * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artwork"), em_Val_from(value));
}


jb_FrozenArray MediaMetadata_chapterInfo(const MediaMetadata *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("chapterInfo")));
}

