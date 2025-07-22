#include <webbind/PeriodicSyncEvent.h>


DEFINE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);


PeriodicSyncEvent PeriodicSyncEvent_new(jb_DOMString * type, jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("PeriodicSyncEvent") , em_Val_from(type), em_Val_from(init));
        return PeriodicSyncEvent_from_val(&vv);
      }


jb_DOMString PeriodicSyncEvent_tag(const PeriodicSyncEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("tag")));
}

