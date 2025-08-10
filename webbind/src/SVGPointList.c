#include <webbind/SVGPointList.h>

#include <webbind/DOMPoint.h>

DEFINE_EMLITE_TYPE(SVGPointList, em_Val);


unsigned long SVGPointList_length(const SVGPointList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


unsigned long SVGPointList_numberOfItems(const SVGPointList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfItems")));
}


jb_Undefined SVGPointList_clear(SVGPointList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


DOMPoint SVGPointList_initialize(SVGPointList* self , DOMPoint * newItem) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


DOMPoint SVGPointList_getItem(SVGPointList* self , unsigned long index) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


DOMPoint SVGPointList_insertItemBefore(SVGPointList* self , DOMPoint * newItem, unsigned long index) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


DOMPoint SVGPointList_replaceItem(SVGPointList* self , DOMPoint * newItem, unsigned long index) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


DOMPoint SVGPointList_removeItem(SVGPointList* self , unsigned long index) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


DOMPoint SVGPointList_appendItem(SVGPointList* self , DOMPoint * newItem) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}

