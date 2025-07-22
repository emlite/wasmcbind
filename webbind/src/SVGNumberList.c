#include <webbind/SVGNumberList.h>
#include <webbind/SVGNumber.h>


DEFINE_EMLITE_TYPE(SVGNumberList, em_Val);


unsigned long SVGNumberList_length(const SVGNumberList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


unsigned long SVGNumberList_numberOfItems(const SVGNumberList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfItems")));
}


jb_Undefined SVGNumberList_clear(SVGNumberList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


SVGNumber SVGNumberList_initialize(SVGNumberList* self , SVGNumber * newItem) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


SVGNumber SVGNumberList_getItem(SVGNumberList* self , unsigned long index) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


SVGNumber SVGNumberList_insertItemBefore(SVGNumberList* self , SVGNumber * newItem, unsigned long index) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


SVGNumber SVGNumberList_replaceItem(SVGNumberList* self , SVGNumber * newItem, unsigned long index) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


SVGNumber SVGNumberList_removeItem(SVGNumberList* self , unsigned long index) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


SVGNumber SVGNumberList_appendItem(SVGNumberList* self , SVGNumber * newItem) {
    return em_Val_as(SVGNumber, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}

