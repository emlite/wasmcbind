#include <webbind/SFrameTransformErrorEvent.h>

#include <webbind/SFrameTransformErrorEventInit.h>

DEFINE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);


SFrameTransformErrorEvent SFrameTransformErrorEvent_new(jb_String * type, SFrameTransformErrorEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SFrameTransformErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SFrameTransformErrorEvent_from_val(&vv);
      }


SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType(const SFrameTransformErrorEvent *self) {
    return em_Val_as(SFrameTransformErrorEventType, em_Val_get(Event_as_val(self->inner), em_Val_from("errorType")));
}


jb_Any SFrameTransformErrorEvent_keyID(const SFrameTransformErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("keyID")));
}


jb_Any SFrameTransformErrorEvent_frame(const SFrameTransformErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("frame")));
}

