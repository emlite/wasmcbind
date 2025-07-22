#include <webbind/SVGTextPathElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGTextPathElement, SVGTextContentElement);


SVGAnimatedLength SVGTextPathElement_startOffset(const SVGTextPathElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGTextContentElement_as_val(self->inner), "startOffset"));
}


SVGAnimatedEnumeration SVGTextPathElement_method(const SVGTextPathElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGTextContentElement_as_val(self->inner), "method"));
}


SVGAnimatedEnumeration SVGTextPathElement_spacing(const SVGTextPathElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGTextContentElement_as_val(self->inner), "spacing"));
}


SVGAnimatedString SVGTextPathElement_href(const SVGTextPathElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGTextContentElement_as_val(self->inner), "href"));
}

