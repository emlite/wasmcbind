#include <webbind/SVGTransformList.h>
#include <webbind/SVGTransform.h>
#include <webbind/SVGSVGElement.h>


DEFINE_EMLITE_TYPE(SVGTransformList, em_Val);


unsigned long SVGTransformList_length(const SVGTransformList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


unsigned long SVGTransformList_numberOfItems(const SVGTransformList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfItems")));
}


jb_Undefined SVGTransformList_clear(SVGTransformList* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


SVGTransform SVGTransformList_initialize(SVGTransformList* self , SVGTransform * newItem) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(newItem)));
}


SVGTransform SVGTransformList_getItem(SVGTransformList* self , unsigned long index) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "getItem", em_Val_from(index)));
}


SVGTransform SVGTransformList_insertItemBefore(SVGTransformList* self , SVGTransform * newItem, unsigned long index) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "insertItemBefore", em_Val_from(newItem), em_Val_from(index)));
}


SVGTransform SVGTransformList_replaceItem(SVGTransformList* self , SVGTransform * newItem, unsigned long index) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "replaceItem", em_Val_from(newItem), em_Val_from(index)));
}


SVGTransform SVGTransformList_removeItem(SVGTransformList* self , unsigned long index) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "removeItem", em_Val_from(index)));
}


SVGTransform SVGTransformList_appendItem(SVGTransformList* self , SVGTransform * newItem) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "appendItem", em_Val_from(newItem)));
}


SVGTransform SVGTransformList_createSVGTransformFromMatrix0(SVGTransformList* self ) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "createSVGTransformFromMatrix"));
}


SVGTransform SVGTransformList_createSVGTransformFromMatrix1(SVGTransformList* self , DOMMatrix2DInit * matrix) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "createSVGTransformFromMatrix", em_Val_from(matrix)));
}


SVGTransform SVGTransformList_consolidate(SVGTransformList* self ) {
    return em_Val_as(SVGTransform, em_Val_call(em_Val_as_val(self->inner), "consolidate"));
}

