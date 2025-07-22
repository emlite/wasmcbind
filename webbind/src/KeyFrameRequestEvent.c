#include <webbind/KeyFrameRequestEvent.h>


DEFINE_EMLITE_TYPE(KeyFrameRequestEvent, Event);


KeyFrameRequestEvent KeyFrameRequestEvent_new(const jb_DOMString* type) : Event(em_Val_global("KeyFrameRequestEvent").new_(em_Val_from(type))) {
        return KeyFrameRequestEvent(em_Val_new(em_Val_global("KeyFrameRequestEvent", em_Val_from(type)));
      }


KeyFrameRequestEvent KeyFrameRequestEvent_new(const jb_DOMString* type, const jb_DOMString* rid) : Event(em_Val_global("KeyFrameRequestEvent").new_(em_Val_from(type), em_Val_from(rid))) {
        return KeyFrameRequestEvent(em_Val_new(em_Val_global("KeyFrameRequestEvent", em_Val_from(type), em_Val_from(rid)));
      }


jb_DOMString KeyFrameRequestEvent_rid(const KeyFrameRequestEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "rid"));
}

