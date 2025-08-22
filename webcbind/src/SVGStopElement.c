#include <webcbind/SVGStopElement.h>

#include <webcbind/SVGAnimatedNumber.h>

DEFINE_EMLITE_TYPE(SVGStopElement, SVGElement);


SVGAnimatedNumber SVGStopElement_offset(const SVGStopElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("offset")));
}

