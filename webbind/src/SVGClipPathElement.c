#include <webbind/SVGClipPathElement.h>

#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedTransformList.h>

DEFINE_EMLITE_TYPE(SVGClipPathElement, SVGElement);


SVGAnimatedEnumeration SVGClipPathElement_clipPathUnits(const SVGClipPathElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("clipPathUnits")));
}


SVGAnimatedTransformList SVGClipPathElement_transform(const SVGClipPathElement *self) {
    return em_Val_as(SVGAnimatedTransformList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("transform")));
}

