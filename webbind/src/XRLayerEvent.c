#include <webbind/XRLayerEvent.h>
#include <webbind/XRLayer.h>


DEFINE_EMLITE_TYPE(XRLayerEvent, Event);


XRLayerEvent XRLayerEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("XRLayerEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return XRLayerEvent_from_val(&vv);
      }


XRLayer XRLayerEvent_layer(const XRLayerEvent *self) {
    return em_Val_as(XRLayer, em_Val_get(Event_as_val(self->inner), em_Val_from("layer")));
}

