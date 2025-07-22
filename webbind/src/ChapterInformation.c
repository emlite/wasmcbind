#include <webbind/ChapterInformation.h>


DEFINE_EMLITE_TYPE(MediaImage, em_Val);


jb_USVString MediaImage_src(const MediaImage *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


void MediaImage_set_src(MediaImage* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_DOMString MediaImage_sizes(const MediaImage *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizes")));
}


void MediaImage_set_sizes(MediaImage* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_DOMString MediaImage_type(const MediaImage *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void MediaImage_set_type(MediaImage* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ChapterInformation, em_Val);


jb_DOMString ChapterInformation_title(const ChapterInformation *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


double ChapterInformation_startTime(const ChapterInformation *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startTime")));
}


jb_FrozenArray ChapterInformation_artwork(const ChapterInformation *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}

