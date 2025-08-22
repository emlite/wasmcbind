#include <webcbind/SaveFilePickerOptions.h>

DEFINE_EMLITE_TYPE(SaveFilePickerOptions, FilePickerOptions);


jb_String SaveFilePickerOptions_suggestedName(const SaveFilePickerOptions *self) {
    return em_Val_as(jb_String, em_Val_get(FilePickerOptions_as_val(self->inner), em_Val_from("suggestedName")));
}


void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, jb_String * value) {
    em_Val_set(FilePickerOptions_as_val(self->inner), em_Val_from("suggestedName"), em_Val_from(value));
}


SaveFilePickerOptions SaveFilePickerOptions_new() {
    em_Val obj = em_Val_object();
    return SaveFilePickerOptions_from_val(&obj);
}

