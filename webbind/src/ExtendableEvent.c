#include <webbind/ExtendableEvent.h>


DEFINE_EMLITE_TYPE(ExtendableEvent, Event);


ExtendableEvent ExtendableEvent_new(const jb_DOMString* type) : Event(em_Val_global("ExtendableEvent").new_(em_Val_from(type))) {
        return ExtendableEvent(em_Val_new(em_Val_global("ExtendableEvent", em_Val_from(type)));
      }


ExtendableEvent ExtendableEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ExtendableEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ExtendableEvent(em_Val_new(em_Val_global("ExtendableEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , const jb_Promise* f) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "waitUntil", em_Val_from(f)));
}

