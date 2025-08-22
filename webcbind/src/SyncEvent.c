#include <webcbind/SyncEvent.h>

#include <webcbind/SyncEventInit.h>

DEFINE_EMLITE_TYPE(SyncEvent, ExtendableEvent);


SyncEvent SyncEvent_new(jb_String * type, SyncEventInit * init) {
        em_Val vv = em_Val_new(em_Val_global("SyncEvent") , em_Val_from(type), em_Val_from(init));
        return SyncEvent_from_val(&vv);
      }


jb_String SyncEvent_tag(const SyncEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("tag")));
}


bool SyncEvent_lastChance(const SyncEvent *self) {
    return em_Val_as(bool, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("lastChance")));
}

