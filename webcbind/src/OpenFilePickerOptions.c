#include <webcbind/OpenFilePickerOptions.h>

DEFINE_EMLITE_TYPE(OpenFilePickerOptions, FilePickerOptions);


bool OpenFilePickerOptions_multiple(const OpenFilePickerOptions *self) {
    return em_Val_as(bool, em_Val_get(FilePickerOptions_as_val(self->inner), em_Val_from("multiple")));
}


void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value) {
    em_Val_set(FilePickerOptions_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}


OpenFilePickerOptions OpenFilePickerOptions_new() {
    em_Val obj = em_Val_object();
    return OpenFilePickerOptions_from_val(&obj);
}

