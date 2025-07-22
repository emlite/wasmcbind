#include <webbind/XRPlane.h>
#include <webbind/XRSpace.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(XRPlane, em_Val);


XRSpace XRPlane_planeSpace(const XRPlane *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), "planeSpace"));
}


jb_FrozenArray XRPlane_polygon(const XRPlane *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "polygon"));
}


XRPlaneOrientation XRPlane_orientation(const XRPlane *self) {
    return em_Val_as(XRPlaneOrientation, em_Val_get(em_Val_as_val(self->inner), "orientation"));
}


jb_Any XRPlane_lastChangedTime(const XRPlane *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "lastChangedTime"));
}


jb_DOMString XRPlane_semanticLabel(const XRPlane *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "semanticLabel"));
}

