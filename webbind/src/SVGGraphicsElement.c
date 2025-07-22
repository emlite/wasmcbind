#include <webbind/SVGGraphicsElement.h>
#include <webbind/SVGAnimatedTransformList.h>
#include <webbind/DOMRect.h>
#include <webbind/DOMMatrix.h>
#include <webbind/SVGStringList.h>


DEFINE_EMLITE_TYPE(SVGBoundingBoxOptions, em_Val);


bool SVGBoundingBoxOptions_fill(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fill")));
}


void SVGBoundingBoxOptions_set_fill(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fill"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_stroke(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stroke")));
}


void SVGBoundingBoxOptions_set_stroke(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stroke"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_markers(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("markers")));
}


void SVGBoundingBoxOptions_set_markers(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("markers"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_clipped(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clipped")));
}


void SVGBoundingBoxOptions_set_clipped(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clipped"), em_Val_from(value));
}

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

