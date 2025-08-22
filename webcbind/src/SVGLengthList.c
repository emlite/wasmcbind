#include <webcbind/SVGLengthList.h>

#include <webcbind/SVGLength.h>

DEFINE_EMLITE_TYPE(SVGLengthList, em_Val);


unsigned long SVGLengthList_length(const SVGLengthList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


unsigned long SVGLengthList_numberOfItems(const SVGLengthList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfItems")));
}


jb_Undefined SVGLengthList_clear(SVGLengthList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


SVGLength SVGLengthList_initialize(SVGLengthList* self , SVGLength * newItem) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


SVGLength SVGLengthList_getItem(SVGLengthList* self , unsigned long index) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


SVGLength SVGLengthList_insertItemBefore(SVGLengthList* self , SVGLength * newItem, unsigned long index) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


SVGLength SVGLengthList_replaceItem(SVGLengthList* self , SVGLength * newItem, unsigned long index) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


SVGLength SVGLengthList_removeItem(SVGLengthList* self , unsigned long index) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


SVGLength SVGLengthList_appendItem(SVGLengthList* self , SVGLength * newItem) {
    return em_Val_as(SVGLength, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}

