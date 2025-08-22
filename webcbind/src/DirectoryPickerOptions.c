#include <webcbind/DirectoryPickerOptions.h>

DEFINE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);


jb_String DirectoryPickerOptions_id(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Any DirectoryPickerOptions_startIn(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startIn")));
}


void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startIn"), em_Val_from(value));
}


FileSystemPermissionMode DirectoryPickerOptions_mode(const DirectoryPickerOptions *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, FileSystemPermissionMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


DirectoryPickerOptions DirectoryPickerOptions_new() {
    em_Val obj = em_Val_object();
    return DirectoryPickerOptions_from_val(&obj);
}

