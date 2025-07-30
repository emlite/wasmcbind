#include <webbind/SVGMarkerElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedAngle.h>
#include <webbind/SVGAngle.h>
#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>


DEFINE_EMLITE_TYPE(SVGMarkerElement, SVGElement);


SVGAnimatedLength SVGMarkerElement_refX(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("refX")));
}


SVGAnimatedLength SVGMarkerElement_refY(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("refY")));
}


SVGAnimatedEnumeration SVGMarkerElement_markerUnits(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("markerUnits")));
}


SVGAnimatedLength SVGMarkerElement_markerWidth(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("markerWidth")));
}


SVGAnimatedLength SVGMarkerElement_markerHeight(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("markerHeight")));
}


SVGAnimatedEnumeration SVGMarkerElement_orientType(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("orientType")));
}


SVGAnimatedAngle SVGMarkerElement_orientAngle(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedAngle, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("orientAngle")));
}


jb_String SVGMarkerElement_orient(const SVGMarkerElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("orient")));
}


void SVGMarkerElement_set_orient(SVGMarkerElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("orient"), em_Val_from(value));
}


jb_Undefined SVGMarkerElement_setOrientToAuto(SVGMarkerElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setOrientToAuto"));
}


jb_Undefined SVGMarkerElement_setOrientToAngle(SVGMarkerElement* self , SVGAngle * angle) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setOrientToAngle", em_Val_from(angle)));
}


SVGAnimatedRect SVGMarkerElement_viewBox(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("viewBox")));
}


SVGAnimatedPreserveAspectRatio SVGMarkerElement_preserveAspectRatio(const SVGMarkerElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}

