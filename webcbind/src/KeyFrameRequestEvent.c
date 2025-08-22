#include <webcbind/KeyFrameRequestEvent.h>

DEFINE_EMLITE_TYPE(KeyFrameRequestEvent, Event);


KeyFrameRequestEvent KeyFrameRequestEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("KeyFrameRequestEvent") , em_Val_from(type));
        return KeyFrameRequestEvent_from_val(&vv);
      }


KeyFrameRequestEvent KeyFrameRequestEvent_new1(jb_String * type, jb_String * rid) {
        em_Val vv = em_Val_new(em_Val_global("KeyFrameRequestEvent") , em_Val_from(type), em_Val_from(rid));
        return KeyFrameRequestEvent_from_val(&vv);
      }


jb_String KeyFrameRequestEvent_rid(const KeyFrameRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("rid")));
}

