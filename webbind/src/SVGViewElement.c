#include <webbind/SVGViewElement.h>

#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>

DEFINE_EMLITE_TYPE(SVGViewElement, SVGElement);


SVGAnimatedRect SVGViewElement_viewBox(const SVGViewElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("viewBox")));
}


SVGAnimatedPreserveAspectRatio SVGViewElement_preserveAspectRatio(const SVGViewElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}

