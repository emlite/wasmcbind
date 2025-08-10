#include <webbind/XRPlane.h>

#include <webbind/XRSpace.h>
#include <webbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRPlane, em_Val);


XRSpace XRPlane_planeSpace(const XRPlane *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("planeSpace")));
}


jb_Array XRPlane_polygon(const XRPlane *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("polygon")));
}


XRPlaneOrientation XRPlane_orientation(const XRPlane *self) {
    return em_Val_as(XRPlaneOrientation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("orientation")));
}


jb_Any XRPlane_lastChangedTime(const XRPlane *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lastChangedTime")));
}


jb_String XRPlane_semanticLabel(const XRPlane *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("semanticLabel")));
}

