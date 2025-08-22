#include <webcbind/DOMRectList.h>

#include <webcbind/DOMRect.h>

DEFINE_EMLITE_TYPE(DOMRectList, em_Val);


unsigned long DOMRectList_length(const DOMRectList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


DOMRect DOMRectList_item(DOMRectList* self , unsigned long index) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}

