#include <webcbind/SVGAnimatedTransformList.h>

#include <webcbind/SVGTransformList.h>

DEFINE_EMLITE_TYPE(SVGAnimatedTransformList, em_Val);


SVGTransformList SVGAnimatedTransformList_baseVal(const SVGAnimatedTransformList *self) {
    return em_Val_as(SVGTransformList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


SVGTransformList SVGAnimatedTransformList_animVal(const SVGAnimatedTransformList *self) {
    return em_Val_as(SVGTransformList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

