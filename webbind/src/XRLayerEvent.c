#include <webbind/XRLayerEvent.h>
#include <webbind/XRLayer.h>


DEFINE_EMLITE_TYPE(XRLayerEvent, Event);


XRLayerEvent XRLayerEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("XRLayerEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return XRLayerEvent(em_Val_new(em_Val_global("XRLayerEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


XRLayer XRLayerEvent_layer(const XRLayerEvent *self) {
    return em_Val_as(XRLayer, em_Val_get(Event_as_val(self->inner), "layer"));
}

