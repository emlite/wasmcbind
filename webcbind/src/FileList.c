#include <webcbind/FileList.h>

#include <webcbind/File.h>

DEFINE_EMLITE_TYPE(FileList, em_Val);


File FileList_item(FileList* self , unsigned long index) {
    return em_Val_as(File, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


unsigned long FileList_length(const FileList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

