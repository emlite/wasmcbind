#include <webbind/MimeTypeArray.h>
#include <webbind/MimeType.h>


DEFINE_EMLITE_TYPE(MimeTypeArray, em_Val);


unsigned long MimeTypeArray_length(const MimeTypeArray *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


MimeType MimeTypeArray_item(MimeTypeArray* self , unsigned long index) {
    return em_Val_as(MimeType, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


MimeType MimeTypeArray_namedItem(MimeTypeArray* self , jb_String * name) {
    return em_Val_as(MimeType, em_Val_call(em_Val_as_val(self->inner), "namedItem", em_Val_from(name)));
}

