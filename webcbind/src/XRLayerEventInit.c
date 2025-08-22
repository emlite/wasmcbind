#include <webcbind/XRLayerEventInit.h>

#include <webcbind/XRLayer.h>

DEFINE_EMLITE_TYPE(XRLayerEventInit, EventInit);


XRLayer XRLayerEventInit_layer(const XRLayerEventInit *self) {
    return em_Val_as(XRLayer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("layer")));
}


void XRLayerEventInit_set_layer(XRLayerEventInit* self, XRLayer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("layer"), em_Val_from(value));
}


XRLayerEventInit XRLayerEventInit_new() {
    em_Val obj = em_Val_object();
    return XRLayerEventInit_from_val(&obj);
}

