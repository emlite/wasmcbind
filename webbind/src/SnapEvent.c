#include <webbind/SnapEvent.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(SnapEvent, Event);


SnapEvent SnapEvent_new(const jb_DOMString* type) : Event(em_Val_global("SnapEvent").new_(em_Val_from(type))) {
        return SnapEvent(em_Val_new(em_Val_global("SnapEvent", em_Val_from(type)));
      }


SnapEvent SnapEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SnapEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SnapEvent(em_Val_new(em_Val_global("SnapEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Node SnapEvent_snapTargetBlock(const SnapEvent *self) {
    return em_Val_as(Node, em_Val_get(Event_as_val(self->inner), "snapTargetBlock"));
}


Node SnapEvent_snapTargetInline(const SnapEvent *self) {
    return em_Val_as(Node, em_Val_get(Event_as_val(self->inner), "snapTargetInline"));
}

