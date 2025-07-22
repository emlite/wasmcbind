#include <webbind/SFrameTransformErrorEvent.h>


DEFINE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);


SFrameTransformErrorEvent SFrameTransformErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SFrameTransformErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SFrameTransformErrorEvent(em_Val_new(em_Val_global("SFrameTransformErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType(const SFrameTransformErrorEvent *self) {
    return em_Val_as(SFrameTransformErrorEventType, em_Val_get(Event_as_val(self->inner), "errorType"));
}


jb_Any SFrameTransformErrorEvent_keyID(const SFrameTransformErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "keyID"));
}


jb_Any SFrameTransformErrorEvent_frame(const SFrameTransformErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "frame"));
}

