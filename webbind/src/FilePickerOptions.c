#include <webbind/FilePickerOptions.h>

DEFINE_EMLITE_TYPE(FilePickerOptions, em_Val);


jb_Array FilePickerOptions_types(const FilePickerOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


void FilePickerOptions_set_types(FilePickerOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("types"), em_Val_from(value));
}


bool FilePickerOptions_excludeAcceptAllOption(const FilePickerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("excludeAcceptAllOption")));
}


void FilePickerOptions_set_excludeAcceptAllOption(FilePickerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("excludeAcceptAllOption"), em_Val_from(value));
}


jb_String FilePickerOptions_id(const FilePickerOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void FilePickerOptions_set_id(FilePickerOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Any FilePickerOptions_startIn(const FilePickerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startIn")));
}


void FilePickerOptions_set_startIn(FilePickerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startIn"), em_Val_from(value));
}


FilePickerOptions FilePickerOptions_new() {
    em_Val obj = em_Val_object();
    return FilePickerOptions_from_val(&obj);
}

