#include <webcbind/PushEvent.h>

#include <webcbind/PushEventInit.h>
#include <webcbind/PushMessageData.h>

DEFINE_EMLITE_TYPE(PushEvent, ExtendableEvent);


PushEvent PushEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PushEvent") , em_Val_from(type));
        return PushEvent_from_val(&vv);
      }


PushEvent PushEvent_new1(jb_String * type, PushEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PushEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PushEvent_from_val(&vv);
      }


PushMessageData PushEvent_data(const PushEvent *self) {
    return em_Val_as(PushMessageData, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("data")));
}

