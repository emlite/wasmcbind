#include <webcbind/ShareData.h>

#include <webcbind/File.h>

DEFINE_EMLITE_TYPE(ShareData, em_Val);


jb_Array ShareData_files(const ShareData *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("files")));
}


void ShareData_set_files(ShareData* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("files"), em_Val_from(value));
}


jb_String ShareData_title(const ShareData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ShareData_set_title(ShareData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String ShareData_text(const ShareData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("text")));
}


void ShareData_set_text(ShareData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_String ShareData_url(const ShareData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void ShareData_set_url(ShareData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


ShareData ShareData_new() {
    em_Val obj = em_Val_object();
    return ShareData_from_val(&obj);
}

