#include <webbind/XRInputSourceEvent.h>
#include <webbind/XRFrame.h>
#include <webbind/XRInputSource.h>


DEFINE_EMLITE_TYPE(XRInputSourceEvent, Event);


XRInputSourceEvent XRInputSourceEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("XRInputSourceEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return XRInputSourceEvent_from_val(&vv);
      }


XRFrame XRInputSourceEvent_frame(const XRInputSourceEvent *self) {
    return em_Val_as(XRFrame, em_Val_get(Event_as_val(self->inner), em_Val_from("frame")));
}


XRInputSource XRInputSourceEvent_inputSource(const XRInputSourceEvent *self) {
    return em_Val_as(XRInputSource, em_Val_get(Event_as_val(self->inner), em_Val_from("inputSource")));
}

