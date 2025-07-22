#include <webbind/MediaMetadata.h>
#include <webbind/ChapterInformation.h>


DEFINE_EMLITE_TYPE(MediaMetadata, em_Val);


MediaMetadata MediaMetadata_new() : em_Val(em_Val_global("MediaMetadata").new_()) {
        return MediaMetadata(em_Val_new(em_Val_global("MediaMetadata", ));
      }


MediaMetadata MediaMetadata_new(const jb_Any* init) : em_Val(em_Val_global("MediaMetadata").new_(em_Val_from(init))) {
        return MediaMetadata(em_Val_new(em_Val_global("MediaMetadata", em_Val_from(init)));
      }


jb_DOMString MediaMetadata_title(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void MediaMetadata_set_title(MediaMetadata* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}


jb_DOMString MediaMetadata_artist(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "artist"));
}


void MediaMetadata_set_artist(MediaMetadata* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "artist", value);
}


jb_DOMString MediaMetadata_album(const MediaMetadata *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "album"));
}


void MediaMetadata_set_album(MediaMetadata* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "album", value);
}


jb_FrozenArray MediaMetadata_artwork(const MediaMetadata *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "artwork"));
}


void MediaMetadata_set_artwork(MediaMetadata* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "artwork", value);
}


jb_FrozenArray MediaMetadata_chapterInfo(const MediaMetadata *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "chapterInfo"));
}

