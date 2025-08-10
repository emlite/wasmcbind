#include <webbind/SVGGeometryElement.h>

#include <webbind/SVGAnimatedNumber.h>
#include <webbind/DOMPointInit.h>
#include <webbind/DOMPoint.h>

DEFINE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);


SVGAnimatedNumber SVGGeometryElement_pathLength(const SVGGeometryElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("pathLength")));
}


bool SVGGeometryElement_isPointInFill0(SVGGeometryElement* self ) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInFill"));
}


bool SVGGeometryElement_isPointInFill1(SVGGeometryElement* self , DOMPointInit * point) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInFill", em_Val_from(point)));
}


bool SVGGeometryElement_isPointInStroke0(SVGGeometryElement* self ) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInStroke"));
}


bool SVGGeometryElement_isPointInStroke1(SVGGeometryElement* self , DOMPointInit * point) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInStroke", em_Val_from(point)));
}


float SVGGeometryElement_getTotalLength(SVGGeometryElement* self ) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getTotalLength"));
}


DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getPointAtLength", em_Val_from(distance)));
}

