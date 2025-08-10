#include <webbind/SnapEvent.h>

#include <webbind/SnapEventInit.h>
#include <webbind/Node.h>

DEFINE_EMLITE_TYPE(SnapEvent, Event);


SnapEvent SnapEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("SnapEvent") , em_Val_from(type));
        return SnapEvent_from_val(&vv);
      }


SnapEvent SnapEvent_new1(jb_String * type, SnapEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SnapEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SnapEvent_from_val(&vv);
      }


Node SnapEvent_snapTargetBlock(const SnapEvent *self) {
    return em_Val_as(Node, em_Val_get(Event_as_val(self->inner), em_Val_from("snapTargetBlock")));
}


Node SnapEvent_snapTargetInline(const SnapEvent *self) {
    return em_Val_as(Node, em_Val_get(Event_as_val(self->inner), em_Val_from("snapTargetInline")));
}

