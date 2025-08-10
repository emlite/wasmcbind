#include <webbind/SVGGraphicsElement.h>

#include <webbind/SVGAnimatedTransformList.h>
#include <webbind/DOMRect.h>
#include <webbind/SVGBoundingBoxOptions.h>
#include <webbind/DOMMatrix.h>
#include <webbind/SVGStringList.h>

DEFINE_EMLITE_TYPE(SVGGraphicsElement, SVGElement);


SVGAnimatedTransformList SVGGraphicsElement_transform(const SVGGraphicsElement *self) {
    return em_Val_as(SVGAnimatedTransformList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("transform")));
}


DOMRect SVGGraphicsElement_getBBox0(SVGGraphicsElement* self ) {
    return em_Val_as(DOMRect, em_Val_call(SVGElement_as_val(self->inner), "getBBox"));
}


DOMRect SVGGraphicsElement_getBBox1(SVGGraphicsElement* self , SVGBoundingBoxOptions * options) {
    return em_Val_as(DOMRect, em_Val_call(SVGElement_as_val(self->inner), "getBBox", em_Val_from(options)));
}


DOMMatrix SVGGraphicsElement_getCTM(SVGGraphicsElement* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(SVGElement_as_val(self->inner), "getCTM"));
}


DOMMatrix SVGGraphicsElement_getScreenCTM(SVGGraphicsElement* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(SVGElement_as_val(self->inner), "getScreenCTM"));
}


SVGStringList SVGGraphicsElement_requiredExtensions(const SVGGraphicsElement *self) {
    return em_Val_as(SVGStringList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("requiredExtensions")));
}


SVGStringList SVGGraphicsElement_systemLanguage(const SVGGraphicsElement *self) {
    return em_Val_as(SVGStringList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("systemLanguage")));
}

