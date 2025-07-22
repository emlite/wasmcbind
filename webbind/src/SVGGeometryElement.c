#include <webbind/SVGGeometryElement.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/DOMPoint.h>


DEFINE_EMLITE_TYPE(DOMPointInit, em_Val);


double DOMPointInit_x(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


void DOMPointInit_set_x(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "x", value);
}


double DOMPointInit_y(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


void DOMPointInit_set_y(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "y", value);
}


double DOMPointInit_z(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "z"));
}


void DOMPointInit_set_z(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "z", value);
}


double DOMPointInit_w(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "w"));
}


void DOMPointInit_set_w(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "w", value);
}

DEFINE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);


SVGAnimatedNumber SVGGeometryElement_pathLength(const SVGGeometryElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGGraphicsElement_as_val(self->inner), "pathLength"));
}


bool SVGGeometryElement_isPointInFill(SVGGeometryElement* self ) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInFill"));
}


bool SVGGeometryElement_isPointInFill(SVGGeometryElement* self , const DOMPointInit* point) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInFill", em_Val_from(point)));
}


bool SVGGeometryElement_isPointInStroke(SVGGeometryElement* self ) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInStroke"));
}


bool SVGGeometryElement_isPointInStroke(SVGGeometryElement* self , const DOMPointInit* point) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "isPointInStroke", em_Val_from(point)));
}


float SVGGeometryElement_getTotalLength(SVGGeometryElement* self ) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getTotalLength"));
}


DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getPointAtLength", em_Val_from(distance)));
}

