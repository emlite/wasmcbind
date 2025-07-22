#include <webbind/SVGFEDistantLightElement.h>
#include <webbind/SVGAnimatedNumber.h>


DEFINE_EMLITE_TYPE(SVGFEDistantLightElement, SVGElement);


SVGAnimatedNumber SVGFEDistantLightElement_azimuth(const SVGFEDistantLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("azimuth")));
}


SVGAnimatedNumber SVGFEDistantLightElement_elevation(const SVGFEDistantLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("elevation")));
}

