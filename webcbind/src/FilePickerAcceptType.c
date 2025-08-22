#include <webcbind/FilePickerAcceptType.h>

DEFINE_EMLITE_TYPE(FilePickerAcceptType, em_Val);


jb_String FilePickerAcceptType_description(const FilePickerAcceptType *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void FilePickerAcceptType_set_description(FilePickerAcceptType* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


jb_Object FilePickerAcceptType_accept(const FilePickerAcceptType *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accept")));
}


void FilePickerAcceptType_set_accept(FilePickerAcceptType* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accept"), em_Val_from(value));
}


FilePickerAcceptType FilePickerAcceptType_new() {
    em_Val obj = em_Val_object();
    return FilePickerAcceptType_from_val(&obj);
}

