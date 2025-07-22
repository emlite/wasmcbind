#include <webbind/SVGSymbolElement.h>
#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>


DEFINE_EMLITE_TYPE(SVGSymbolElement, SVGGraphicsElement);


SVGAnimatedRect SVGSymbolElement_viewBox(const SVGSymbolElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("viewBox")));
}


SVGAnimatedPreserveAspectRatio SVGSymbolElement_preserveAspectRatio(const SVGSymbolElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}

