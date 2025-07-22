#include <webbind/XRCubeLayer.h>
#include <webbind/XRSpace.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(XRCubeLayer, XRCompositionLayer);


XRSpace XRCubeLayer_space(const XRCubeLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), "space"));
}


void XRCubeLayer_set_space(XRCubeLayer* self, const XRSpace* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "space", value);
}


DOMPointReadOnly XRCubeLayer_orientation(const XRCubeLayer *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(XRCompositionLayer_as_val(self->inner), "orientation"));
}


void XRCubeLayer_set_orientation(XRCubeLayer* self, const DOMPointReadOnly* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "orientation", value);
}


jb_Any XRCubeLayer_onredraw(const XRCubeLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), "onredraw"));
}


void XRCubeLayer_set_onredraw(XRCubeLayer* self, const jb_Any* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "onredraw", value);
}

