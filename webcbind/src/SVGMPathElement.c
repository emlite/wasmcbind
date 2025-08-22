#include <webcbind/SVGMPathElement.h>

#include <webcbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGMPathElement, SVGElement);


SVGAnimatedString SVGMPathElement_href(const SVGMPathElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("href")));
}

