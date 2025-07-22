#include <webbind/ChapterInformation.h>


DEFINE_EMLITE_TYPE(MediaImage, em_Val);


jb_USVString MediaImage_src(const MediaImage *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "src"));
}


void MediaImage_set_src(MediaImage* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "src", value);
}


jb_DOMString MediaImage_sizes(const MediaImage *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sizes"));
}


void MediaImage_set_sizes(MediaImage* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sizes", value);
}


jb_DOMString MediaImage_type(const MediaImage *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void MediaImage_set_type(MediaImage* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}

DEFINE_EMLITE_TYPE(ChapterInformation, em_Val);


jb_DOMString ChapterInformation_title(const ChapterInformation *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


double ChapterInformation_startTime(const ChapterInformation *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "startTime"));
}


jb_FrozenArray ChapterInformation_artwork(const ChapterInformation *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "artwork"));
}

