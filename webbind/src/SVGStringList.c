#include <webbind/SVGStringList.h>


DEFINE_EMLITE_TYPE(SVGStringList, em_Val);


unsigned long SVGStringList_length(const SVGStringList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


unsigned long SVGStringList_numberOfItems(const SVGStringList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfItems")));
}


jb_Undefined SVGStringList_clear(SVGStringList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_String SVGStringList_initialize(SVGStringList* self , jb_String * newItem) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


jb_String SVGStringList_getItem(SVGStringList* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


jb_String SVGStringList_insertItemBefore(SVGStringList* self , jb_String * newItem, unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


jb_String SVGStringList_replaceItem(SVGStringList* self , jb_String * newItem, unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


jb_String SVGStringList_removeItem(SVGStringList* self , unsigned long index) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


jb_String SVGStringList_appendItem(SVGStringList* self , jb_String * newItem) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}

