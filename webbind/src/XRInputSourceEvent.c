#include <webbind/XRInputSourceEvent.h>
#include <webbind/XRFrame.h>
#include <webbind/XRInputSource.h>


DEFINE_EMLITE_TYPE(XRInputSourceEvent, Event);


XRInputSourceEvent XRInputSourceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("XRInputSourceEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return XRInputSourceEvent(em_Val_new(em_Val_global("XRInputSourceEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


XRFrame XRInputSourceEvent_frame(const XRInputSourceEvent *self) {
    return em_Val_as(XRFrame, em_Val_get(Event_as_val(self->inner), "frame"));
}


XRInputSource XRInputSourceEvent_inputSource(const XRInputSourceEvent *self) {
    return em_Val_as(XRInputSource, em_Val_get(Event_as_val(self->inner), "inputSource"));
}

