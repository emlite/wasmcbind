#include <webbind/ChapterInformation.h>

#include <webbind/MediaImage.h>

DEFINE_EMLITE_TYPE(ChapterInformation, em_Val);


jb_String ChapterInformation_title(const ChapterInformation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


double ChapterInformation_startTime(const ChapterInformation *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startTime")));
}


jb_Array ChapterInformation_artwork(const ChapterInformation *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}

