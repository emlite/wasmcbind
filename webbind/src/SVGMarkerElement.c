#include <webbind/SVGMarkerElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedAngle.h>
#include <webbind/SVGAngle.h>
#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>


DEFINE_EMLITE_TYPE(SVGMarkerElement, SVGElement);


SVGAnimatedLength SVGMarkerElement_refX(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "refX"));
}


SVGAnimatedLength SVGMarkerElement_refY(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "refY"));
}


SVGAnimatedEnumeration SVGMarkerElement_markerUnits(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "markerUnits"));
}


SVGAnimatedLength SVGMarkerElement_markerWidth(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "markerWidth"));
}


SVGAnimatedLength SVGMarkerElement_markerHeight(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "markerHeight"));
}


SVGAnimatedEnumeration SVGMarkerElement_orientType(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "orientType"));
}


SVGAnimatedAngle SVGMarkerElement_orientAngle(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedAngle, em_Val_get(SVGElement_as_val(self->inner), "orientAngle"));
}


jb_DOMString SVGMarkerElement_orient(const SVGMarkerElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "orient"));
}


void SVGMarkerElement_set_orient(SVGMarkerElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "orient", value);
}


jb_Undefined SVGMarkerElement_setOrientToAuto(SVGMarkerElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setOrientToAuto"));
}


jb_Undefined SVGMarkerElement_setOrientToAngle(SVGMarkerElement* self , const SVGAngle* angle) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setOrientToAngle", em_Val_from(angle)));
}


SVGAnimatedRect SVGMarkerElement_viewBox(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGElement_as_val(self->inner), "viewBox"));
}


SVGAnimatedPreserveAspectRatio SVGMarkerElement_preserveAspectRatio(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), "preserveAspectRatio"));
}

