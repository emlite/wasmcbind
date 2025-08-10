#include <webbind/ChapterInformationInit.h>

DEFINE_EMLITE_TYPE(ChapterInformationInit, em_Val);


jb_String ChapterInformationInit_title(const ChapterInformationInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ChapterInformationInit_set_title(ChapterInformationInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


double ChapterInformationInit_startTime(const ChapterInformationInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startTime")));
}


void ChapterInformationInit_set_startTime(ChapterInformationInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startTime"), em_Val_from(value));
}


jb_Array ChapterInformationInit_artwork(const ChapterInformationInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("artwork")));
}


void ChapterInformationInit_set_artwork(ChapterInformationInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("artwork"), em_Val_from(value));
}


ChapterInformationInit ChapterInformationInit_new() {
    em_Val obj = em_Val_object();
    return ChapterInformationInit_from_val(&obj);
}

