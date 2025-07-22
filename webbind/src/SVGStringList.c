#include <webbind/SVGStringList.h>


DEFINE_EMLITE_TYPE(SVGStringList, em_Val);


unsigned long SVGStringList_length(const SVGStringList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


unsigned long SVGStringList_numberOfItems(const SVGStringList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "numberOfItems"));
}


jb_Undefined SVGStringList_clear(SVGStringList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_DOMString SVGStringList_initialize(SVGStringList* self , const jb_DOMString* newItem) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


jb_DOMString SVGStringList_getItem(SVGStringList* self , unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


jb_DOMString SVGStringList_insertItemBefore(SVGStringList* self , const jb_DOMString* newItem, unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


jb_DOMString SVGStringList_replaceItem(SVGStringList* self , const jb_DOMString* newItem, unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


jb_DOMString SVGStringList_removeItem(SVGStringList* self , unsigned long index) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


jb_DOMString SVGStringList_appendItem(SVGStringList* self , const jb_DOMString* newItem) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}

