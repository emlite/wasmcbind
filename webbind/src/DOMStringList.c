#include <webbind/DOMStringList.h>


DEFINE_EMLITE_TYPE(DOMStringList, em_Val);


unsigned long DOMStringList_length(const DOMStringList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


jb_String DOMStringList_item(DOMStringList* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


bool DOMStringList_contains(DOMStringList* self , jb_String * string) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "contains", em_Val_from(string)));
}

