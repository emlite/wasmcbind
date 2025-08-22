#include <webcbind/XRCubeLayer.h>

#include <webcbind/XRSpace.h>
#include <webcbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRCubeLayer, XRCompositionLayer);


XRSpace XRCubeLayer_space(const XRCubeLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("space")));
}


void XRCubeLayer_set_space(XRCubeLayer* self, XRSpace * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


DOMPointReadOnly XRCubeLayer_orientation(const XRCubeLayer *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("orientation")));
}


void XRCubeLayer_set_orientation(XRCubeLayer* self, DOMPointReadOnly * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("orientation"), em_Val_from(value));
}


jb_Any XRCubeLayer_onredraw(const XRCubeLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw")));
}


void XRCubeLayer_set_onredraw(XRCubeLayer* self, jb_Any * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw"), em_Val_from(value));
}

